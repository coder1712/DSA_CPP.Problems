/*
Problem #1 : Range Sum Queries using Prefix Sum
Description : We are given an Array of n integers, 
We are given q queries having indices l and r . 
We have to find out sum between the given range of indices.
Input 
[4, 5, 3, 2, 5]
3
0 3
2 4
1 3
Output
14 (4+5+3+2)
10 (3+2+5)
10 (5+3+2)

Pseudo Code
// n : size of array
// q : Number of queries
// l, r : Finding Sum of range between index l and r 
// l and r (inclusive) and 0 based indexing
void range_sum(arr, n)
{
    prefix[n] = {0}
    prefix[0] = arr[0]
    for i = 1 to n-1 :
        prefix[i] = a[i] + prefix[i-1]

    for (i = 1 to q )
    {
        if (l == 0) 
        {
            ans = prefix[r]
            print(ans)
        }
        else 
        {
            ans = prefix[r] - prefix[l-1]
            print(ans)
        }
    }
}
Time Complexity : Max(O(n),O(q))
Auxiliary Space : O(n)
*/
