#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> mySet;
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);

    // lowr_bound example
    auto it = mySet.lower_bound(20);
    if(it != mySet.end()){
        cout << "Lower bound of 20: " << *it << endl;
    } else {
        cout << "No lower bound found for 20" << endl;
    }


        for(const int& element : mySet){
        cout << element << " ";
    }
    cout << endl;

    // upper_bound example
    it = mySet.upper_bound(20);

    if(it != mySet.end()){
        cout << "Upper bound of 20: " << *it << endl;
    } else {
        cout << "No upper bound found for 20" << endl;
    }
    return 0;
}