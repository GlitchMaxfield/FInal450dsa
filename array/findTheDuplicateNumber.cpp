#include "bits/stdc++.h"

using namespace std;

void duplicateNumber(int arr[], int n){
    sort(arr, arr+n);
    for (int i=0; i<n-1; i++){
        int temp=arr[i];
        for (int j=i+1; j<n; j++){
            if (arr[j] == temp){ 
                cout << temp << endl;
                return;
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    duplicateNumber(arr, n);
    return 0;
}