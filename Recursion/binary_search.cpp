#include<iostream>
using namespace std;
int print(int arr[],int s, int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
bool binary_search(int arr[],int s, int e, int key){
    print(arr,s,e);
    int mid = s+(e-s)/2;
    cout<<"mid is: "<<arr[mid]<<endl;
    if(s>e){
        return false;
    }
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]>key){
        return binary_search(arr,s,mid-1,key);
    }
    if(arr[mid]<key){
        return binary_search(arr,mid+1,e,key);
    }
}
int main(){
    int arr[20]={3,4,5,6,7,8,9};
    int start=0;
    int end = 6;
    int key = 7;
    cout<<"found(1) or not(0): "<<binary_search(arr,start,end,key);
 
    return 0;
}

