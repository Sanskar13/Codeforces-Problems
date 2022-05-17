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

    ll sum=0;
    sum = accumulate(v.begin() , v.end() , sum);
    if(sum%2==0) cout << "1\n";
    else cout << "2\n";
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