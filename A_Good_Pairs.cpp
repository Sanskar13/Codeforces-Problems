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

    vector<pair<int,int> > v;
    for(int i=0;i<n;i++)
    {
        int x;cin >>x;
        v.pb({x,i+1});
    }
    
    sort(v.begin() , v.end());
    cout << v[0].second << " " << v[n-1].second << endl;

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