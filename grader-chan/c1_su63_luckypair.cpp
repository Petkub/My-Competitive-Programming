#include<cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    int lucky;
    scanf("%d", &lucky);
    bool ok=false;
    for(int i=0;i<n;i++)
    {
        int tot=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] + arr[j] == lucky)
            {
                ok=true;
                printf("%d %d\n", arr[i],arr[j]);
            }
        }
    }
    if(!ok) printf("No");
    return 0;
}