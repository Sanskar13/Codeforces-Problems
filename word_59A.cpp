#include<bits/stdc++.h>
using namespace std;
int main() {

string s;
getline(cin ,s);
int upp=0,low=0;
int n = s.length();

for(int i=0;i<n;i++)
{
    if(s[i]>=65 && s[i]<=90){upp++;}
    else if(s[i]>=97 && s[i]<=122){low++;}
}

if(upp<low){
   transform(s.begin() , s.end() , s.begin() , ::tolower);
    cout<<s<<"\n";
}
else if(low<upp){
    transform(s.begin() , s.end() , s.begin() , ::toupper);
    cout<<s<<"\n";
}
else{
    transform(s.begin() , s.end() , s.begin() , ::tolower);
    cout<<s<<"\n";
}

return 0;
}