#include <iostream>
#include <list>

using namespace std;

int main(){ //doubly linked list
    // Create a list of integers
list<int> l;
l.push_back(1);
l.push_back(2);
l.push_front(3);
l.push_front(5);

l.pop_back();
l.pop_front();

for(int val : l){
cout << val << " ";
}
cout << endl;

//

return 0;
}