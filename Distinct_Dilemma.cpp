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
    vector<int> v(n);
    V
    {
        cin >> val;
    }

    int sum=0;
    sum = accumulate(v.begin() , v.end() , sum);

    int tmp=1;
    int cnt=0;
    while(tmp<=sum){
        sum -= tmp;
        tmp++;
        cnt++;
    }

    cout << tmp-1 << endl;

}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}