#include<bits/stdc++.h>
using namespace std;

vector<int> arr = {1, 1, 2, 2, 3, 4, 6, 7, 9, 10, 12};

bool binarySearch1(int value)
{
    int low = 0;
    int high = arr.size()-1;
    while(low<=high)
    {
        int mid = low + (high - low) / 2;
        if(arr[mid] == value)
        {
            return true;
        }
        else if(arr[mid] < value)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return false;
}

bool binarySearch2(int value, int low, int high)
{
    if(low>high)
    {
        return false;
    }
    int mid = low + (high - low) / 2;
    if(arr[mid] < value)
    {
        return binarySearch2(value, mid + 1, high);
    }
    if(arr[mid] > value)
    {
        return binarySearch2(value, low, mid - 1);
    }
    return true;
}

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int v = 12;
    cout<<(binarySearch1(v)? "Found":"Not Found")<<'\n';
    cout<<(binarySearch2(v,0, arr.size()-1)? "Found":"Not Found")<<'\n';
    return 0;
}