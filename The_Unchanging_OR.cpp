#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    
    int digit = log2(n);
    // cout << digit << "\n";
    
    if(n<=2){return void (cout << "0\n");}
    
    long long int ans=0;
    int f = digit;
    // cout << (1<<f) << endl;
    for(int i=f;i>1;i--)
    {
        ans += ((1<<i) - (1<<(i-1)) -1);
        // cout << 1<<i << " " << i<<(i-1) << " " << endl;
    }

    long long int check = 1<<digit;
    if(check != n){
            ans += (n - (1<<digit));
    }
    cout << ans << "\n";
    
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--)
	{
	    solve();
	}
	return 0;
}
