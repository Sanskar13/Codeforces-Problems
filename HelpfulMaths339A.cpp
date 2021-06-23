#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {

string s;
getline(cin ,s);

int n = s.length();

while(n--)     //Repeating the same procedure
for(int i=0;i<n-1;i+=2)
{
    if(s[i]>=s[i+2])    //Swapping ele for the conditions in the range of two
    {
        swap(s[i] , s[i+2]);
    }
}

 cout<<s;

return 0;
}