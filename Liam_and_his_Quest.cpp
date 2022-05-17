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

    vector<int> v;
    v.pb(0);
    int pos =0,mx=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin >> x;
        v.pb(x);
        mx = max(mx , x);
    }

    ll sum=0;
    for(int i=1;i<=n/4;i++)
    {
        int j=i;
        ll s=0;
        while(j<=n)
        {
            s += v[j];
            j+=v[j];
        }
        sum = max(s,sum);
    }

      for(int i=n/4+1;i<=n/2;i++)
    {
        int j=i;
        ll s=0;
        while(j<=n)
        {
            s += v[j];
            j+=v[j];
        }
        sum = max(s,sum);
    }
      for(int i=n/2+1;i<=(3*n)/4;i++)
    {
        int j=i;
        ll s=0;
        while(j<=n)
        {
            s += v[j];
            j+=v[j];
        }
        sum = max(s,sum);
    }
      for(int i=((3*n)/4)+1;i<=n;i++)
    {
        int j=i;
        ll s=0;
        while(j<=n)
        {
            s += v[j];
            j+=v[j];
        }
        sum = max(s,sum);
    }
    cout << sum << endl;

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