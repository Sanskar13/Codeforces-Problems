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
    int n,m;
    cin >> n >> m;

    char arr[n+1][m+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int j=0;j<m;j++)
    {
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i][j] == '.'){
                for(int k=i-1;k>=0;k--)
                {
                    if(arr[k][j]=='o'){
                        i = k;break;
                    }
                    if(arr[k][j] == '*'){
                        arr[i][j] = arr[k][j];
                        arr[k][j] = '.';
                        break;
                    }
                }
            }
        }
    }

     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout <<  arr[i][j];
        }
        cout << endl;
    }
    cout << endl;
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