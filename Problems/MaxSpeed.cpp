//CodeChef Problem Code: CARVANS
// https://www.codechef.com/LRNDSA01/problems/CARVANS
//Self Solution
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >>n;
	    int a[n];
	    for(int i =0;i<n;i++){
	        cin >>a[i];
	    }
	    int count =1;
	    int slow =a[0];
	    for(int i = 1;i<n;i++){
	       if(a[i] < slow){
	           count++;
	           slow =a[i];
	       } 
	    }
	    cout << count<<endl;
	}
	return 0;
}
