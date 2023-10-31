#include <iostream>
using namespace std;

void swap(int &x, int &y) {
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "1st variable is " << x << ", 2nd variable is " << y << endl;
}

int main() {
    int a = 10, b = 20;
    swap(a, b);
    return 0;
}
