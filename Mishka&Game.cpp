#include<bits/stdc++.h>
using namespace std;
                    
typedef long long ll;
typedef vector<int> vi;
#define mk make_pair
#define PB push_back
                    
int main() {
int n;
cin >> n;
vector<pair<int,int>> v;
int cnt=0,cntb=0;
for(int i=0;i<n;i++)
{
  int x,y;
  cin>>x>>y;
  v.push_back({x,y});

   if(v[i].first<v[i].second){cnt++;}
   else if(v[i].first>v[i].second){cntb++;}
}

if(cnt>cntb){cout<<"Mishka"<<"\n";}
else if(cnt<cntb){cout<<"Chris"<<"\n";}
else{cout<<"Friendship is magic!^^"<<"\n";}
return 0;
}