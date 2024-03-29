// for factorial of a number



#include<iostream>
using namespace std;

int factorial(int a){
    if(a==0){
        return 1;
    }
    return a*factorial(a-1);
}

int main(){
    int n;
    cin>>n;

    int ans = factorial(n);
    cout<<ans<<endl;
    return 0;
}


// for any power of 2

#include<iostream>
using namespace std;

int power(int n){
    if(n==0){
        return 1;
    }

    // int sp = power(n-1);
    // int bp = 2* power(n-1);
    
    return 2*power(n-1);

}

int main(){
    int n;
    cin>>n;

    int ans = power(n);
    cout<<ans<<endl;
    return 0;
}


// for counting



#include<iostream>
using namespace std;

void print(int n){
    if(n==0){
        return;
    }
    //tailed recursion
    //cout<<n<<endl;//it will print the counting in descending order
    print(n-1);

    //head recursion
    cout<<n<<endl;//it will print the counting in ascending order
}

int main(){
    int n;
    cin>>n;

    print(n);

    return 0;
}




//for source to destination
#include<iostream>
using namespace std;

void step(int src, int dest){
    cout<<"source "<<src<<" destination"<<dest<<endl;

    if(src== dest){
        cout<<"arrive"<<endl;
        return;
    }
   else if(src>dest){
    cout<<"stop there";
    
   }
    // src++;
   
    step(src+1,dest);
    
}

int main(){
    int src =1;
    int dest = 10;
  

    step(src,dest);
    return 0;
}
