#include<iostream>
using namespace std;
void print(int arr[],int n){
    cout<<"size" <<n<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
bool linearSearch(int arr[],int n,int key){
    print(arr,n);
    if(n==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool ans = linearSearch(arr+1,n-1,key);
        return ans;
    }
    
}
int main(){
    int arr[20]={1,4,9,2,6,7,3};
    int key = 7;
    int ans = linearSearch(arr,7,key);
    cout<<ans;
    return 0;
}
