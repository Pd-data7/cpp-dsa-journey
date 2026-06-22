#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before Swap: ";
    cout << x << " " << y << endl;

    swapNumbers(x, y);

    cout << "After Swap: ";
    cout << x << " " << y;

    return 0;
}