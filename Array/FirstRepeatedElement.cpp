// Given an array arr[] of size n, find the first repeating element. 
//The element should occurs more than once and the index of its first occurrence should be the smallest.

// Example 1:

// Input:
// n = 7
// arr[] = {1, 5, 3, 4, 3, 5, 6}
// Output: 2
// Explanation: 
// 5 is appearing twice and 
// its first appearence is at index 2 
// which is less than 3 whose first 
// occuring index is 3.

int firstRepeated(int *arr, int n) {
    int max = 0;
    for (int x = 0; x < n; x++) {
        if (arr[x] > max) {
            max = arr[x];
        }
    }
    int temp[max + 1];
 
    for (int i = 0; i < max + 1; i++)
        temp[i] = 0;
 
    for (int x = 0; x < n; x++) {
        int num = arr[x];
        temp[num]++;
    }
 
    for (int x = 0; x < n; x++) {
        int num = arr[x];
        if (temp[num] > 1) {
            return x +1;
        }
    }
 
    return -1;
}
//GFG problem 