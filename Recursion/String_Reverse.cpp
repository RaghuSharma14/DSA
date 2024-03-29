//string reverse by loops

#include<iostream>
using namespace std;

void reverse(string &s){
    int i = 0;
    int j = s.size()-1;
    while(i<=j){
        swap (s[i],s[j]) ;
        i++;
        j--;
    }
    
}

int main(){
    string letter= "abcde";
    cout<<letter<<endl;
    reverse(letter);
    cout<<letter<<endl;
    return 0;
}


// string reverse by recursion

#include<iostream>
using namespace std;

int reverse(int i, string &s){
    cout<<"call receieved: "<<s<<endl;
    
    if(i>=(s.size())/2){
       return 0 ;
    }
    // if(i<=j){
    //     swap(s[i],s[j]);
    // }
    // reverse(++i,--j,s);

    swap(s[i],s[s.size() -i - 1]);
    i++;


    reverse(i,s);

}

int main(){
    string s = "abcde";
    cout<<s<<endl;;

    reverse(0, s);
    cout<<"after reverse: "<<s;
    return 0;
}
