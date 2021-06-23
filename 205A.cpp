// Little Elephant and Rozdil
#include<bits/stdc++.h>
using namespace std;
                    
typedef long long ll;
#define mk make_pair
#define PB push_back
#define debug(x) cout<< #x << ' ' << x <<endl
            
int main() {
int n;
cin >> n;

int min = INT_MAX;

vector<int> v(n);
for(auto &val : v)
{
    cin >>  val;
    if(val<min){min = val;}
}

auto res = count(v.begin() , v.end() , min);
auto it = find(v.begin() , v.end() , min);
if(res>1){cout<<"Still Rozdil";}
else
  cout<< it + 1 - v.begin();

return 0;
}