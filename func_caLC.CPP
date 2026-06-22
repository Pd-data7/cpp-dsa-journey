#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divide(int a, int b)
{
    return (float)a / b;
}

int main()
{
    int a, b, choice;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "\n1. Add";
    cout << "\n2. Subtract";
    cout << "\n3. Multiply";
    cout << "\n4. Divide";
    cout << "\nEnter choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Result = " << add(a, b);
        break;

    case 2:
        cout << "Result = " << subtract(a, b);
        break;

    case 3:
        cout << "Result = " << multiply(a, b);
        break;

    case 4:
        cout << "Result = " << divide(a, b);
        break;

    default:
        cout << "Invalid Choice";
    }

    return 0;
}