// Reverse a given array subgroups
// Given an array arr[] of positive integers of size N. 
// Reverse every sub-array group of size K.
// Example 1:
// Input:
// N = 5, K = 3
// arr[] = {1,2,3,4,5}
// Output: 3 2 1 5 4
// Explanation: First group consists of elements
// 1, 2, 3. Second group consists of 4,5.
//Code:
void reverseInGroups(vector<long long>& arr, int n, int k){
        int temp[n], j=0;
        if(k >=n){
            k = n;
        }
        int m =1;
        while(k*m <= n){
        for(int i = (k*m)-1; i>=k*(m-1);i--){
            temp[j++] = arr[i];
        }
        m++;
        }
        for(int i = n-1;i >=k*(m-1);i--){
            temp[j++]=arr[i];
        }
        for(int i = 0; i< n;i++){
            arr[i] = temp[i];
        }
    }

//GFG Problem