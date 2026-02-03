#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;
int main(){
    //O(1) average time complexity for insertions and lookups
    unordered_multimap<string, int> umm;
    umm.insert({"apple", 1});
    umm.insert({"banana", 2});
    umm.insert({"apple", 3}); // duplicate key


    for (const auto& pair : umm) {
        cout << pair.first << ": " << pair.second << endl;
    }

    multimap<string, int> mm; //O(log n) time complexity for insertions and lookups

    mm.insert({"apple", 1});
    mm.insert({"banana", 2});
    mm.insert({"apple", 3}); // duplicate key

    cout << "\nMultimap contents:" << endl;
    for (const auto& pair : mm) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;

}