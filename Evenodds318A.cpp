#include<bits/stdc++.h>
using namespace std;
                    
typedef long long int  ll;
typedef vector<int> vi;
#define mk make_pair
#define PB push_back
                    
int main() {

ll n,k;
cin>>n>>k;

vector<int> sum;

for(int i=1;i<=n;i+=2)
{
  sum.PB(i);
}

for(int j=2;j<=n;j+=2)
{
    sum.PB(j);
}

cout<<sum[k-1]<<"\n";


return 0;
}