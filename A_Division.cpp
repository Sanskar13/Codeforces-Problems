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

    if(n>=1900) cout << "Division 1\n";
    else if(n<=1899 && n>=1600) cout << "Division 2\n";
    else if(n<=1599 && n>=1400) cout << "Division 3\n";
    else if(n<=1399) cout << "Division 4\n";


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