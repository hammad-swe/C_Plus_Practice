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

    //min and Max element
    vector<int> vec = {3, 1, 4, 1, 5, 9};
    auto min_it = min_element(vec.begin(), vec.end());

    auto max_it = max_element(vec.begin(), vec.end());

    //binary search
    sort(vec.begin(), vec.end()); // binary_search
    bool found = binary_search(vec.begin(), vec.end(), 4);
//count set bits
    int num = 29; // binary: 11101
    int count = __builtin_popcount(num);

    
    // Output results
    cout << "Reversed string: " << str << endl;
    cout << "Next permutation: " << perm << endl;
    cout << "After swap: a = " << a << ", b = " << b
            << endl;
    cout << "Set bits in " << num << ": " << count << endl;
    cout << "Minimum: " << minimum << ", Maximum: " << maximum << endl;
    cout << "Minimum element: " << *min_it << endl;
    cout << "Maximum element: " << *max_it << endl;
    cout << "Element 4 found: " << (found ? "Yes" : "No") << endl;
    
    return 0;
}
