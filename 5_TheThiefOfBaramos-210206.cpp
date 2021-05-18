#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n=0, t=0, maxIndex=0, maxValue=0, sum=0;
    cin>>n>>t;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(int i=0; i<t; i++) {
        maxIndex = distance(arr, max_element(arr, arr + n));
        maxValue = *max_element(arr, arr + n);
        sum=sum+maxValue;
        arr[maxIndex]=0;
    }
    cout<<sum<<endl;
}
