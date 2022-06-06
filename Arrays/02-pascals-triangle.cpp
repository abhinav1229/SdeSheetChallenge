#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    
    vector<vector<long long int>> pascal(n);
    
    for(int i=0 ; i<n ; i++){
        pascal[i].resize(i + 1);
        for(int j=0 ; j<=i ; j++){
            if(j == 0)
                  pascal[i][j] = 1;
            else if(i == j)
                   pascal[i][j] = 1;
            else
                   pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
        }
    }
    return pascal;
}


int main()
{
    int n  = 5;
    vector<vector<long long int>> result;

    result = printPascal(n);

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }
}