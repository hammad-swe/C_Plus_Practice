#include <iostream>
#include <list>
#include <queue>
#include <vector>
using namespace std;

int main(){
    queue<int> q;  // FIFO - First In First Out
    q.push(1);
    q.push(2);
    q.push(3);

    queue<int> q1;
    q1.swap(q);
    cout<<"q size after swap:  "<< q.size() << endl;

    cout<<"q1 size after swap:  "<< q1.size() << endl;
 
    return 0;
}
