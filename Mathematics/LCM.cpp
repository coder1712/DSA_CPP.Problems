//Geeks for Geeks
//Given a number n find the smallest number evenly divisible by each number 1 to n
#include<bits/stdc++.h>
using namespace std;
 
// Function returns the lcm of first n numbers
long long lcm(long long n)
{
    long long ans = 1;   
    for (long long i = 1; i <= n; i++)
        ans = (ans * i)/(__gcd(ans, i));
    return ans;
}
 
int main()
{
    long long n = 20;
    cout << lcm(n);
    return 0;
}

//LCM of a first n natural number
//LCM(a,b) = (a*b)/HCF(a,b)
// Time Complexity: O(nlog n)
#include <bits/stdc++.h>
using namespace std;
//Calculate HCF
int hcf(int a,int b){
    if(b==0){
        return a;
    }
    return hcf(b,a%b);
}

int findlcm(int a, int b){
    if(b == 1){
        return a;
    }
     a= (a * b) / hcf(a,b);
     b-=1;
     return findlcm(a,b);
}

int main(){
    int n;
    cin >>n;
    if(n <3){
        cout <<n;
    }else{
        cout<<findlcm(n,n-1);
    }
    return 0;
}