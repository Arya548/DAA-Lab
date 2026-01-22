#include <iostream>
using namespace std;

int main() {
    int arr[] = {-2, -5, 6, -2, -3, 1, 5, -6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int max_so_far = arr[0];
    int max_ending_here = arr[0];

    int start = 0, end = 0, s = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > max_ending_here + arr[i]) {
            max_ending_here = arr[i];
            s = i; // potential new start index
        } else {
            max_ending_here += arr[i];
        }

        if (max_ending_here > max_so_far) {
            max_so_far = max_ending_here;
            start = s;
            end = i;
        }
    }

    // Print results
    cout << "Maximum Subarray Sum: " << max_so_far << endl;
    cout << "Subarray with Maximum Sum: ";
    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
