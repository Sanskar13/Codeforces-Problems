//----------DUBSTEP-----
// Remove "WUB" from the string and replace it with space.
#include<bits/stdc++.h>
using namespace std;
                    
typedef long long ll;
#define mk make_pair
#define PB push_back
#define debug(x) cout<< #x << ' ' << x <<endl
string newstring(string s)
{
    regex r("WUB");

    return regex_replace(s,r," ");
}
            
int main() {
string s;
getline(cin,s);

string w  = newstring(s);

while(s.length()){
if(w[0]==' '){w.erase(w.begin());}
else{break;}
}

for(int i=0;i<w.length();i++)
{
    
    if(w[i]==' ' && w[i+1]==' '){w.erase(w.begin()+i);}
}

cout<<w;

return 0;
}

/*
----------LEARNING-------
1) How to remove unneccessary spaces from a string.
2) using regex() , erase().
3) Removing all the occurences of a substring from the string using regex().
*/
