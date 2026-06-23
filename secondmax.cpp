#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {10, 5, 8, 2, 15};
    int n = 5;

    int firstMax = INT_MIN;
    int secondMax = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        }
        else if(arr[i] > secondMax && arr[i] != firstMax) {
            secondMax = arr[i];
        }
    }

    cout << "Second Maximum = " << secondMax;

    return 0;
}