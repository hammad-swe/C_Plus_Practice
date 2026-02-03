#include <iostream>
#include <map>

using namespace std;

int main(){
    // O(log n) operations
    map<string, int> m;

    m["apple"] = 1;
    m["banana"] = 2;
    m["cherry"] = 3;
    // erase
    m.erase("banana");
    // find
    auto it = m.find("cherry");
    //count
    if(it != m.end()){
        cout << "Found cherry: " << it->second << endl;
    } else {
        cout << "Cherry not found" << endl;
    }
    //insert, emplace

    m.insert({"date", 4});
    // size, empty, clear
    cout << "Size of map: " << m.size() << endl;
    cout << "Is map empty? " << (m.empty() ? "Yes" : "No") << endl;
   
     for (auto p:m){
        cout<< p.first << ":" << p.second << endl;
     }
     
      m.clear();
     return 0;
}