#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    // Determine the width of the diamond
    int w;
    if (n % 2 != 0) 
    {
        w = n;
    }
    else 
    {
        w = n - 1;
    }

    // The middle row index (0-indexed)
    int mid = (n - 1) / 2;

    // Loop through each line to print
    for (int i = 0; i < n; ++i) 
    {
        // Calculate the pattern row index based on symmetry
        int pr = i;
        if (i > mid) 
        {
            pr = (n - 1) - i;
        }

        // Calculate outer hyphens
        int out_h = mid - pr;

        // Print leading hyphens
        for (int j = 0; j < out_h; ++j) 
        {
            cout << '-';
        }

        // Print the middle part (stars and inner hyphens)
        if (pr == 0) 
        {
            // The tip of the diamond
            cout << '*';
        }
        else 
        {
            // Other rows
            int in_h = w - 2 * out_h - 2;
            cout << '*';
            for (int j = 0; j < in_h; ++j) 
            {
                cout << '-';
            }
            cout << '*';
        }

        // Print trailing hyphens
        for (int j = 0; j < out_h; ++j) 
        {
            cout << '-';
        }

        cout << "\n";
    }

    return 0;
}