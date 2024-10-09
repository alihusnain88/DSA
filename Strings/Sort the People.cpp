class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& ints) {
    int intsize = ints.size();
    int namesize = names.size();
    int min = ints[0];
    for(int i=0; i<intsize; i++){
        for(int j=0; j<intsize-1; j++){
            if(ints[j]<ints[j+1]){
                swap(ints[j], ints[j+1]);
                swap(names[j], names[j+1]);
            }
        }
    }
    return names;


        
    }
};