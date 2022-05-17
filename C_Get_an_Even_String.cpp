#include<bits/stdc++.h>
using namespace std;
                    
typedef long long int lln;
typedef long long ll;
#define R for (auto i = 0; i < n; ++i)
#define V for(auto &val : v)
#define pb push_back
const double pi = 3.14159265358979323846;
#define debug(x) cout<< #x << ' ' << x <<endl

void solve()
{
    string s;
    cin >> s;
    
    map<char,int> m;
    for(int i=0;i<s.length();i++)
    {
       m[s[i]]++;
    }

    string t;
    for(int i=0;i<s.length();i++)
    {
        if(m[s[i]]>1){t.pb(s[i]);}
    }
    int ans = (int)(s.length()-t.length());
    
}

int main() {
int t;
cin >> t;

while(t--)
{
    solve();
}
return 0;
}