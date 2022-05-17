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
    lln n,q;
    cin >> n >> q;

    vector<lln> v(n);
    V cin>>val;

    lln sum=0;
    sum = accumulate(v.begin() , v.end() , sum);

    int change=0;
    bool flag=false;
    for(auto i=0;i<q;i++)
    {
        lln x;
        cin >> x;
        if(x==1){
            lln a,b;
            cin >> a >> b;
            if(!flag){
                sum = (lln)sum-v[a-1]+b;
                cout << sum << endl;
            }else{
                sum = sum-change+b;
                cout << sum << endl;
            }
            v[a-1]=b;
            flag=false;
        }else{
            lln y;
            cin >> y;
            flag=true;
            sum = (lln)(y*n);
            cout << sum << endl;
            change = y;
        }
    }

}

int main() {
ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
return 0;
}