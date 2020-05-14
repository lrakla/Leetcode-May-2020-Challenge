class Solution {

public:
    
void fill(vector<vector<int>>& image,int row, int col,int orig, int color){
        int r = image.size();
        int c = image[0].size();
        if(row<0 || col<0 ||  row>=r || col>=c)
            return;
        if (image[row][col] != orig || image[row][col] == color) return;
        image[row][col]==color;
        fill(image,row+1,col,orig,color);
        fill(image,row-1,col,orig,color);
        fill(image,row,col+1,orig,color);
        fill(image,row,col-1,orig,color);
            
    }
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        fill(image, sr, sc, image[sr][sc], newColor);
        return image;
        
    }
};