/*
LEARNING -- APPEARED IN CF(1514B)  && CC (JUNELONGCHALL21)(QUE 3)
-------If we have an array of k columns,if it all in each column we put a 0 in any bit..bitwise AND of all the columns will be zero.
for doing this we have n choices for 1st column and similarly n*n*n...k times..since there are k columns..
we can also add more than one zero in each column but that would be meaning less..since it will just reduce the size of array.for eg:-
111 is 7,changing one bit to zero we have..110 it becomes 6..if we add more zero its size dec.------------


-------------HINT------------
Let's start with an array where every single bit in every single element is 1. It clearly doesn't
 have bitwise-and equal to 0, so for each bit, we need to turn it off (make it 0) in at least one of the elements. 
 However, we can't turn it off in more than one element, since the sum would then decrease for no reason. So for every bit, 
we should choose exactly one element and turn it off there. Since there are k bits and n elements, the answer is just nk.

*/

#include<bits/stdc++.h>
using namespace std;
                    
typedef long long ll;
typedef vector<int> vi;
#define mk make_pair
#define PB push_back
const int  MOD = 1e9+7;

void solve(int n,int k){

    ll ans=1;
    for(int i=0;i<k;i++){ans = (ans*n)%MOD;}    //multiplying n,k times

    cout<<ans<<"\n";

}
                    
int main() {

int t;
cin >> t;

while(t--)
{
    int n,k;
    cin >> n >> k;
    solve(n,k);
   
}

return 0;
}