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
    int n;
    cin >> n;

    string s;
    cin >> s;

    char c1, c2;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            c1 = s[i];
            c2 = s[j];
            break;
        }
    }

    string t1, t2;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != c1)
            t1.pb(s[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] != c2)
            t2.pb(s[i]);
    }

    string tmp1 = t1, tmp2 = t2;
    reverse(t1.begin(), t1.end());
    reverse(t2.begin(), t2.end());

    if (t1 != tmp1 && t2 != tmp2)
        return void(cout << "-1\n");

    int cnt1 = 0, cnt2 = 0, ans = INT_MAX;

    t1.clear();
    t2.clear();
    int i = 0, j = n - 1;
    while (i <= j)
    {
        if(i==j){t1.pb(s[i]);break;}
        else if (s[i] == s[j])
        {
            t1.pb(s[i]);
            t2.pb(s[j]);
            // cout << s[i] << s[j];
            i++, j--;
            continue;
        }
        else if (s[i] == c1)
        {
            cnt1++;
            i++;
        }
        else if (s[j] == c1)
        {
            cnt1++;
            j--;
        }
        else
            break;
    }
    reverse(t2.begin() , t2.end());
    t1.append(t2);
    tmp1=t1;
     reverse(t1.begin() , t1.end());
     if(tmp1==t1){ans=n-t1.length();}
    // cout << endl;
    t1.clear();
    t2.clear();
    i = 0, j = n - 1;
    while (i <= j)
    {
         if(i==j){t1.pb(s[i]);break;}
        else if (s[i] == s[j])
        {
             t1.pb(s[i]);
            t2.pb(s[j]);
            i++, j--;
            continue;
        }
        else if (s[i] == c2)
        {
            cnt2++;
            i++;
        }
        else if (s[j] == c2)
        {
            cnt2++;
            j--;
        }
        else
            break;
    }
      reverse(t2.begin() , t2.end());
    t1.append(t2);
    tmp1=t1;
     reverse(t1.begin() , t1.end());
     if(tmp1==t1){ans=min(ans,(int)(n-t1.length()));}

     cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}