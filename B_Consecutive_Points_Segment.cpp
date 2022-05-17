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

    vector<int> d;
    for(int i=0;i<n-1;i++)
    {
        int x = v[i+1]-v[i];
        if(x>1){d.pb(x);}
    }
    
    if(d.size()>2) return void (cout << "NO\n");
    else if(d.size()==2){
        if((d[1]==2 && d[0]==2)) return void (cout << "YES\n"); 
        else return void (cout << "NO\n");
    }
    else if(d.size()==1){
            if(d[0]==2 || d[0]==3) cout << "YES\n";
            else cout << "NO\n";
    }else{
        cout << "YES\n";
    }
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