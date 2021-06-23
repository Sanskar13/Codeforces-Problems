#include<bits/stdc++.h>
using namespace std;
                    
typedef long long ll;
typedef vector<int> vi;
#define mk make_pair
#define PB push_back


                    
int main() {

ll t;
cin >> t;
 while(t--)
 {
     ll n,k=3;
     cin >> n;
    
 
  
if(n%2==1)  // ODD
{
  ll soln = (n/2);
  cout<<soln<<" "<<soln<<" "<<"1"<<"\n";
}
else{
    if(n%4!=0)
    {
        ll soln = (n-2)/2;
        cout<<"2"<<" "<<soln<<" "<<soln<<"\n";
    }
    else{
       ll soln = (n/2);
       cout<<soln<<" "<<soln/2<<" "<<(soln/2)<<"\n";   
    }



 }


return 0;
}