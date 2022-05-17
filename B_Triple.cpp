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
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;

        v.pb(x);
        m[x]++;
    }

    for(auto val : m){
        if(val.second >= 3) return void (cout << val.first << endl);
    }
    cout << "-1\n";
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