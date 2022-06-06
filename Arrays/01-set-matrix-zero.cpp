#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    int rows = matrix.size();
    int cols = matrix[0].size();
    int col0 = 1;

    for(int i=0 ; i<rows; i++){
        
        if(matrix[i][0] == 0)
               col0 = 0;
        
        for(int j=1 ; j<cols ; j++) {
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
    
    for(int i=rows-1 ; i>=0 ; i--){
        for(int j=cols-1 ; j>=1 ; j--){
            if(matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
        }
        if(col0 == 0) 
           matrix[i][0] = 0;
    }
}



int main() {
    vector < vector < int >> arr;
    arr = {{0, 1, 6, 0}, {2, 3, 5, 2}, {1, 3, 9, 5}};
    setZeroes(arr);
    cout<<"The Resultant Matrix is \n";

    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}
