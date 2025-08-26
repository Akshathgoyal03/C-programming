
#include<bits/stdc++.h>
using namespace std;
void create_arr(int arr[], int size) {
    cout<<"Enter the elements of the array you want ot make:"<<endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}
void print_arr(int arr[], int size) {
    cout << "the elements of the array you entered are::"<< endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
void removeDuplicates(int arr[], int &n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
void add_element(int arr[], int number) {
    int arr2;
    for (int i = 0; i < 5; i++) {
        cin >> arr2;
    }
}
int main() {
    int N;
    cout<<"Enter Number of Elements: "<<endl;
    cin >> N;
    int arr[N];
    create_arr(arr,N);
    cout << endl;

    cout<< "printing the array: "<<endl;
    print_arr(arr, N);
    cout << endl;
    cout << "Remove Duplicates: "<<endl;
    removeDuplicates(arr, N);
    cout << endl;

    return 0;
}