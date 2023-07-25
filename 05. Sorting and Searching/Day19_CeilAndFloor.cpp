// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int ceilSearch(int arr[], int x, int n){
    int ans = -1;
    for(int i=0;i<n;i++){
        if(arr[i] > x){
            ans = arr[i];
            break;
        }
    }
    return ans;
    
}
int floorSearch(int arr[], int x, int n){
    int ans = -1;
    for(int i=0;i<n;i++){
        if(arr[i] < x){
            ans = arr[i];
        }
    }
    return ans;
}

int main() {
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 3;
    int index = ceilSearch(arr, x, n);
    cout << index << endl; // 8
    int index1 = floorSearch(arr, x, n);
    cout << index1 << endl; // 2
    return 0;
}