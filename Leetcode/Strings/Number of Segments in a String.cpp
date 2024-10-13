class Solution {
public:
    int countSegments(string s) {
    int size = s.length();
    if(size==0){
        return 0;
    }
    int count=0;
    int i;
    for(i=1; i<size; i++){
        if(s[i]==' ' && s[i-1]!=' '){
            count++;
        }
    }
    if(s[size-1]!=' '){
        count++;
    }
    return count;
       
    }
};