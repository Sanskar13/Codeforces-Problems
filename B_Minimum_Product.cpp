#include<bits/stdc++.h>
using namespace std;
                    
typedef long long int lln;
typedef long long ll;
#define R for (auto i = 0; i < n; ++i)
#define V for(auto &val : v)
#define pb push_back
const double pi = 3.14159265358979323846;
#define debug(x) cout<< #x << ' ' << x <<endl

void solve()
{
    ll a,b,x,y,n;
    cin >> a >> b >> x >> y >> n;
    ll a1=a,b1=b,x1=x,y1=y,n1=n;

    // lln product = 1;
    ll minus1=a-x;
    ll minus2=b-y;
    // if(a>=b){
    //     if(minus2<=n){b-=minus2;n-=minus2;y=0;
    //         if(minus1<=n){a-=minus1;}
    //         else{a-=n;}
    //     }
    //     else{b-=n;minus2-=n;n=0;}
    //     product = a*b;
    // }else{
    //      if(minus1<=n){a-=minus1;n-=minus1;y=0;
    //         if(minus2<=n){b-=minus2;}
    //         else{b-=n;}
    //     }
    //     else{a-=n;minus1-=n;n=0;}
    //     product = a*b;
    // }

    ll findmin;
    if(minus1<=n){a1-=minus1;}
    else{a1-=n;}
    if(minus2<=n){b1-=minus2;}
    else{b1-=n;}

    if(a1>=b1){
         if(minus2<=n){b-=minus2;n-=minus2;minus2=0;}
         else{b-=n;minus2-=n;n=0;}

         if(minus1<=n){a-=minus1;}
         else{a-=n;}

    }else{
          if(minus1<=n){a-=minus1;n-=minus1;minus1=0;}
          else{a-=n;minus1-=n;n=0;}

          if(minus2<=n){b-=minus2;}
         else{b-=n;}
    }

    lln p2 = a*b;
    cout << p2 << "\n";


    // cout << product  << "\n";

}

int main() {
int t;
cin >> t;

while(t--)
{
    solve();
}
return 0;
}