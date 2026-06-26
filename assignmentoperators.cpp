#include <iosteam> 
using namespace std; 
int main() { 
    int a = 6, b = 4; 
    // Assignment Operator. 
    cout << "a = " << a << endl; 
    //  Add and Assignment Operator. 
    cout << "a += b is " << (a += b) << endl; 
    // Subtract and Assignment Operator. 
    cout << "a -= b is " << (a -= b) << endl; 
    //  Multiply and Assignment Operator. 
    cout << "a *= b is " << (a *= b) << endl; 
    //  Divide and Assignment Operator. 
    cout << "a /= b is " << (a /= b); 
 
    return 0;