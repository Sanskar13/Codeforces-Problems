#include <bits/stdc++.h>
using namespace std;

typedef long long int lln;
typedef long long ll;
#define R for (auto i = 0; i < n; ++i)
#define V for (auto &val : v)
#define pb push_back
const double pi = 3.14159265358979323846;
#define debug(x) cout << #x << ' ' << x << endl

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n), tmp;
    V cin >> val;

    tmp = v;
    sort(tmp.begin(), tmp.end());

    if(n==1) return void (cout << "YES\n");

    int sz = (n+2-1)/2;
    bool flag=false;
    for(int i=0;i<sz;i++){
        if(v[i]==tmp[0]){flag=true;break;}
    }
    if(!flag) return void (cout << "NO\n");
    for(int i=sz;i<n;i++)
    {
        if(v[i]==tmp[n-1]){flag=true;break;}
    }
    if(!flag) return void (cout << "NO\n");
    cout << "YES\n";
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}