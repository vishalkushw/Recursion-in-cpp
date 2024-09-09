#include <iostream>
using namespace std;

int findMax(int arr[], int n) {
    if (n == 1) 
	return arr[0];
    return max(arr[0],
	findMax(arr+1, n-1));
}

	int main() {
    int arr[] = {3, 5, 2, 9, 1}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum element: " << findMax(arr, n) << endl;
}
