#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    string numbers;
    while(getline(cin, numbers))
    {
        stringstream ss(numbers);
        string temp;
        vector<int> arr;
        while(ss >> temp)
        {
            arr.push_back(stoi(temp));
        }
        int isJolly = true;
        int s = arr.size();
        for(int i=1;i<s;i++)
        {
            if(s==2) {break;}
            int diff = abs(arr[i]-arr[i-1]);
            if(!(diff >= 1 && diff <= s-1))
            {
                isJolly=false;
                break;
            }
        }
        cout<<(isJolly? "Jolly":"Not Jolly")<<'\n';
    }
    return 0;
}