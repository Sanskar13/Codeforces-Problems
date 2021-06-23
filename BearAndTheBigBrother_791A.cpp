#include<bits/stdc++.h>
using namespace std;
int main() {

int a,b;
cin>>a>>b;
int cnt=0;

// a>b -> Not Possible,initially,since,1<=a<=b<=10(Given)

while(a<=b)     
{
    a = 3*a;
    b = 2*b;
    cnt++;
}
cout<<cnt<<"\n";

return 0;
}