#include<bits/stdc++.h>
using namespace std;
int main() {

    string s;
    cin>>s;

    bool w = true;

for(int i=1;i<s.length();i++)
{
    if(islower())
    {
       w = false;
    }
}

if(w==true)
{
    for(int i=0;i<s.length();i++)
    {
        if(tolower(s[i]))
        {
            s[i] = toupper(s[i])
        }
    }
}
return 0;
}