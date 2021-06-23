#include<bits/stdc++.h>
using namespace std;
                    
typedef long long ll;
typedef vector<int> vi;
#define mk make_pair
#define PB push_back
                    
int main() {
int t;
cin >> t;

while(t--){
    int n,m;
    cin >> n >> m;

    int arr[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> arr[i][j];
        }
    }

   vector<int> v1;
   vector<int> v2;
   int sum=0;

   for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
          if(arr[i][j-1]<0){arr[i][j-1]*=(-1);}   //WRONG,ONE HAS TO CHOOSE TWO ADJACENT CELLS AT ONCE.
           if(arr[i-1][j]<0){arr[i-1][j]*=(-1);}
         if(arr[i+1][j]<0){arr[i+1][j]*=(-1);}
         if(arr[i][j+1]<0){arr[i][j+1]*=(-1);}   
        }
    }

for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            sum += arr[i][j];
        }
    }
// sum = accumulate(v1.begin() , v1.end() , sum);
cout<< sum <<"\n";
}
return 0;
}