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

    vector<int> odd,even;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        if(i%2) odd.pb(x);
        else even.pb(x);
    }

    for(int i=0;i<odd.size()-1;i++)
    {
        if(odd[i]%2 != odd[i+1]%2) return void (cout << "NO\n"); 
    }
    for(int i=0;i<even.size()-1;i++)
    {
        if(even[i]%2 != even[i+1]%2) return void (cout << "NO\n"); 
    }
    cout << "YES\n";

}

int main() {
int t;
cin >>t;

while(t--)
{
    solve();
}
return 0;
}