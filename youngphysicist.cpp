#include<bits/stdc++.h>
using namespace std;
int main() {

int n;
cin>>n;

int arr[n][3];
for(int i=0;i<n;i++)
{
    for(int j=0;j<3;j++)
    {
        cin>>arr[i][j];
    }
}
int sum=0,res=1;

for(int k=0;k<3;k++)
{
    sum=0;
    for(int w=0;w<n;w++)
    {
      sum += arr[w][k];
    }
    cout<<sum;
    if(sum==0)
    {
         res=0;
        continue;
    }
    else{
        break;
    }
}

if(res==0)
{
    cout<<"YES";
}
else{
    cout<<"NO";
}

return 0;
}