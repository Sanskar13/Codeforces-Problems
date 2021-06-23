/*
string::npos is basically means until the end of the string.
string::npos is used here to check whether the element of size_t has reached the end of the string.
*/

#include<bits/stdc++.h>
using namespace std;
                    
typedef long long ll;
// #define vector<int> vi;
#define mk make_pair
#define PB push_back
#define debug(x) cout<< #x << ' ' << x <<endl
            
int main() {
string s;
getline(cin,s);

string w = "1111111";
string r = "0000000";

auto found = s.find(w);
auto found1 = s.find(r);

if(found!=string::npos || found1!=string::npos){cout<<"YES";}   // IMportant step.
else{cout<<"NO";}
return 0;
}