class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.size();
        int count = 0;
        // s[size]=' ';
        for(int i=size-2; i>=0; i--){
            if(s[i]!=' '){
                count++;
            }
            else if(s[i]==' '&&s[i+1]!=' '){
                break;
            }
        }
        if(s[size-1]!=' '){
            count++;
        }
        return count;
        
    }
};