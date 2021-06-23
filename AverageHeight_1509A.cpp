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
    int n;
    cin >> n;

    vector<int> v(n);
    for(auto &val : v){
    cin >> val;
    }
vector<int> v1;
    for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
      {
          if((v[i]+v[j])%2==0){
           v1.push_back(v[i]);
           v1.push_back(v[j]);
         auto it = v.begin() +i;
         auto it2 = v.begin() + j;
         v.erase(it);
         v.erase(it2);
          }
      }
    }
    for(auto ele : v1){
        cout<<ele<<" ";
    }
}
return 0;
}