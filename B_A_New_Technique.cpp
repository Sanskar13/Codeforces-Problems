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

    int mat1[n][m];
    int mat2[m][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> mat1[i][j];
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> mat2[i][j];
        }
    }

    if(m==1 && n==1){
        cout << mat1[0][0] << endl;
    }else if(m==1 && n>1){
        for(int i=0;i<n;i++){
            cout << mat2[0][i] << endl;
        }
        // cout << endl;
    }else if(n==1 && m>1){
         for(int i=0;i<m;i++){
            cout << mat2[i][0] << " ";
        }
        cout << endl;
    }else{
        vector<int> find;
        for(int i=0;i<n;i++)
        {
            find.pb(mat2[0][i]);
        }

        int i=0;
        while(i<find.size()){
            // debug(i);
            // debug(find[i]);
            for(int ii=0;ii<n;ii++)
            {
                if(mat1[ii][0]==find[i]){
                    // debug(mat1[i][0]);
                    for(int j=0;j<m;j++){cout << mat1[ii][j] << " ";mat1[ii][j]=-1;}cout<<endl;
                    break;
                }
            }i++;
        }
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