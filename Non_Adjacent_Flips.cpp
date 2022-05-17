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

    int cnt=0;
    cnt = count(s.begin() , s.end() , '0');
    if(cnt==s.length()) return void (cout << "0\n");
  
   string t = "11";
   if(s.find(t)!=string::npos){
       cout << "2\n";
   }else{
       cout << "1\n";
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