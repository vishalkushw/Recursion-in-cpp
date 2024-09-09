#include <iostream>
using namespace std;

int findMin(int arr[], int n) {
    if (n == 1)
	return arr[0]; 
    return min(arr[0], 
	findMin(arr+1, n-1));
}

int main() {
    int arr[] = {3, 5, 2, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum element: " << findMin(arr, n) << endl;
}
