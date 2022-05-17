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
    int n;
    cin >> n;
    string s;
    cin >> s;

    int m;
    cin >> m;
    set<char> ss;
    for(int i=0;i<m;i++){char c;cin >> c;ss.insert(c);}

    int cnt=0,j=0;
    for(j=0;j<n;j++)
    {
        if(ss.find(s[j])!=ss.end()){break;}
        else cnt++;
    }

    if(j==n) return void (cout << "0\n");

    int c=0,mx=0;
    for(int i=j+1;i<n;i++)
    {   
        if(ss.find(s[i])!=ss.end()){
           mx = max(mx , c+1);
           c=0;
        }else c++;
    }
    if(mx >= cnt){cout << mx << endl;}
    else{cout << cnt << endl;}
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