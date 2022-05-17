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
    
    vector<lln> v(n);
    V cin>>val;

    sort(v.begin() , v.end());
  
    for(int i=0;i<k;i++)
    {
        lln mx = v[i];
        for(int j=0;j<=31;j++)
        {
            mx = max(v[i] , (v[i]|(1<<j)));
        }
        v[i] = mx;
    }

    lln andd = v[0];
    for(int i=1;i<n;i++){
        andd &= v[i];
    }
    cout << andd << endl;
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