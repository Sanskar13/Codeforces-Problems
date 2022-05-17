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
    for(auto val : s){
        m[val]++;
    }
    if(m.size()==1) return void (cout << "YES\n");
    map<char,int> tmp;
    for(int i=0;i<s.length();i++)
    {
        tmp[s[i]]++;
        if(tmp[s[i]]>1){
            if(i%m.size()!=0) return void (cout << "NO\n");
            int x = 0,j=0;
            for(j=i;j<min(i+m.size() , s.length())&&x<m.size();j++)
            {
                if(s[x++]==s[j]) continue;
                else {return void (cout << "NO\n");}
            }
            i=j-1;
        }
    }
    cout << "YES\n";
}

int main() {
ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int t;
cin >> t;

while(t--)
{
    solve();
}
return 0;
}