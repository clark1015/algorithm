#include <iostream>
using namespace std;
void selection_sort(int arr[], int arr_len);
void swap(int* a, int* b);

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    selection_sort(arr, n);
    cout << arr[2];
}

void selection_sort(int arr[], int arr_len) {
    for(int i=0; i<arr_len-1; i++){
        int idx = i;
        for(int j=i+1; j<arr_len; j++) {
            if(arr[j] > arr[idx]) idx = j;
            else if(arr[j] == arr[idx]) arr[j] = -100;
        }
    swap(arr[i], arr[idx]);
    }
}

void swap(int* a, int* b)
{
 int tmp = *a;
 *a = *b;
 *b = tmp;
}