// C++ program to find factorial of given number
#include<bits/stdc++.h>
using namespace std;

// ----- Iteration -----
// Method to find the factorial of a given number
int factorialUsingIteration(int n)
{
	int res = 1, i;

	// using iteration
	for (i = 2; i <= n; i++)
		res *= i;

	return res;
}

// Driver method
int main()
{
	int num = 5;
	
	cout << "Factorial of " << num <<
			" using Iteration is: " <<
			factorialUsingIteration(5);

	return 0;
}
