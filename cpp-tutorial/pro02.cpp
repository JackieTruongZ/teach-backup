#include<iostream>
using namespace std;

int main() {
    int n ;
    cin>> n;
    int Arr[n+10];
    Arr[0] = Arr[1] = 1;
    int i = 2;
    while(i<n) {
        Arr[i] = Arr[i-1] + Arr[i-2];
        i++;
    }
    for(int j = 0; j < n ; j++) {
        cout<< Arr[j];
    }
}


