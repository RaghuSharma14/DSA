#include<iostream>
using namespace std;
int SayDigit(int n, string arr[]){
    if(n==0){
        return 1;
    }

    int digit = n%10;
    n=n/10;    
   

    SayDigit(n,arr);
     cout<<arr[digit]<<endl;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    SayDigit(n,arr);
    return 0;
}
