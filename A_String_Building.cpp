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
    
    if(s.length()==1) return void (cout << "NO\n");
    if(s[0]!=s[1]) return void (cout << "NO\n");
    for(int i=1;i<s.length();i++)
    {
        if(s[i]!=s[i-1] && s[i]!=s[i+1]) return void (cout << "NO\n");
    }
    if(s[s.length()-1] != s[s.length()-2]) cout << "NO\n"; 
    else cout << "YES\n";
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