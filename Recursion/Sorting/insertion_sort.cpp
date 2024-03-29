// INSERTION SORT

#include<iostream>
using namespace std;

void insertion(int *arr, int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j=i-1;
        for(j; j>=0; j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int main(){
    int arr[20]={3,9,5,1,4,8};
    insertion(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

//INSERTION SORT BY RECURSION

#include<iostream>
using namespace std;

void insertion(int arr[], int n){
   if(n<=1){
    return;
   }

    insertion(arr, n-1);
    int last = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = last;
}
int main(){
    int arr[20]={3,9,5,1,4,8};
    insertion(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
