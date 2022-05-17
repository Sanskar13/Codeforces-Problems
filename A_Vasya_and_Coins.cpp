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
    lln a,b;
    cin >> a >> b;

    if(a==0) return void (cout << "1" <<  endl);

    cout << a+(lln)2*b+1 << endl;
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