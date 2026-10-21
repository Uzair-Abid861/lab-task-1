#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
int main() {
    int rolls[7] = {101, 105, 110, 120, 135, 150, 170};
    int keys[2] = {135, 112};
    for (int k = 0; k < 2; k++) {
        int pos = binarySearch(rolls, 7, keys[k]);
        if (pos == -1)
            cout << "Roll no " << keys[k] << " not found\n";
        else
            cout << "Roll no " << keys[k] << " found at index " << pos << endl;
    }
    return 0;
}