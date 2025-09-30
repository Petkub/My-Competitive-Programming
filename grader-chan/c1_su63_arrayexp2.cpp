#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int r,c;
    scanf("%lld%lld", &r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%lld", &arr[i][j]);
        }
    }
    int pos=0,neg=0,even=0,odd=0;
    int k;
    scanf("%lld", &k);
    bool mask[4];
    bool last[4];
    memset(mask, false, sizeof(mask));
    while(k--)
    {
        int a,b;
        scanf("%lld%lld",&a,&b);
        a--,b--;
        if((a>=0 and a<r) and (b>=0 and b<c))
        {
            if(arr[a][b] > 0) {pos++; mask[0]=true;}
            if(arr[a][b] < 0) {neg++; mask[1]=true;} 
            if(abs(arr[a][b]) % 2 == 0) {even++; mask[2]=true;}
            if(abs(arr[a][b] % 2 != 0)) {odd++; mask[3]=true;}
            memcpy(last, mask, sizeof(mask));
            memset(mask, false, sizeof(mask));
        }
        else
        {
            if(last[0]) pos++;
            if(last[1]) neg++;
            if(last[2]) even++;
            if(last[3]) odd++;
        }
    }
    printf("%lld %lld %lld %lld", pos,neg,even,odd);
    return 0;
}