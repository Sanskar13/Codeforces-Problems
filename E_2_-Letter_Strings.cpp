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

    vector<string> v;
    for(int i=0;i<n;i++){
        string s;
         cin >> s;
        v.pb(s);
    }

    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((v[i][0]==v[j][0] || v[i][1]==v[j][1]) && v[i]!=v[j]) ans++; 
        }
    }
    cout << ans << endl;
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