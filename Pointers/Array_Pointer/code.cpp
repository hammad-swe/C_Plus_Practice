#include <iostream>
#include <vector>
using namespace std;

int main(){
    // int arr[] = {1,2,3,4,5};
    // cout<< *arr <<endl; // 1


    // Pointer Artimatic
    int a = 10;
    int* p = &a;

    cout<< p << endl; // Address of a
    p++; // Incrementing the pointer to point to the next integer location
    cout<< p << endl; // Address of a
    p--; // Decrementing the pointer to point back to the original location
    cout<< p << endl; // Address of a

    // add and subtract 
    p = p + 2;
    cout<< p << endl; // Address of a
    p = p - 2;
    cout<< p << endl; // Address of a


    cout<< endl;

    cout<< "Predicting the output of below code snippet: "<<endl;
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // or int *ptr = &arr[0];
    cout<< *(ptr + 1) << endl;// 20
    cout<< *(ptr + 3) << endl;// 40
    return 0;
}