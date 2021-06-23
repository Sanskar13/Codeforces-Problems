#include<bits/stdc++.h>
using namespace std;
                    
typedef long long ll;
typedef vector<int> vi;
#define mk make_pair
#define PB push_back
                    
int main() {
char c;
cin >> c;
string s;
cin >> s;

string a = "qwertyuiop";
string b = "asdfghjkl;";
string p = "zxcvbnm,./";

int n = 10;

// string k;

for(int i=0;i<s.length();i++)
{
    for(int j=0;j<n;j++)
    {
       if(s[i]==a[j]){
             if(c=='R'){cout<<a[j-1];}
             else if(c=='L'){cout<<a[j+1];}
             break;
       }
       else if(s[i]==b[j]){
           if(c=='R'){cout<<b[j-1];}
             else if(c=='L'){cout<<b[j+1];}
             break;
       }
       else if(s[i]==p[j]){
           if(c=='R'){cout<<p[j-1];}
             else if(c=='L'){cout<<p[j+1];}
             break;
       }
    }
}

// cout<<k<<"\n";
return 0;
}