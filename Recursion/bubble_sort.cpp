// bubble sort 

#include<iostream>
using namespace std;
void bubble(int arr[], int n){
     int swapped = false;
     for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped==false){
           break;
        }
     }
     
}

int main(){
    int arr[20]={2,4,1,3,8,7};
    bubble(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// bubble sort by recursion
#include<iostream>
using namespace std;
void bubble(int arr[], int n){
    if(n==0 || n==1){
        return;
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    return bubble(arr,n-1);
}
int main(){
    int arr[20]={2,4,1,3,8,7};
    bubble(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
