#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

typedef long long ll;
ll ans = 0;

void merge(int a[], int low, int mid, int high) {
    // subarray1 = a[low..mid]
    // subarray2 = a[mid+1..high]
    int N = high-low+1;
    int b[N]; // Need a temporary array to store first before copying over
    int left = low, right = mid + 1, index = 0;
    // Left represents the first index of the subarray on the left
    // Right represents the first index of the subarray on the right
    // Index represents the index of the temp array
    while (left <= mid && right <= high) // the merging
        if (a[left] <= a[right]) {
            b[index++] = a[left++];
        } else {
            b[index++] = a[right++]; // Represents a swap
            ans += (mid-left+1);
        }
        // b[bIdx++] =  ? a[left++] : a[right++];
    while (left <= mid) b[index++] = a[left++]; // leftover, if any
    while (right <= high) b[index++] = a[right++]; // leftover, if any
    for (int k = 0; k < N; k++) a[low+k] = b[k]; // copy back
}

void mergeSort(int arr[], int low, int high) {
    // The array is to be sorted in ascending order
    if (low < high) { // Base case: low >= high (0 or 1 item)
        int mid = (low + high) / 2;	// Midpoint
        mergeSort(arr, low  , mid ); // divide into two halves
        mergeSort(arr, mid+1, high); // then recursively sort them
        merge(arr, low, mid, high); // conquer: the merge subroutine
    }
}

/**
 * Using merge sort to sort the array.
 * O(n log n) 
 * 
 */
int main() {
    int cases;
    cin >> cases;
    int arr[cases];
    for(int i = 0; i < cases; i++) {
        cin >> arr[i];
    }
    mergeSort(arr, 0, cases - 1);
    
    cout << ans << endl;
    return 0;
}