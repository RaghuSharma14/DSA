// for checking array is sorted or not

#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    if(n==0 || n==1){
        return true;
    }
    else if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans = isSorted(arr+1,n-1);
        return ans;
    }
    
}
int main(){
    int arr[20]={1,2,3,4,5,6,7};
    bool ans = isSorted(arr,7);

    if(ans){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    
    return 0;
}

// to get the sum of array using recursion

#include<iostream>
using namespace std;

int getSum(int arr[], int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return arr[0];
    }
  
    int ans= getSum(arr+1,n-1);
    cout<<ans<<" "<<endl;
    int sum = arr[0]+ans;
    cout<<sum <<" "<<endl;
    return sum;

}
int main(){
    int arr[20]= {1,4,2,5,3};
    int ans = getSum(arr,5);
    cout<<ans;

    return 0;
}

