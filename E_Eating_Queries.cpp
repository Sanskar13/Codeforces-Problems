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
    int n,q;
    cin >> n >> q;

    vector<int> v(n),qq;
    V cin>>val;
    for(int i=0;i<q;i++){int x;cin >> x;qq.pb(x);}
    lln sum=0;
    sort(v.rbegin() , v.rend());
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        sum += v[i];
        ans.pb(sum);
    }
    
    for(int i=0;i<q;i++)
    {
        int x = qq[i];
        auto it = lower_bound(ans.begin() , ans.end() , x);
        if(it==ans.end()) cout << "-1\n";
        else cout << it-ans.begin()+1 << endl;
    }

}

int main() {
ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int t;
cin >> t;
while(t--)
{
    solve();
}
return 0;
}