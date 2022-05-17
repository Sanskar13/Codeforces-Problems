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

    if(n==1 && v[0]>1) return void (cout << "NO\n");
    if(n==1 && v[0]==1) return void (cout << "YES\n");

    sort(v.begin() , v.end());
    if(v[n-1]-v[n-2] > 1) cout << "NO\n";
    else cout << "YES\n";
}

int main() {
int t;
cin >> t;

while(t--){
    solve();
}
return 0;
}