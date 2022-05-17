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

   int cnt = count(v.begin() , v.end() , 0);
   if(cnt==0){
       cout << n << endl;
       for(int i=0;i<(n);i++) cout << "1 ";
       return void (cout << "\n");
   }
   if(cnt>=(n/2)){
       cout << n/2 << endl;
       for(int i=0;i<(n/2);i++) cout << "0 ";
       return void (cout << "\n");
   }else{
       int t=n/2;
       if((n/2)%2){t++;}
       cout << t << endl;
       for(int i=0;i<(t);i++) cout << "1 ";
       return void (cout << "\n");
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