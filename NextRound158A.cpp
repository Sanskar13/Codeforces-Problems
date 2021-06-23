#include<iostream>
#include<vector>
using namespace std;
int main() {

int n,k;
cin>>n>>k;

vector<int> v;

for(int i=0;i<n;i++)
{
    int y;
    cin>>y;  //Score Earned by the participant.
    v.push_back(y);
}
int cnt=0;
for(int j=0;j<n;j++)
{
  if(v[j]>=v[k-1]  && v[j]>0)
  {
      cnt++;
  }
}
cout<<cnt<<endl; 

return 0;
}

/*
INPUT:
8 5
10 9 8 7 7 7 5 5

OUTPUT:
6
*/