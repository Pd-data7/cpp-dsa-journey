#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {10, 5, 8, 2, 15};
    int n = 5;

    int firstMin = INT_MAX;
    int secondMin = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(arr[i] < firstMin) {
            secondMin = firstMin;
            firstMin = arr[i];
        }
        else if(arr[i] < secondMin && arr[i] != firstMin) {
            secondMin = arr[i];
        }
    }

    cout << "Second Minimum = " << secondMin;

    return 0;
}