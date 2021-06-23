#include<bits/stdc++.h>
using namespace std;
int main() {

int n;
vector<int> v;
int cnt=0;
for(int i=0;i<n;i++)
{
    cnt=0;
    int x;
    cin>>x;
    string s = to_string(x);
  for(int i=1;i<s.length();i++)
  {
      if(s[i]==x%10)
      {
          cnt++;
          x=x/10;
      }
  }
  cout<<cnt;
}

return 0;
}