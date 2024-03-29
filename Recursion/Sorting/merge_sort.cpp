// MERGE SORT by copying into 2 new arrays

#include<iostream>
using namespace std;

void merge(int arr[], int s, int e,int mid){
    
    // int mid = s + (e-s)/2;

    int len1 = mid-s+1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];
    
    //copy values to new arrays
    int k1=s;
    for(int i=0;i<len1;i++){
        first[i]= arr[k1++];
    }
    int k=mid+1;
    for(int i=0;i<len2;i++){
        second[i]= arr[k++];
    }
    
    int i=0,j=0;
    k1=s;
    while(i<len1 && j<len2){
        if(first[i]<second[j]){
            arr[k1++]=first[i++];
        }
        else{
            arr[k1++]=second[j++];
        }
    }
    while(i<len1){
        arr[k1++]=first[i++];
    }
    while(j<len2){
        arr[k1++]=second[j++];
    }

    delete []first;
    delete []second;

}

void mergeSort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    int mid = s+(e-s)/2;

    //left part
    mergeSort(arr,s,mid);

    //right part
    mergeSort(arr,mid+1,e);

    //merge
    merge(arr,s,e,mid);
}
int main(){
    int arr[20]={3,9,5,1,4,8};
    mergeSort(arr,0,5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

//MERGE SORT by indexes


#include<iostream>
using namespace std;

void merge(int arr[], int s, int e,int mid){
    
    // int mid = s + (e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int templ[len1];

    for(int i=0;i<len1;i++){
        templ[i]= arr[s+i];
    }
   
    int i=0,j=mid+1;
    int k1=s;
    while(i<len1 && j<=e){
        if(templ[i]<=arr[j]){
            arr[k1++]=templ[i++];
        }
        else{
            arr[k1++]=arr[j++];
        }
    }
    while(i<len1){
        arr[k1++]=templ[i++];
    }
    

}

void mergeSort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    int mid = s+(e-s)/2;

    //left part
    mergeSort(arr,s,mid);

    //right part
    mergeSort(arr,mid+1,e);

    //merge
    merge(arr,s,e,mid);
}
int main(){
    int arr[20]={3,9,5,1,4,8};
    mergeSort(arr,0,5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
