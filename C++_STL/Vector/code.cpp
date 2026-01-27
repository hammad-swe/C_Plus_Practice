#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;
// at() or []
cout << "Element at index 1: " << vec.at(1)<< " " << vec[1] << endl;
// front and back
cout<<"First Element:"<< vec.front() << endl;
cout<< "Last Element:" << vec.back() << endl;

//size and capacity
cout<<"Size: "<< vec.size() << endl;
cout<<"Capacity: "<< vec.capacity() << endl;

// new way of presentation
vector<int> vec2(3,10); // 3 elements with value 10
for(int val : vec2){
    cout << val << " "<< endl;
}

// erase , clear, insert, empty
vec2.insert(vec2.begin()+1, 15); // insert 15 at index 1
cout<<"After Insertion: ";

for(int val : vec2){
    cout << val << " ";
}
cout << endl;
vec2.erase(vec2.begin()); // erase element at index 3
return 0;
}