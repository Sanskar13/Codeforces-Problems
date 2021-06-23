#include<bits/stdc++.h>
using namespace std;
                    
typedef long long ll;
typedef vector<int> vi;
#define mk make_pair
#define PB push_back

                    
int main() {
int n;
cin >> n;

vector<int> v(n);
for(auto &val : v){
    cin>>val;
}
sort(v.begin() , v.end() , greater<>());  //descending order
int sum =0,cnt=0;
for(int i=0;i<n;i++)
{
  sum += v[i];
//   cout<<sum<<"\n";
  int res =0;
  for(int j=n-1;j>i;j--)
  {
      res += v[j];
    //   cout<<res<<"\n";
  }
   
  if(sum>res){cnt=i+1;break;}
  else{
      
      continue;
  }

}
cout<<cnt<<"\n";

return 0;
}