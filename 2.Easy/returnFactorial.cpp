#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
	if(n==0)
	return 1;
	else
	return n*factorial(n-1);
}
int main()
{
	int n;
	cout<<"Enter the value of n (non-negative integer): "<<"\n";
	cin>>n;
	int x=factorial(n);
	cout<<"The factorial of "<<n<< "is: "<<x<<"\n";
}
