#include <iostream>
using namespace std;

int main() {
    int arr_len;
    cin >> arr_len;
    int arr[arr_len];

    for(int k=0; k<arr_len; k++) {
        cin >> arr[k];
    }
    
    int idx;
    for(int i=0; i<arr_len-1; i++) {
        idx = i;
        for(int j=i+1; j<arr_len; j++) {
            if(arr[j] < arr[idx]) idx = j;
        }

        int tmp = arr[idx];
        arr[idx] = arr[i];
        arr[i] = tmp;
    
    }
    for(int i=0; i< arr_len; i++) {
        cout << arr[i] <<" " ;
    }


}