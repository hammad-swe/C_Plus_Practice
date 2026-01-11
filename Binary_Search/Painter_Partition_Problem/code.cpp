#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowedPainter){
    int painters =  1, time = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > maxAllowedPainter){
            return false;
        } else{
            if (time + arr[i] <= maxAllowedPainter){
                time += arr[i];
            } else{
                painters++;
                time = arr[i];
            }
        }
    }
    return painters > m ? false: true;
}

int painterAllocation(vector<int> &arr, int n, int m){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int ans = -1;
    int st = 0 , end = sum; 
    while(st <= end){
        int mid =  st + (end - st) / 2;
        if(isValid(arr, n, m, mid)){
            ans = mid;
            end = mid - 1;
        } else {
            st =  mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {40,30,10,20};
    int n=4, m=2;
    cout<<painterAllocation(arr,n,m)<<endl;
    return 0;
}