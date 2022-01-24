// Given an array arr[] of size N, find the smallest positive number missing from the array.
// Example 1:

// Input:
// N = 5
// arr[] = {1,2,3,4,5}
// Output: 6
// Explanation: Smallest positive missing
// number is 6.
//GFG solution TimeComplexity:O(N)
int findMissing(int A[], int n) { 
    bool present[n + 1] = { false };
 
    for (int i = 0; i < n; i++) {
        if (A[i] > 0 && A[i] <= n)
            present[A[i]] = true;
    }
 
    for (int i = 1; i <= n; i++)
        if (!present[i])
            return i;

    return n + 1;
        
    }