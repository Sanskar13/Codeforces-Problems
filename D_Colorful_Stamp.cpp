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

   if(n==1 && s[0]!='W') return void (cout << "NO\n");
    if(n==2){
        if(s!="RB" && s!="BR" && s!="WW") return void (cout << "NO\n");
    }

    int c1 = count(s.begin() , s.end() , 'R');
    int c2 = count(s.begin() , s.end() , 'B');
    int c3 = count(s.begin() , s.end() , 'W');

    if(c1==n || c2==n) return void (cout << "NO\n");
    if(c3==n) return void (cout << "YES\n");

    int cc1=0,cc2=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='W') break;
        else if(s[i]=='R') cc1++;
        else if(s[i]=='B') cc2++;
    }   
    // debug(cc1);
    // debug(cc2);
    if(s[0]!='W' && cc1==0) return void (cout << "NO\n");
    if(s[0]!='W' && cc2==0) return void (cout << "NO\n");
    // cout << "Ref";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='W'){
            // debug(i);
            int j = i+1;
            string t="";
            bool flag=false;
            while(s[j]!='W' && j<n){
                t.pb(s[j]);
                j++;
            }
            // debug(t);
            for(int k=0;k<t.length()-1;k++){
                if(t[k]!=t[k+1]){flag=true;break;}
            }
            // debug(j);
            if(!flag) return void (cout << "NO\n");
            else i = j-1;
        }
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