// Generous Kefa

#include<bits/stdc++.h>
using namespace std;
                    
typedef long long ll;
#define mk make_pair
#define PB push_back
#define debug(x) cout<< #x << ' ' << x <<endl
            
int main() {
int n,k;
cin >> n >> k;

string s;
cin >> s;
bool flag = false;
int x = n/k;
for(int i=0;i<s.length();i++)
{
    auto res = count(s.begin() ,s.end() , s[i]);
    if(res>=x){flag=true;}
    else{flag=false;break;}
}

if(flag)
   cout<<"YES";
   else  
     cout<<"NO";
return 0;
}