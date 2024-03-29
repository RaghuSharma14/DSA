// palindrome check by checking string and its reversal.

// #include<iostream>
// using namespace std;
// string reverse(string &s){
//     string reversed = s;
//     int i = 0;
//     int j = s.size()-1;
//     while(i<=j){
//         swap (reversed[i],reversed[j]) ;
//         i++;
//         j--;
//     }
//     cout<<reversed;
//     return reversed;

// }
// int palindrome(string &s){
//     string ans= reverse(s);
    
//     if(s==ans){
//         return true;
//     }
//     else{
//         return false;
//     }

// }
// int main(){
//     string s= "abbab";
//     cout<<s<<endl;
//     bool is_palindrome =palindrome(s);
//     cout<<is_palindrome;
//     return 0;
// }

// palindrome check by only half string

// #include<iostream>
// using namespace std;

// int palindrome(int i, int j,string &s){
//    while(i<j){
//        if(s[i]!=s[j]){
//         return false;
//        }
//     //    cout << "Checking characters: " << s[i] << " and " << s[j] << endl;
//        i++;
//        j--;
//    }
//    return true;
// }
// int main(){
//     string s= "abba";
//     cout<<s<<endl;
//     int i = 0;
//     int j = s.size()-1;
//     int is_palindrome =palindrome(i,j,s);
//     cout<<is_palindrome;
//     return 0;
// }

// check plaindrome by recursion 2 pointers

// #include<iostream>
// using namespace std;


// bool palindrome(int i, int j,string &s){
//    if(i>=j){
//     return true;
//    }
//    if(s[i]!=s[j]){
//     return false;
//    }
//    else{
//     return palindrome(++i,--j,s);
//    }
// //    cout<<s<<endl;
// }
// int main(){
//     string s= "abba";
//     cout<<s<<endl;
//     int i = 0;
//     int j = s.size()-1;
//     bool is_palindrome =palindrome(i,j,s);
//     if(is_palindrome){
//         cout<<"its palindrome";
//     }
//     else{
//         cout<<"its not palindrome";
//     }

//     return 0;
// }

// check plaindrome by recursion 1 pointer

// #include<iostream>
// using namespace std;

// int palindrome(int i, int j,string &s){
//    while(i<j){
//        if(s[i]!=s[j]){
//         return false;
//        }
//     //    cout << "Checking characters: " << s[i] << " and " << s[j] << endl;
//        i++;
//        j--;
//    }
//    return true;
// }
// int main(){
//     string s= "abba";
//     cout<<s<<endl;
//     int i = 0;
//     int j = s.size()-1;
//     int is_palindrome =palindrome(i,j,s);
//     cout<<is_palindrome;
//     return 0;
// }

// check plaindrome by recursion 2 pointers

#include<iostream>
using namespace std;


bool palindrome(int i,string &s){
   if(i>=s.size() / 2){
    return true;
   }
   if(s[i]!=s[s.size() - i - 1]){
    return false;
   }
   else{
    return palindrome(++i,s);
   }
//    cout<<s<<endl;
}
int main(){
    string s= "abba";
    cout<<s<<endl;
    int i = 0;

    bool is_palindrome =palindrome(i,s);
    if(is_palindrome){
        cout<<"its palindrome";
    }
    else{
        cout<<"its not palindrome";
    }

    return 0;
}
