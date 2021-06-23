//----Construct the strings-----
#include<bits/stdc++.h>
using namespace std;
                    
typedef long long ll;
#define vector<int> vi;
#define mk make_pair
#define PB push_back
#define debug(x) cout<< #x << ' ' << x <<endl
            
int main() {
int t;
cin>>t;

while(t--){
   int n,a,b;
   cin>>n>>a>>b;

  for(int i=0;i<n;i++)
  {
      cout<< char('a' + i%b);
  }

}
return 0;
}