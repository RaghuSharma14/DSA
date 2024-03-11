//for same number of row and column

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n";
    cin>>n;

    int **arr= new int*[n];

    for(int i=0;i<n;i++){
        arr[i]= new int [n];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    
    return 0;
}


// for different number of row and columns
#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter row: ";
    cin>>row;

    int col;
    cout<<"Enter col: ";
    cin>>col;

    int **arr= new int*[row];

    for(int i=0;i<row;i++){
        arr[i]= new int [col];
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;


    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    //release free memory
    for(int i=0;i<row;i++){
        delete [] arr[i];
    }
    delete []arr;
    return 0;
}
