#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n){
for(int i=0; i<n-1; i++){
    int minIndex = i;
    for(int j=i+1; j<n; j++){
        if(arr[j] < arr[minIndex]){
            minIndex = j;
        }
    }
    swap(arr[i], arr[minIndex]);
}
}

int main(){
    int n= 5;
    int arr[] = {64, 25, 12, 22, 11};
    SelectionSort(arr, n);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
//    for(int i = n - 1; i >= 0; i--){
//         cout<<arr[i]<<" ";
//     }
    cout<<endl;
return 0;
}