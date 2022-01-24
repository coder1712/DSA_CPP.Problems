// Given an array arr[] of N non-negative integers representing the height of blocks. 
//If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 
// Example 1:

// Input:
// N = 6
// arr[] = {3,0,0,2,0,4}
// Output:
// 10
//GFG
long long trappingWater(int arr[], int n){
        // code here
        int left[n], right[n];
        long long int water =0;
        left[0] = arr[0];
        right[n-1] = arr[n-1];
        for (int i = 1; i < n; i++){
            left[i] = max(left[i - 1], arr[i]);
        }
        for (int i = n - 2; i >= 0; i--){
            right[i] = max(right[i + 1], arr[i]);
        }
        for (int i = 1; i < n-1; i++)
        {
            long long int var=min(left[i-1],right[i+1]);
            if(var > arr[i])
            {
                 water += var - arr[i];
            }
        }
        
 
    return water;
    }