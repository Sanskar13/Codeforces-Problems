#include<iostream>
using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;

  int y=0;
  y = ((w*k*(w+1))/2) - n;
  cout<<y;

    return 0;
}