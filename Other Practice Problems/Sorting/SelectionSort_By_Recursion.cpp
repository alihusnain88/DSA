// Sorting Algorithm
// Selection Sort Using Recursion

#include <iostream>
using namespace std;

void selectionSort(int arr[], int l, int h);
int min(int arr[], int l, int h);
void print(int arr[], int size);

int main(){
    int arr[10] = {-9,-6,0,120,99,1,-17,12,300,33};
    selectionSort(arr, 0, 9);

    print(arr, 10);    
    return 0;
}

void selectionSort(int arr[], int l, int h){

    if(l < h){
        int m = min(arr,l+1,h);

        if(arr[l] > arr[m]){
            swap(arr[l], arr[m]);
        }
        selectionSort(arr, l+1, h);
    }
}

int min(int arr[], int l, int h){
    int minimum = l;
    for(int i=l+1; i<=h; ++i){
        if(arr[minimum] > arr[i]){ 
            minimum = i;
        }
    }
return minimum;
}

void print(int arr[], int size){
    cout <<"\nSorted Array:\n";
    for(int i=0; i<size; ++i){
        cout <<arr[i] <<" ";
    }
    cout <<endl;
}