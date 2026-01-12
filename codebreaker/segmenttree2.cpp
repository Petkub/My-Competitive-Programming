#include<bits/stdc++.h>
using namespace std;
#define int long long

struct SegmentTree
{
    int n;
    vector<int> seg,lazy;
    SegmentTree(int _n)
    {
        n=_n;
        seg.assign(4*n+5,0);
        lazy.assign(4*n+5, 0);
    }

    void push(int idx,int l,int r)
    {
        if(lazy[idx]!=0)
        {
            int mid=(l+r)/2;
            seg[idx*2]+=lazy[idx]*(mid-l+1);
            lazy[idx*2]+=lazy[idx];

            seg[idx*2+1]+=lazy[idx]*(r-mid);
            lazy[idx*2+1]+=lazy[idx];

            lazy[idx]=0;
        }
    }

    void update(int idx,int l,int r,int ql,int qr,int val)
    {
        if(ql<=l and r<=qr)
        {
            seg[idx]+=val*(r-l+1);
            lazy[idx]+=val;
            return;
        }
        int mid = (l+r)/2;
        push(idx,l,r);
        if(ql <= mid) update(idx*2,l,mid,ql,qr,val);
        if(qr > mid) update(idx*2+1,mid+1,r,ql,qr,val);
        seg[idx] = seg[idx*2]+seg[idx*2+1];
    }

    int query(int idx, int l, int r, int ql, int qr)
    {
        if(ql<=l and r<=qr)
        {
            return seg[idx];
        }
        int mid=(l+r)/2;
        push(idx, l, r);
        int res = 0;
        if(ql <= mid) res+=query(idx*2,l,mid,ql,qr);
        if(qr > mid) res+=query(idx*2+1,mid+1,r,ql,qr);
        return res;
    }
};

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N,Q; cin>>N>>Q;
    SegmentTree st(N+1);
    while(Q--)
    {
        int t; cin>>t;
        if(t==1)
        {
            int l,r,k;cin>>l>>r>>k;
            st.update(1, 1, N, l, r, k);
        }
        else
        {
            int l,r; cin>>l>>r;
            cout<<st.query(1, 1, N, l, r)<<'\n';
        }
    }
    return 0;
}