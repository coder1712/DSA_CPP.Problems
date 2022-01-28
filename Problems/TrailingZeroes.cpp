//CodeChef Problem Code: FCTRL
// https://www.codechef.com/LRNDSA01/problems/FCTRL

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >>n;
	    int count =0;
	    int c =5;
	    while(n/c >0){
	        count += n/c;
	        c *= 5;
	    }
	    cout <<count<<endl;
	}
	return 0;
}
