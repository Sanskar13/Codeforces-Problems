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
    int n,x;
    cin >> n >> x;

    vector<int> v(n);
    V cin>>val;

    sort(v.begin() , v.end());
    int ans=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) continue;
        for(int j=i+1;j<n;j++)
        {
            if(v[j]%v[i]==0 && v[j]!=v[i] && v[j]!=0){
                debug(i);
                debug(j);
                v[i]=0;
                v[j]=0;break;
            }
        }
    }
    int cnt = count(v.begin() , v.end() , 0);
    for(auto val : v){
        cout << val << " ";
    }
    cout << endl;
    ans += (n-cnt);
    cout << ans << endl;
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