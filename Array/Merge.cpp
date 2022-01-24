// Given two sorted arrays arr1[] and arr2[] of sizes n and m in non-decreasing order. 
//Merge them in sorted order without using any extra space. 
//Modify arr1 so that it contains the first N elements and modify arr2 so that it contains the last M elements.

// Example 1:

// Input: 
// n = 4, arr1[] = [1 3 5 7] 
// m = 5, arr2[] = [0 2 6 8 9]
// Output: 
// arr1[] = [0 1 2 3]
// arr2[] = [5 6 7 8 9]
// Explanation:
// After merging the two 
// non-decreasing arrays, we get, 
// 0 1 2 3 5 6 7 8 9.

void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            vector<int> v;
    for(int i=0;i<n;i++){
        v.push_back(arr1[i]);
    }
    for(int i=0;i<m;i++){
        v.push_back(arr2[i]);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        arr1[i] = v[i];
    }
    for(int i=0;i<m;i++){
        arr2[i] = v[n+i];
    }
        } 