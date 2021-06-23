//----------Ceil Function-------
// ceil function is the one in which ceil(n/a)=n/a;(when n is divisible by a) &
//  ceil(n/a) = n/a +1;(when n is not divisible by a)

#include<bits/stdc++.h>
using namespace std;
int main() {

    double n,m,a;   //using in the case of fractions.
    cin>>n>>m>>a;

cout<< (long long)ceil(n/a)*(long long)ceil(m/a);        //Type-Casting,since 1e9 is the upper_bound.


return 0;
}