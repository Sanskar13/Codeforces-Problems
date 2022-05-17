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

   vector<int> v(n);
   V cin>>val;

   int i=-1,j=n;
   int c1=0,c2=0;
   int sum1=0,sum2=0;
   int ans=0;
   while(i<j)
   {
      if(sum1 + v[i+1] < sum2 + v[j-1]){
         if(i+1<j){
         sum1 += v[++i];
         c1++;
         }else{break;}
      }else{
         if(i<j-1){
         sum2 += v[--j];
         c2++;
         }else{break;}
      }
      if(sum1 == sum2){
         ans = c1+c2;
      }
   }
   // debug(sum1);
   // debug(sum2);
   if(sum1 == sum2){
         ans = c1+c2;
      }
   cout << ans << endl;
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