class Solution {
public:
    int countSeniors(vector<string>& details) {
        int size = details.size();
        int count=0;
        int j=11;
        for(int i=0; i<size; i++){
            if((details[i][11]=='6' && details[i][12]!='0') || details[i][11]=='7' || details[i][11]=='8' || details[i][11]=='9'){
                count++;
            }
            
        }
        return count;
    }
};