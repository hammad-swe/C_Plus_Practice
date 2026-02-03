#include <iostream>
using namespace std;

int main(){
    //sorting algorithms will be implemented here
    vector<int> data = {12, 4, 6 };
    sort(data.begin(), data.end());
    for(int num : data){
        cout << num << " ";
    }
    


    return 0;
}