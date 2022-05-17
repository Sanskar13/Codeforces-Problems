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
    lln n;
    cin >> n;

    int neven=0,nodd=0;
    int even=0,odd=0;
    if(n%2==0) {even=n;odd=n-1;}
    else even=n-1;odd=n;

    neven = even/2;
    nodd = (odd+1)/2;

    lln cal1 = neven*(neven+1);
    lln cal2 = nodd*(1+odd)/2;

    cout << cal1-cal2 << endl;
    

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