#include<bits/stdc++.h>
using namespace std;
                    
typedef long long ll;
typedef vector<int> vi;
#define mk make_pair
#define PB push_back
                    
int main() {
int q;
cin >>q;

while(q--){
    int n;
    cin >> n;
    // multiset<int> m;
    vector<int> m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        m.push_back(x);  //All the integers entered will be a power of 2
    }
  // We have to choose two number equal number from s.
  // remove them from m and insert A number to get the sum.
  // do this until you have 2048 or you can still replace the element
  int sum=0;
for(auto it=0;it<m.size();it++)
{
  if(m[it]<=2048)
  {
    sum += m[it];
  }
}


if(sum>=2048){cout<<"YES"<<"\n";}
else{cout<<"NO"<<"\n";}


}
return 0;
}