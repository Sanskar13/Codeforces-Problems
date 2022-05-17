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
    ll x1,y1,z1,x2,y2,z2;
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;

    ll sum = 0;
    if(z1 >= y2){
        sum = 2*y2;
        z1-=y2;y2=0;

        if(z2>=z1){z2-=z1;z1=0;}
        else{z1-=z2;z2=0;}

        if(z2>=x1){z2-=x1;x1=0;}
        else{x1-=z2;z2=0;}

        if(y1>=x2){y1-=x2;x2=0;}
        else{x2-=y1;y1=0;}

        sum -= (min({z2,y1})*2);

    }else{
        sum = 2*z1;
        y2-=z1;z1=0;

        if(z2>=x1){z2-=x1;x1=0;}
        else{x1-=z2;z2=0;}

        if(y1-x2-y2 <= 0){y1=0;}
        else{y1-=(x2+y2);}
        
    // cout << x1 << " " << y1 << " " << z1 << endl;
    // cout << x2 << " " << y2 << " " << z2 << endl;

         sum -= (min({z2,y1})*2);
    }

    cout << sum << endl;

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