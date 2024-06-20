#include <iostream>
using namespace std;
int main() {
    int arr[] = {10, 15, 20, 25, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxElement = arr[0]; 

    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    cout << "The maximum element in the array is: " << maxElement << endl;

    return 0;
}
