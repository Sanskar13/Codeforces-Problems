// A recursive solution for subset sum problem
#include <iostream>
using namespace std;

int cnt=0;
// Returns true if there is a subset
// of set[] with sum equal to given sum
bool isSubsetSum(int set[], int n, int sum , int cnt)
{

	// Base Cases
	if (sum == 0)
		return true;
	if (n == 0)
		return false;

	// If last element is greater than sum,
	// then ignore it
	if (set[n - 1] > sum)
		return isSubsetSum(set, n - 1, sum,cnt);

	/* else, check if sum can be obtained by any
of the following:
	(a) including the last element
	(b) excluding the last element */
    
	return isSubsetSum(set, n - 1, sum,cnt)
		|| isSubsetSum(set, n - 1, sum - set[n - 1] , cnt+1);
}

// Driver code
int main()
{
	int set[] = { 2 ,4, 8, 2, 4 };
	int sum = 14;
	int n = sizeof(set) / sizeof(set[0]);
	if (isSubsetSum(set, n, sum,cnt) == true)
		cout <<"Found a subset with given sum"  << cnt;
	else
		cout <<"No subset with given sum";
	return 0;
}

// This code is contributed by shivanisinghss2110
