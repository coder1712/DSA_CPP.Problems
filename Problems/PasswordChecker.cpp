//check numeric, lowercase and uppercase presence in a string
#include <bits/stdc++.h>
using namespace std;
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin >>s;
	    if(any_of(s.begin(), s.end(), ::isdigit) && any_of(s.begin(), s.end(), ::islower)&&any_of(s.begin(), s.end(), ::isupper)){
	       cout<<"YES"<<endl;
	}else{
	    cout<<"NO"<<endl;
	}
	}
	return 0;
}