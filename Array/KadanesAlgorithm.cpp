// Given an array Arr[] of N integers. 
//Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.
// Example 1:

// Input:
// N = 5
// Arr[] = {1,2,3,-2,5}
// Output:
// 9
// Explanation:
// Max subarray sum is 9
// of elements (1, 2, 3, -2, 5) which 
// is a contiguous subarray
//GFG solution
long long maxSubarraySum(int arr[], int n){
        
        int max_sum = INT_MIN , max_upto =0;
        for(int i =0;i<n;i++){
            max_upto += arr[i];
            if(max_sum < max_upto){
                max_sum = max_upto;
            }
            if(max_upto < 0){
                max_upto = 0;
            }
        }
        return max_sum;
        
    }