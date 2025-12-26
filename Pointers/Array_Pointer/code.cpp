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
    
    return 0;
}