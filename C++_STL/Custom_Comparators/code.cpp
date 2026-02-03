#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// Custom comparator to sort in descending order
bool descending(int a, int b) {
    return a > b;
}
int main() {
    vector<int> data = {12, 4, 6};
    
    // Using custom comparator for sorting in descending order
    sort(data.begin(), data.end(), descending);
    
    for (int num : data) {
        cout << num << " ";
    }
    
    return 0;
}