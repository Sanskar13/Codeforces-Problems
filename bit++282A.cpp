#include<iostream>
#include<cstring>
using namespace std;

int main() {

int n;
cin>>n;
int x=0;
 char s[4];
 

while(n--)
 {
     cin>>s;

     if(strcmp(s , "X++")==0)
     {
         x=x+1;
     }
    else if(strcmp(s , "++X")==0)
     {
         x = 1+x;
     }
     else if(strcmp(s , "--X")==0)
     {
         x = (-1+x);
     }
     else if(strcmp(s , "X--")==0)
     {
         x = x-1;
     }

 }
 cout<<x;

return 0;
}