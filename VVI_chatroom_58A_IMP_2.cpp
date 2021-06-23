#include<bits/stdc++.h>
using namespace std;
int main() {
string s;
string h = "hello";
getline(cin ,s);

int n = s.length();

int cnt=0,a=0;    //INitializing to zero

for(int i=0;i<n;i++)
{
    if(s[i]==h[a]) //First we check for 'h' -> 'e' -> 'l' -> 'l' -> 'o'
    {
        cnt++;  //checking whether 5 word 'hello'
        a++;   //check for other word in h total -> 5 words 'hello'
    }
}
if(cnt==5)
{
    cout<<"YES";
}
else{
    cout<<"NO";
}

return 0;

}