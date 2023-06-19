bool isValid(int matrix[9][9],int i,int j,int c){
    for(int k=0;k<9;k++){
        if(matrix[i][k]==c) return false;
        if(matrix[k][j]==c) return false;
        if(matrix[3*(i/3)+k/3][3*(j/3)+k%3]==c) return false;
    }
    return true;
}

bool isItSudoku(int matrix[9][9]){
    // search the vaccant grid
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(matrix[i][j]==0){
                
                // explore the options that can fit into grid
                for(int c=1;c<=9;c++){
                    if(isValid(matrix,i,j,c)){
                        // if c is not present in same row, column or same group
                        matrix[i][j]=c;
                        if(isItSudoku(matrix)) return true;
                        // backtrack
                        matrix[i][j]=0;
                    }
                }

                // we can't find any suitable options
                return false;
            }
        }
    }
    return true;
}