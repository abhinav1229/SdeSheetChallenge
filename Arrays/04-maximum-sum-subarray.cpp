#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long max_so_far = 0;
    long long current_max = 0;

    for(int i=0 ; i<n ; i++) {
        current_max = current_max + arr[i];
        if(current_max > max_so_far){
            max_so_far = current_max;
        }
        if(current_max < 0){
            current_max = 0;
        }
    }
    return max_so_far;
}

int main()
{
    int arr[] = {2, 3, -1, 4, -5, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxSum = maxSubarraySum();
    
    cout << "Max Sum Subarray is: " << maxSum;
}
