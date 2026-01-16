#include <iostream>
using namespace std;

void BubbleSort(int arr[],  int n){// time complexity: O(n^2)
    for(int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void printArr(int arr[], int n){
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
int main(){
    int n= 5;
    int arr[] = {64, 34, 25, 12, 22};
    BubbleSort(arr, n);
    printArr(arr, n);
    return 0;
}