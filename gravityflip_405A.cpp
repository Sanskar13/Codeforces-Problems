/*
  1) since,we are only given the no of cubes i.e. a1, a2,a3 in the column
     ,the approach to choose a cube from a column does not work here.


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
vector<int> v;

for(int i=0;i<n;i++)
{
    int x;
    cin>>x;

    v.PB(x);

}
sort(v.begin() , v.end());

for(auto val : v)
{
    cout<<val<<" ";
}

return 0;
}