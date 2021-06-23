/*
--------------HINT--------
It is easier to determine the case when the players
 with the maximum skills will not meet in the finals.
  It means that they met in the semifinals, and 
in the other semifinals, both players are weaker.

It's easy to check this case with the following formula:
 min(s1,s2)>max(s3,s4) or max(s1,s2)<min(s3,s4).


*/
#include<bits/stdc++.h>
using namespace std;
                    
typedef long long ll;
typedef vector<int> vi;
#define mk make_pair
#define PB push_back

string solve(int s1 ,int s2,int s3,int s4){
  //IF min of s1&s2 becomes greater than max of s3&s4,
  // then certainly max skill person will be left behind.
  if(min(s1,s2)>max(s3,s4) || max(s1,s2)<min(s3,s4)){return "NO";}
  else{return "YES";}
}

              
int main() {

int t;
cin >> t;

while(t--)
{
    int s1,s2,s3,s4;
    cin >> s1 >> s2 >>s3 >>s4;
 string result =  solve(s1,s2,s3,s4);
   cout<<result<<"\n";
}


return 0;
}