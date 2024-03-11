//static------>
#include<iostream>
using namespace std;

int main(){
    int *jaggedArray[3];

    jaggedArray[0]= new int[3]{2,5,9};
    jaggedArray[1]= new int[4]{6,2,6,4};
    jaggedArray[2]= new int[2]{5,8};

    int size[]={3,4,2};

    for(int i=0;i<3;i++){
        for(int j=0;j<size[i];j++){
            cout<<jaggedArray[i][j];
        }
        cout<<endl;
    }
   
    for(int i = 0; i< 3; i++) {  
        delete[] jaggedArray[i];  
    }   
    
    return 0;
}

