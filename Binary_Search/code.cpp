#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target){ // iterative approach
    int st =0;
    int end = arr.size() -1;

    while (st <= end)
    {
        int mid = st + (end -st) / 2; // to prevent overflow

        if(arr[mid] ==  target){
            return mid;
        }
        else if(arr[mid] < target){
            st = mid +1;
        }
        else if (arr[mid] > target){
            end = mid -1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr1 = {-1,0,3,4,5,9,12};
    int target = 12;

    cout<< binarySearch(arr1, target) << endl;
    vector<int> arr2 = { -1,0,3,4,5,9,12 };
    int target2 = 0;
    cout<< binarySearch(arr2, target2) << endl;
}