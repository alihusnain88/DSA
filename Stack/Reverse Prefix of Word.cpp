class Solution {
public:
    string reversePrefix(string word, char ch) {
        int size = word.size();
        int i;
        for(i=0; i<size; i++){
            if(word[i]==ch){
                break;                
            }
        }
        if(i!=size){
        for(int j=0; j<=i/2; j++){
            swap(word[j],word[i-j]);
        }
        }
        return word;
    }
};