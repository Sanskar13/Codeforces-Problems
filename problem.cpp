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

    int j=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {   
        j = i;
        while(j<n)
        {
            j += v[j];
            sum = max(sum , j);
        }
    }
    cout << sum << endl;


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