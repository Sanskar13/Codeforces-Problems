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
    lln x;
    cin >> n >> x;

    vector<int> v(n);
    V cin>>val;

    sort(v.begin() , v.end());
    if(v[0] > x) return void (cout << "0\n");
    lln sum=0,pos=0,ans=0;
    for(pos=0;pos<n;pos++){if(sum+v[pos]<=x){sum+=v[pos];}else{break;}}
     pos--;
    int cnt=0;
    int y = (x-sum)/(pos+1);
    debug(y);
    while(pos >= 0)
    {
        int y = ((x-sum)/(pos+1))+1;
        // debug(y);
        ans += (pos+1)*y;
        // debug(ans);
        sum += (pos+1);
        cnt++;
        while(sum > x){
            sum -= (cnt+v[pos]);
            pos--;
        }
    }
    cout << ans << endl;

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