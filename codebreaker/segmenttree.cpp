#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll INF = 4e18;

struct SegmentTree
{
    int n;
    vector<int> seg;

    SegmentTree(int _n)
    {
        n = _n;
        seg.assign(4*n+5, 0);
    }

    ll query(int idx, int l, int r, int ql, int qr)
    {
        if(qr < l or r < ql) return INF;
        if(l >= ql and r <= qr) return seg[idx];

        int mid = (l+r)/2;
        return min(query(idx*2, l, mid, ql, qr), query(idx*2+1, mid+1, r, ql, qr));
    }

    void update(int idx, int l, int r, int pos, int v)
    {
        if(l==r) {seg[idx] = v; return;}
        int mid = (l+r)/2;
        if (pos <= mid) update(idx*2, l, mid, pos, v);
        else update(idx*2+1, mid+1, r, pos, v);
        seg[idx] = min(seg[idx*2], seg[idx*2+1]);
    }

};

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n, q; cin>>n>>q;
    SegmentTree st(n);
    for(int i=0;i<q;i++)
    {
        int cmd,p,v; cin>>cmd>>p>>v;
        if(cmd==1)
        {
            st.update(1, 1, n, ++p, v);
        }
        else
        {
            cout<<st.query(1, 1, n, ++p, ++v)<<'\n';
        }
    }
    return 0;
}