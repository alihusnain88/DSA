class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int rows = image.size(); 
        int cols = image[0].size();
        int start;
        int end;
        for(int i=0; i<rows; i++){
            start=0;
            end=cols-1;
            while(start<=end){
                swap(image[i][start], image[i][end]);
                if(image[i][start]==0){
                    image[i][start]=1;
                }
                else if(image[i][start]==1){
                    image[i][start]=0;
                }
                if(start!=end){
                if(image[i][end]==0){
                    image[i][end]=1;
                }
                else if(image[i][end]==1){
                    image[i][end]=0;
                }
                }
                start++;
                end--;
            }
        }
        return image;        
    }
};