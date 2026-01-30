#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main(){ //double-ended queue (deque)
    // Create a deque of integers
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.pop_front();

    for(int val : d){
        cout << val << " ";
    }
    cout << endl;
    return 0;

}