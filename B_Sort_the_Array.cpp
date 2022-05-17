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

    vector<int> v(n),tmp;
    V cin>>val;

    tmp =  v;
    sort(tmp.begin()  , tmp.end());

    if(v==tmp){
        cout << "yes\n";
        return void (cout << "1 1\n");
    }

    int front=0,back=n-1;
    for(int i=0;i<n;i++){if(tmp[i]!=v[i]){front=i;break;}}
    for(int i=n-1;i>=0;i--){if(tmp[i]!=v[i]){back = i;break;}}

    vector<int> ans;
    for(int i=0;i<front;i++){ans.pb(v[i]);}
    for(int i=back;i>=front;i--){ans.pb(v[i]);}
    for(int i=back+1;i<n;i++){ans.pb(v[i]);}

    if(ans==tmp){
        cout << "yes\n";
        cout << front+1 << " " << back+1 << endl;
    }else{
        cout << "no\n";
    }


}

int main() {
  solve();
return 0;
}