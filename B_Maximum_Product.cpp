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
    int n;
    cin >> n;

    vector<int> v(n);
    V cin>>val;

    sort(v.begin() , v.end());

    lln tmp=0;
    for(int i=n-1;i>=0;i--)
    {
        if(v[i] > 0) tmp++;
        else{break;}
    }

    lln p=1;
    if(tmp==0){
        for(int i=n-1;i>n-6;i--){
           p *=(lln)v[i];
        }
    }else if(tmp>=1 && tmp<=2){
       p = (lln)v[n-1];
        for(int i=0;i<4;i++){
           p*=(lln)v[i];
        }    
    }else if(tmp>=3 && tmp<=4){
        // 4 1
        lln p1 = (lln)v[n-1];
        for(int i=0;i<4;i++){
            p1*=(lln)v[i];
        }    

        // 2 3
        lln p2 = (lln)v[n-1]*v[n-2]*v[n-3];
        p2 *= (lln)v[0]*v[1];


        p = max(p1,p2);
    }else if(tmp>=5){
        // 4 1
        lln p1 = (lln)v[n-1];
        for(int i=0;i<4;i++){
            p1*=(lln)v[i];
        }    

        // 2 3
        lln p2 = (lln)v[n-1]*v[n-2]*v[n-3];
        p2 *= (lln)v[0]*v[1];

        // 0 5
        lln p3 = (lln)v[n-1]*v[n-2]*v[n-3]*v[n-4]*v[n-5];

        p = max({p1,p2,p3});
    }

    cout << p << "\n";
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