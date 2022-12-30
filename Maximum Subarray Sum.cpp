//Solved on Coding Ninjas

#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long sum = 0, max = INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
        if(sum>max)
            max = sum;
        if(sum<0)
            sum = 0;
    }
    if(max<0)
        max=0;
    
    return max;
}
