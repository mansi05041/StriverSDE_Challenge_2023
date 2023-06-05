#include <bits/stdc++.h>
void setZeros(vector<vector<int>>& matrix){
    int n= matrix.size();
    int m= matrix[0].size();

    // creating two vector that keep track of the position where 0 is found
    vector<int> row(n,0);
    vector<int> col(m,0);

    // search for the element 0
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                // mark the row and col as 1
                row[i]=1;
                col[j]=1;
            }
        }
    }

    // update the matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]||col[j]) matrix[i][j]=0;
        }
    }
}