#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 5, 8, 2, 15};
    int n = 5;

    int maxElement = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    cout << "Maximum Element = " << maxElement;

    return 0;
}