#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n){//O(n^2)
    for(int i= 1; i<n; i++){
        int curr= arr[i];
        int prev = i-1;
        while(prev >=0 && arr[prev] > curr){
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

int main(){
    int n = 5;
    int arr[] = {12 , 11, 13, 5, 6};

    InsertionSort(arr, n);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}