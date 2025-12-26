#include <iostream>
#include <vector>
using namespace std;

// Pass by reffernce with pointer
void changeA(int &b) {

 b=20; // Changing the value of 'a' directly through reference by alias 'b'
 
  // Dereferencing the pointer to change the value at the address it points to
// *ptr = 20;


}
int main(){
int a = 10;
changeA(&a);
cout<< a << endl;
return 0;
}




// int main(){

//     int a = 10;
//     int* p = &a;
//     int** q = &p;

//     cout <<  *p << endl;
//     cout  << **q << endl;
//     cout  << p << endl;
//     cout << *q<< endl;

//     float b = 20.5;
//     float* p = &b;
//      float** pp = &p;
// int* c = NULL
//     cout<< &a << endl;
//     cout<< p<<endl;
//     cout<< &b<< endl;
//     cout<< *pp << endl;
//     cout<< *(&a)<< endl;
//     cout<< *(pp) << endl;
//     cout<< p << endl;
//     return 0;
// }