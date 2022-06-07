#include <bits/stdc++.h> 

void swap(vector<int> &permutation, int i, int j) {
    int temp = permutation[i];
    permutation[i] = permutation[j];
    permutation[j] = temp;
}

void reverse(vector<int> &permutation, int i, int j) {
    while(i < j)
        swap(permutation, i++, j--);
}

vector<int> nextPermutation(vector<int> &permutation, int n)
{
    if(n<=1)
         return permutation;   
    int i = n-2;
    while(i>=0 && permutation[i] >= permutation[i+1]){
        i -= 1;
    }
    
    if(i>=0){
        int j = n-1;
        while(permutation[j] <= permutation[i]){
            j -= 1;
        }
        swap(permutation, i, j);
    }
    reverse(permutation, i+1, n-1);
    
    return permutation;
}


int main()
{
    vector<int> per(2, 3, 1, 4, 5);
    vector<int> result;
    int n = 5;

    result = nextPermutation(per, n);

    for(int i=0 ; i<n ; i++){
        cout << result[i] << " ";
    }

    return 0;
}
