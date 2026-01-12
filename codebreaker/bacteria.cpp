#include<bits/stdc++.h>
using namespace std;
#define int long long
#define DEBUG(x) cerr << #x << " = " << x << '\n';

struct SegmentTree
{
    int n;
    vector<int> seg,lazy;
    SegmentTree(int _n)
    {
        n = _n;
        seg.assign(4*n+5, 0);
        lazy.assign(4*n+5,1);
    }
    void build(int idx, int l, int r)
    {
        if(l==r)
        {
            cin>>seg[idx];
            return;
        }
        int mid = (l+r)/2;
        build(idx*2, l, mid);
        build(idx*2+1, mid+1, r);
        seg[idx] = seg[idx*2]+seg[idx*2+1];
    }

    void push(int idx, int l, int r)
    {
        if(lazy[idx]!=1)
        {
            seg[idx*2] /= lazy[idx];
            lazy[idx*2] *= lazy[idx];
            seg[idx*2+1] /= lazy[idx];
            lazy[idx*2+1] *= lazy[idx];
            lazy[idx] = 1;
        }
    }
    void range_update(int idx, int l, int r, int ql, int qr, int val)
    {
        if(ql <= l and r <= qr)
        {
            seg[idx]/=val;
            lazy[idx]*=val;
            return;
        }
        push(idx, l, r);
        int mid = (l+r)/2;
        if(ql <= mid) range_update(idx*2,l,mid,ql,qr,val);
        if(qr > mid) range_update(idx*2+1,mid+1,r,ql,qr,val);
        seg[idx] = seg[idx*2]+seg[idx*2+1];
        
    }

    void point_update(int idx, int l, int r, int pos, int val)
    {
        if(l==r)
        {
            seg[idx] = val;
            return;
        }
        int mid = (l+r)/2;
        if(pos <= mid) point_update(idx*2, l, mid, pos, val);
        else point_update(idx*2+1,mid+1,r,pos,val);
        seg[idx]=seg[idx*2]+seg[idx*2+1];
    }

    int query(int idx, int l, int r, int ql, int qr)
    {
        if(ql <= l and r <= qr)
        {
            return seg[idx];
        }
        push(idx, l, r);
        int mid = (l+r)/2;
        int res = 0;
        if(ql <= mid) res+=query(idx*2,l,mid,ql,qr);
        if(qr > mid) res+=query(idx*2+1,mid+1,r,ql,qr);
        return res;
    }
};

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n,q;cin>>n>>q;
    SegmentTree st(n);
    st.build(1, 1, n);
    while(q--)
    {
        int t; cin>>t;
        if(t==0)
        {
            int l,r,v; cin>>l>>r>>v;
            st.range_update(1, 1, n, l+1, r+1, v);
        }
        else if (t==1)
        {
            int p,v; cin>>p>>v;
            st.point_update(1, 1, n, p+1, v);
        }
        else
        { 
            int l,r; cin>>l>>r;
            cout<<st.query(1, 1, n, l+1, r+1)<<'\n';
        }
    }
    return 0;
}