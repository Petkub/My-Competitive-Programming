#include<bits/stdc++.h>
using namespace std;
#define int long long
#define DEBUG(x) cerr<<#x<< " = "<<x<<'\n'
const int INF = 4e18;

struct SegmentTree
{
    int n;
    vector<int> seg, lazy;

    SegmentTree(int _n)
    {
        n = _n;
        seg.assign(4*n+5, 0);
        lazy.assign(4*n+5, 0);
    }

    void apply(int idx, int v)
    {
        seg[idx] += v;
        lazy[idx] += v;
    }

    void push(int idx, int l, int r)
    {
        if(lazy[idx]==0) return;
        if(l==r)
        {
            lazy[idx]=0;
            return;
        }

        int mid=(l+r)/2;
        apply(idx*2,lazy[idx]);
        apply(idx*2+1,lazy[idx]);
        lazy[idx] = 0;
    }

    void build(int idx, int l, int r)
    {
        if(l==r) {cin>>seg[idx]; return;}
        int mid = (l+r)/2;
        build(idx*2,l,mid);
        build(idx*2+1,mid+1,r);
        seg[idx] = max(seg[idx*2],seg[idx*2+1]);
    }

    void update(int idx, int l, int r, int ql, int qr, int v)
    {
        if(qr < l or ql > r) return;
        if(l >= ql and r <= qr) {apply(idx, v); return;}
        push(idx, l, r);
        int mid = (l+r)/2;
        update(idx*2, l,mid,ql,qr,v);
        update(idx*2+1, mid+1,r,ql,qr,v);
        seg[idx] = max(seg[idx*2],seg[idx*2+1]);
    }

    int query(int idx, int l, int r, int ql, int qr)
    {
        if(qr < l or ql > r) return -INF;
        if(l >= ql and r <= qr) return seg[idx];
        push(idx, l, r);
        int mid = (l+r)/2;
        return max(query(idx*2, l,mid,ql,qr),query(idx*2+1,mid+1,r,ql,qr));
    }
};

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n; cin>>n;
    SegmentTree st(n);
    st.build(1, 1, n);
    int q; cin>>q;
    while(q--)
    {
        int t,x,y; cin>>t>>x>>y;
        if(t==0)
        {
            cout<<st.query(1, 1, n, ++x, ++y)<<'\n';
        }
        else
        {
            int c;cin>>c;
            st.update(1, 1, n, ++x,++y, c);
        }
    }
    return 0;
}