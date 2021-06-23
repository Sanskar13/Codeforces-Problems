//----------Number of Distinct characters in the Set--------

#include<bits/stdc++.h>
using namespace std;
int main() {

char ch[1001];
gets(ch);
int n = strlen(ch);
int cnt=0;

sort(ch , ch+n);

for(int i=0;i<n-1;i++)
{
   if(ch[i]>=97 && ch[i]<=122)
    {
         cnt++;
        if(ch[i]==ch[i+1])
        {
            cnt--;
        }
    }
}
  cout<<cnt<<"\n";

return 0;
}