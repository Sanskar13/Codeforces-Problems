// Again Twenty Five
// Binary exponentiation for calculating power in under required TC.
// An alternative for pow() in math.h.

#include<bits/stdc++.h>
using namespace std;
                    
typedef long long int lln;
typedef long long  ll;
#define mk make_pair
#define PB push_back
#define debug(x) cout<< #x << ' ' << x <<endl

 lln fastpow(lln a , lln b)
 {
    if(b==0) return 1;
    if(b==1)  return a;

    lln ans;

    if(b%2==0)
      ans = fastpow(a,b/2)*fastpow(a,b/2);
     else
       ans = a*fastpow(a,(b-1)/2)*fastpow(a,(b-1)/2); 

   return ans;
 }           

int main() {
lln a=5,b;
cin >> b;

lln res = fastpow(a, b);

cout<<res%100;

return 0;
}