#include<iostream>
#include<vector>
using namespace std;

int main()
{
 int n,k;
 cin>>n>>k;
 vector<int> a;
 int cnt=0;
 for(int i=0;i<n;i++)
 {
     int x;
     cin>>x;
     a.push_back(x);
     
     if((k+a[i])<=5)
     {
        cnt++;
     }
 }
cout<<cnt/3;
    return 0;
}