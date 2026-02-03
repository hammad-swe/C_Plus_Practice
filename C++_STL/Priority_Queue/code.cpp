#include <iostream>
#include <queue>
using namespace std;

int main(){
    //O(log n)
    priority_queue<int> pq;
    pq.push(10);
    pq.push(5);
    pq.push(20);
    cout << "Top element: " << pq.top() << endl; // Should print 20
    pq.pop();
    cout << "Top element after pop: " << pq.top() << endl; // Should print 10
    return 0;
    
}
