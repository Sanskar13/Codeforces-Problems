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
    string s;
    cin >> s;
    int n = s.length();

    if(s.length()==1) return void (cout << "1\n");
    if(s[0]=='0' || s[s.length()-1]=='1') return void (cout << "1\n");
    int cnt = count(s.begin() , s.end() , '?');
    if(cnt==s.length()) return void (cout << s.length() << endl);

    int pos1=0,pos2=n-1;
    for(int i=n-1;i>=0;i--){if(s[i]=='1'){pos1=i;break;}}
    for(int i=0;i<n;i++){if(s[i]=='0'){pos2=i;break;}}

    // if(pos1 > pos2) cout << (n-1)-(pos2) << endl;
    // else cout << pos2-pos1+1 << endl;

    cout << abs(pos2-pos1)+1 << endl;
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