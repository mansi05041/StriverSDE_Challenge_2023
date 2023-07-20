void helper(vector<vector<int>>& image,int x,int y,int newColor,int oldColor){
    // change the color of the given grid
    image[x][y] = newColor;

    vector<int> newI = {-1,0,0,1};
    vector<int> newJ = {0,1,-1,0};

    for(int i=0;i<4;i++){
        int xi = x+newI[i];
        int yi = y+newJ[i];

        // check if the grid is valid
        if(xi>=0 && xi<image.size() && yi>=0 && yi<image[0].size() && image[xi][yi]==oldColor){
            helper(image,xi,yi,newColor,oldColor);
        }
    }
}

vector<vector<int>> floodFill(vector<vector<int>>& image,int x,int y,int newColor){

    int oldColor = image[x][y];

    // if the old and new color are same
    if(oldColor == newColor) return image;

    // modified the matrix
    helper(image,x,y,newColor,oldColor);

    return image;
}