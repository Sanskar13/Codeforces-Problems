#include<iostream>
#include<string>
using namespace std;
int main() {

string s;
getline(cin , s);
int cnt=0;

for(int i=0;i<s.length();i++)
{
    for(int j=s.length()-1;j>i;j--)
    {
       if(s[i]!=s[j])
       {
           cnt++;
       }
    }
}

if(cnt%2==1){
    cout<<"IGNORE HIM!";
    }

else if(cnt%2==0)
{
  cout<<"CHAT WITH HER!";
}

return 0;
}