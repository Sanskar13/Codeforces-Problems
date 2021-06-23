#include<bits/stdc++.h>
using namespace std;
                    
typedef long long ll;
typedef vector<int> vi;
#define mk make_pair
#define PB push_back
                    
int main() {
int t;
cin >> t;

while(t--){
    string a,b;
    cin >> b;
  if(b.length()==2){
      a=b;
  }
  else{
      int i;
    for(i=0;i<b.length();i+=2){
        char ch = b[i];
        a.push_back(ch);
    }
    char c =b[i-1];
    a.push_back(c);
  }

cout<<a<<"\n";

}
return 0;
}