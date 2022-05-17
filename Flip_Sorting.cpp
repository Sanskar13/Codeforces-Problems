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

    string s;
    cin >> s;

    int pos1=0,pos2=n-1;
    vector<pair<int,int> > ans;
    for(int i=pos2;i>=pos1;i--)
    {
        for(int j=pos2;j>=pos1;j--){if(s[j]=='0'){pos2=j;break;}}
        for(int j=pos1;j<=pos2;j++){if(s[j]=='1'){pos1=j;break;}}

        ans.pb({pos1+1 , pos2-pos1+1});
        for(int j=pos1;j<=pos2;j++){
            if(s[j]=='0'){s[j]='1';}
            else s[j]='0';
        }
    }
    cout << ans.size() << endl;
    for(auto val : ans){
        cout << val.first << " " << val.second << endl;
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