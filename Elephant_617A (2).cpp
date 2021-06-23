#include<bits/stdc++.h>
using namespace std;
                    
typedef long long ll;
typedef vector<int> vi;
#define mk make_pair
#define PB push_back
                    
int main() {

int x;
cin >> x;
int cnt=0;

while(x){
    if(x>=5)
    {
       x -=5;
       cnt++;
    }
    else if(x>=4)
    {
        x -=4;
        cnt++;
    }
    else if(x>=3)
    {
        x -=3;
        cnt++;
    }

    else if(x>=2)
    {
        x -=2;
        cnt++;
    }
    else if(x>=1)
    {
        x -=1;
        cnt++;
    }
  
}
cout<<cnt;

return 0;
}