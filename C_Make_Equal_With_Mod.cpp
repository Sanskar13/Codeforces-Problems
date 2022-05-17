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

    sort(v.begin()  , v.end());
    int cnt = count(v.begin() , v.end() , 1);
    if(cnt==0) return void (cout << "YES\n");
    else{
        for(int i=0;i<n;i++)
        {
            if(v[i]==0 || v[i]==2) return void (cout << "NO\n");
        }
    }

     // element valued 0 and 2 are not present so,
        // smallest even number can be 4,
        for(int i=1;i<n;i++)
        {
                int x = abs(v[i]-v[i-1]);
                if(x==1) return void (cout << "NO\n");
        }
        cout << "YES\n";

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