#include <iostream>
#include <vector>
#include <list>
#include <utility> // for std::pair
using namespace std;

int main(){
    // Create a pair
    pair<int , pair<char, int>> p = {1, {'a', 100}};
    cout << "First element: " << p.first << endl;
    cout << "Second element - First part: " << p.second.first << endl;
    cout << "Second element - Second part: " << p.second.second << endl;

    // vector of pairs
    vector<pair<int, int>> vec = {{1,2}, {3,4}, {5,6}};
    
    vec.push_back({7,8}); //insert
    vec.emplace_back(9,10); //in-place object create
    for(auto pr : vec){
        cout << "{" << pr.first << ", " << pr.second << "} ";
    }
    cout << endl;

    return 0;
}