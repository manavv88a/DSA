#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Armstrong numbers between 1 and " << n << " are: ";

    for (int num = 1; num <= n; num++){
        int temp = num;
        int digits = 0, sum = 0;
        int t = temp;
        while (t > 0) {
            digits++;
            t /= 10;
        }
        t = temp;
        while (t > 0) {
            int digit = t % 10;
            sum += pow(digit, digits);
            t /= 10;
        }

        if (sum == num) {
            cout << num << " ";
        }
    }

    cout << endl;zdd
    return 0;
}
