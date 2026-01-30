#include <iostream>
#include <list>
#include <stack>
#include <vector>

using namespace std;

int main(){
    stack<int> s;  // FILO - First In Last Out
    s.push(1);
    s.push(2);
    s.push(3);
 
    stack<int> s1;

   s1.swap(s);
   cout<<"s size after swap:  "<< s.size() << endl;
   cout<<"s1 size after swap:  "<< s1.size() << endl;
    // while (!s.empty())
    // {
    //     cout << s.top() << " ";
    //     s.pop();
    // }
    // cout<< endl;
    return 0;
    

}