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
    int n,k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<pair<char,int> > v;
    for(int i=0;i<n;i++)
    {
        v.pb({s[i],i});
    }
    sort(v.begin() , v.end());


    vector<pair<int,char> > ans;
    for(int i=k;i<n;i++)
    {
        ans.pb({v[i].second , v[i].first});
    }

    sort(ans.begin() , ans.end());
    for(auto val : ans){
        cout << val.second;
    }cout << endl;
}            

int main() {
int t=1;
// cin >> t;

while(t--)
{
    solve();
}
return 0;
}