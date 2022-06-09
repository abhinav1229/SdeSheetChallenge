#include <bits/stdc++.h> 
void sort012(int *nums, int n)
{
   //   Write your code here
        int lo = 0; 
        int hi = n - 1; 
        int mid = 0; 

        while (mid <= hi) { 
            switch (nums[mid]) { 

            // If the element is 0 
            case 0: 
                swap(nums[lo++], nums[mid++]); 
                break; 

            // If the element is 1 . 
            case 1: 
                mid++; 
                break; 

            // If the element is 2 
            case 2: 
                swap(nums[mid], nums[hi--]); 
                break; 
            }
        }
         
}

int main()
{
    int arr[] = {1, 0, 0, 2, 0, 1, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort012(arr, n);

    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
}