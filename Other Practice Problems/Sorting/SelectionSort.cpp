#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>&, int size);
void print(vector<int>&, int size);

int main(){
    vector<int> vec;
    int input;
    cout <<"Enter array elements(-1 to stop): \n";
    while(input != -1){
        cin >>input;
        if(input != -1){ 
           vec.push_back(input); 
        } 
    }
    int size = vec.size();

    // int vec[5] = {7,3,6,2,1};
    selectionSort(vec, size);
    print(vec, size);
    
    return 0;
}

void selectionSort(vector<int>&vec, int size){
    int selected;
    int mover;
    int min;

    for(int i=0; i<size-1; ++i){
        selected = i; 
        mover = i+1;
        min = mover;
        while(mover < size){
            if(vec[min] > vec[++mover]){
                min = mover;
            }
        }
        if(vec[selected] > vec[min]){
            swap(vec[selected++], vec[min]);
        }
    }
}

void print(vector<int>& vec, int size){
    for(int i=0; i<size; ++i){
        cout <<vec[i] <<" ";
    }
    cout <<endl;
}