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

    int cnt=0;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]==v[i+1]) cnt++;
    }
    if(cnt<=1) return void (cout << "0\n");

    int start=0,end=0;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]==v[i+1]){start=i+1;break;}
    }
    for(int i=n-1;i>0;i--)
    {
        if(v[i]==v[i-1]){end=i-1;break;}
    }
    if(start==end) cout << end-start+1 << endl;
    else cout << end-start << endl;

}

int main() {
ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int t;
cin >> t;

while(t--)
{
    solve();
}
return 0;
}