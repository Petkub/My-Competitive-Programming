#include<bits/stdc++.h>
using namespace std;
using ump = unordered_map<string, int>;

bool isPunc(const char &c)
{
    return c==','||c=='.'||c==':'||c==';'||c=='!'||
           c=='?'||c=='"'||c=='('||c==')';
};

double ET(const int cnt, ump &p)
{
    double et = 0;
    for (const auto &[k, v]: p)
    {
        et += v * (log10(cnt) - log10(v));
    }
    return (1.0/cnt) * et;
}

double ER(const double &et, const int &cnt)
{
    return et / log10(cnt) * 100;
}

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    string text;
    ump p;
    int cnt = 0;
    while (cin >> text && text != "****END_OF_INPUT****")
    {
        if (text == "****END_OF_TEXT****")
        {
            double et = ET(cnt, p);
            double er = ER(et, cnt);
            cout << cnt << " " << fixed << setprecision(1) << et <<  " " << llround(er) << '\n';
            cnt = 0;
            p.clear();
            continue;
        }   
        string word;
        for (char &c: text)
        {
            if (!isPunc(c))
            {
                word += tolower(c);
            }
            else if (!word.empty())
            {
                p[word]++; cnt++; 
                word.clear();
            }
        }
        if (!word.empty()) {p[word]++; cnt++;}
    }
    return (0);
}


