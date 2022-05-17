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

    int cnt = count(v.begin() , v.end() , 1);
    int ans=cnt;
    for(int m=0;m<n;m++)
    {
    for(int i=0;i<n;i++)
    {
        vector<int> tmp;
        tmp = v;
        for(int j=i;j<m;j++)
        {
            tmp[j] = 1-tmp[j];
        }

        int tt=0;
        for(int k=0;k<n;k++)
        {
            if(tmp[k]==1) tt++;
        }
        ans = max(ans , cnt);
    }
    }
    cout << ans << endl;
}

int main() {
  solve();
return 0;
}