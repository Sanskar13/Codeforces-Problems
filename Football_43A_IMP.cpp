/*
------Maximum occuring character in an input string------------
*/

#include<bits/stdc++.h>
using namespace std;
                    
typedef long long ll;
typedef vector<int> vi;
#define mk make_pair
#define PB push_back


int main() {
int n;
cin >> n;
string s;

map<string,int> m;
 for(int i=0;i<n;i++)
 {
     cin >> s;
     m[s]++;
 }
 int mx=0;

 for(auto it=m.begin();it!=m.end();it++)
 {
     if(it->second>mx){
         mx = it->second;
         s = it->first;
     }
 }
cout<<s<<"\n";

return 0;
}