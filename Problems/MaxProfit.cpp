// You are developing a smartphone app. 
// You have a list of potential customers for your app. 
// Each customer has a budget and will buy the app at your declared price 
// if and only if the price is less than or equal to the customer's budget.
// You want to fix a price so that the revenue you earn from the app is maximized. 
// Find this maximum possible revenue.
// For instance, suppose you have 4 potential customers and their budgets are 30, 20, 53 and 14. 
// In this case, the maximum revenue you can get is 6
//CodeChef Smart Phone Problem Code: ZCO14003

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	long long int maxSum =0;
	cin >>n;
	int a[n];
	for(int i=0;i<n;i++){
	    cin >>a[i];
	}
	sort(a,a+n);
	long long int temp = n;
	for(int i=0;i<n;i++){
	    maxSum = max(maxSum,a[i]*temp);
	    temp--;
	}
	cout<<maxSum;
	return 0;
}
