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
    string s;cin >>s;

    int cnt1 = count(s.begin() , s.end() , '0');
    int cnt2 = count(s.begin() , s.end() , '1');

    if(abs(cnt1-cnt2)>=1){cout << 2*min(cnt1,cnt2)+1 << "\n";}
    else{
        cout << 2*min(cnt1,cnt2)+abs(cnt1-cnt2) << "\n";
    }


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