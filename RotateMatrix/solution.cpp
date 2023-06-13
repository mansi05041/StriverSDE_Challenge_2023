void rotateMatrix(vector<vector<int>>& mat,int n,int m){
    int top=0;
    int left=0;
    int bottom=n-1;
    int right=m-1;

    int prev,curr;

    while(top<=bottom && left<=right){

        if(top==right && left==bottom) break;

        prev=mat[top+1][left];

        // move from left to right, fixing the top
        for(int i=left;i<=right;i++){
            curr=mat[top][i];
            mat[top][i]=prev;
            prev=curr;
        }
        top++;

        // move from top to bottom, fixing the right
        for(int i=top;i<=bottom;i++){
            curr=mat[i][right];
            mat[i][right]=prev;
            prev=curr;
        }
        right--;

        // move from right to left, fixing the bottom
        if(top<=bottom){
            for(int =right;i>=left;i--){
                curr= mat[bottom][i];
                mat[bottom][i]=prev;
                prev=curr;
            }
        }
        bottom--;

        // move from bottom to top, fixing the left
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                curr=mat[i][left];
                mat[i][left]=prev;
                prev=curr;
            }
        }
        left++;
    }
}