/*
the idea is to sort the elements and first print one big element
 then,one small element,since the mean of two big elements cannot be a AM.
*/

#include<bits/stdc++.h>
using namespace std;
                    
typedef long long ll;
typedef vector<int> vi;
#define mk make_pair
#define PB push_back

                    
int main() {

int w;
cin>>w;

for(int i=0;i<w;i++)
{
    int x;
    cin >> x;
    int n = 2*x;
    int arr[n];
    
    for(int j=0;j<(n);j++)
    {
        cin >> arr[j];
    }

sort(arr , arr+n);

int start =0;
int end = n-1;

while(start<end)
{
    cout<<arr[start++]<<" ";
    if(start>end)
    {
        break;
    }

  cout<<arr[end--]<<" ";
  if(start>end)
  {
      break;
  }

}
cout<<"\n";
}


return 0;
}