#include <iostream>
using namespace std;

void read(int a[], int n){
    for(int i = 0; i < n; i++)
        cin >> a[i];
}

void display(int a[], int n){
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
}

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

void sort(int a[], int n){
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if(a[i] > a[j])
                swap(a[i], a[j]);
}

int main(){
    int a[20], n;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements: ";
    read(a, n);
    sort(a, n);
    cout << "Sorted array: ";
    display(a, n);
    return 0;
}
