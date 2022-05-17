#include <bits/stdc++.h>
using namespace std;

typedef long long int lln;
typedef long long ll;
#define R for (auto i = 0; i < n; ++i)
#define V for (auto &val : v)
#define pb push_back
const double pi = 3.14159265358979323846;
#define debug(x) cout << #x << ' ' << x << endl

void solve()
{
    lln n;
    cin >> n;

    string s = to_string(n);

    if (s.length() <= 2)
        return void(cout << s << endl);
    bool flag = false;
    while (!flag)
    {
        string t = to_string(n);
        int x = (s[1] - '0') - (s[0] - '0');
        for (int i = 0; i < s.length(); i++)
        {
            int pp = (s[i] - '0') + x;
            if (pp + '0' == s[i + 1])
                continue;
            else
            {
                flag = true;
                break;
            }
            if (i == s.length() - 1)
            {
                return void(cout << t << endl);
            }
        }
        if (flag)
        {
            n++;
            flag = false;
        }
        else
        {
            flag=true;
        }
    }
}


int main()
{
    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}