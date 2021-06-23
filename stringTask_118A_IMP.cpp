#include<bits/stdc++.h>
using namespace std;

string remove_Vowel(string s)
{
    regex r("[aeiouAEIOU]");

    return regex_replace(s , r , "\0");
}


int main() {

string s;
getline(cin ,s);
int n= s.length();

transform(s.begin() , s.end() , s.begin() , ::tolower);   
string w = remove_Vowel(s);

// --Inserting a character"."

for(int i=0;i<w.length();i+=2)
{
    w.insert(i , ".");
}
     
   cout<<w;

return 0;
}