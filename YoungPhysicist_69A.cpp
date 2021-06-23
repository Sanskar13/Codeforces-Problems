/*
--------Wrong Approach to sum of all the elements and equate it to zero.
   --Actaully,since there can be many forces,we have to find the sum along all the components to be equal to zero i.e. 
      sum(x)=0 & sum(y)=0 & sum(Z)=0. 
       thus,we have to make each column =0,which is evident from the test cases given as example.
*/


#include<bits/stdc++.h>
using namespace std;
int main() {

int n;        //NO of test cases.
cin>>n;
vector<vector<int> > vec;      //Constituting a vector for dynamic size.

for(int i=0;i<n;i++)
{
    vector<int> v;
    for(int j=0;j<n;j++)
    {
    int a=0,b=0,c=0;    //INput 3 integers for each iteration of the loop.
    cin>>a>>b>>c;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
}
vec.push_back(v);
}
int sum=0;
vector<int> summ;
for(int i=0;i<n;i++)
{
    sum=0;
    for(int j=0;j<n;j++)
    {
        sum += vec[j][i];
    }
   if(sum==0)
   {
       continue;
   }
   else{
       break;
   }
}

if(sum==0)
{
    cout<<"YES";
}
else{
    cout<<"NO";
}


return 0;
}