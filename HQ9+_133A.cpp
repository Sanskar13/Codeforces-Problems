#include<bits/stdc++.h>
using namespace std;
                    
typedef long long ll;
typedef vector<int> vi;
#define mk make_pair
#define PB push_back
                    
int main() {

string s;
getline(cin ,s);

int n = s.length();
bool flag = false;

  // Program Should GIve a Output,which is possible only when its either H,Q,9

for(int i=0;i<n;i++)
{
    if((s[i]=='H')  || (s[i]=='Q') || (s[i]=='9'))
    {
        flag = true;
        break;
    }
    else{
        continue;
    }
}
if(flag==true){cout<<"YES";}
else{cout<<"NO";}


return 0;
}