/*
LEARNING:- 
For random unknown calues and using for loops..
always check out test cases and upper bound of the given parameters
*/


#include<bits/stdc++.h>
using namespace std;
                    
typedef long long ll;
typedef vector<int> vi;
#define mk make_pair
#define PB push_back
                    
int main() {
int t;
cin >> t;

while(t--){
    ll n;
    cin >> n;
 // since, (1<<30)-1  > (10^9)
 // x = n/((1<<30)-1)
 for(int k=2;k<=30;k++)
 {
     
     int l =(1<<k)-1;
     if(n%l==0)
     {
         cout<<(int)(n/l)<<"\n";
         break;
     }
     else{
         continue;
     }
 }
 
 
}
return 0;
}