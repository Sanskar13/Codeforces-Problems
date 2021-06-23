#include<bits/stdc++.h>
using namespace std;
int main() {

int n;
cin>>n;
vector<int> v1,v2,v3;

for(int i=1;i<=n;i++)
{
  int t;
  cin>>t;
  
     if(t==1)
          v1.push_back(t);
     else if(t==2)
          v2.push_back(t);
     else if(t==3)
          v3.push_back(t);
}

int mn = min(v1.size() , min(v2.size() , v3.size()));

for(int j=0;j<mn;j++)
{
    cout<<v1[j]<<" " <<v2[j]<<" " <<v3[j]<<endl;
}




return 0;
}