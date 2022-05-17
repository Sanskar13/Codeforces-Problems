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
    lln n,k;
    cin >> n >> k;

    vector<lln> v(n);
    V cin>>val;

    sort(v.begin() , v.end());
    int csum=v[0];
    vector<int> tmp;
    for(int i=1;i<n;i++)
    {
        if(i==(n-1)){
            v[i]-=csum;break;
        }
        if(v[i]-csum == 0){tmp.pb(v[i]);}
        else{csum += v[i];}
    }

    int sum=0;
    for(int i=0;i<tmp.size();i++){
        sum += (tmp[i]-csum);
    }
    v[n-1] -= sum;
    if(v[n-1]==k) cout << "YES\n";
    else cout << "NO\n";


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