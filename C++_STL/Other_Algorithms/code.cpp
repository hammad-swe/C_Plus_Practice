#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;
int main(){
    //reverse
    string str = "hello";
    reverse(str.begin(), str.end());

    //next_permutation
    string perm = "abc";
    next_permutation(perm.begin(), perm.end());
    //swap, min, max
    int a = 5, b = 10;
    swap(a, b);
    int minimum = min(a, b);
    int maximum = max(a, b);

    // Output results
    cout << "Reversed string: " << str << endl;
    cout << "Next permutation: " << perm << endl;
    cout << "After swap: a = " << a << ", b = " << b
            << endl;
    cout << "Minimum: " << minimum << ", Maximum: " << maximum << endl;
    return 0;
}
