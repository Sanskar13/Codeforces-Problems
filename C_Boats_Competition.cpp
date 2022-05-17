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

    sort(v.begin() , v.end());

    set<int> total;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int x = v[i]+v[j];
            total.insert(x);
        }
    }

    int ans=0;
    for(auto val : total){
        int cnt=0;
        multiset<int> ms;
        for(int i=0;i<n;i++) ms.insert(v[i]);

        auto it=ms.begin();
        while(it!=ms.end())
        {
            int x = *it;
            bool flag=false;
            for(auto itt=ms.begin();itt!=ms.end();itt++){
                if(itt==it) continue;
                if(*itt+x == val){
                    cnt++;
                    ms.erase(it);
                    ms.erase(itt);
                    flag=true;
                    break;
                }
            }
            if(!flag){
                ms.erase(it);
            }
            it = ms.begin();
        }
        ans = max(ans , cnt);
    }
    cout << ans << endl;

}

int main() {
int t;
cin >> t;

while(t--){
    solve();
}
return 0;
}