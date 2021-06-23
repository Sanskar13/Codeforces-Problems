      
//Comparing Two Long Integers.
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define mk make_pair
#define PB push_back
#define debug(x) cout<< #x << ' ' << x <<endl
 
int main() {
string s,w;
getline(cin,s);
getline(cin,w);
 
int x = s.length();
int y = w.length();
if(x>y){w.insert(w.begin() , (x-y) , '0');}
if(x<y){s.insert(s.begin() , (y-x) , '0');}
// now the strings are equal.just compare
 
x = s.length(),y=w.length();
bool flag=false;
for(int i=0;i<x;i++)
{
    if(s[i]>w[i]){cout<<">";flag=true;break;}
    else if(s[i]<w[i]){cout<<"<";flag=true;break;}
    else{continue;flag=false;}
}
if(flag==false){cout<<"=";}
return 0;
}
/*
INPUT:
8631749422082281871941140403034638286979613893271246118706788645620907151504874585597378422393911017
1460175633701201615285047975806206470993708143873675499262156511814213451040881275819636625899967479
 
OUTPUT:
>
*/