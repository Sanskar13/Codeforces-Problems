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

    vector<int> v(n);
    V cin>>val;

    vector<int> even,odd;
    for(int i=0;i<n;i++)
    {
        if(v[i]%2) odd.pb(v[i]);
        else even.pb(v[i]);
    }
   
    if(odd.size()%2==0) cout << min({(odd.size()/2) , even.size()}) << endl;
    else cout << even.size() << endl;


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