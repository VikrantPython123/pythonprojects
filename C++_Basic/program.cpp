/*
#include<iostream>
using namespace std;
int fact(int n){
    if (n==1){
        return 1;
    }
    if(n>1){
        return n*fact(n-1);
    }
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int y = fact(n);
    cout<<"Factorial of " <<n<< " is " << y;
    return 0;
}
#include<stdio.h>
#include<conio.h>
int fact(int n){
    if (n==1){
        return 1;
    }
    if(n>1){
        return n*fact(n-1);
    }
}

int main(){
    int n;
    printf("Enter the Number ");
    scanf("%d",&n);
    int y = fact(n);
    printf("Factorial of %d is %d",n,y);
    return 0;
}
*/

// #include<iostream>
// using namespace std;

// int x = 50;
// int main(){
//     int x = 40;
//     cout<<::x<<endl; //scope resolution operator
//     cout<<x;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void fun(){
//     static int x = 1;
//     x++;
//     cout<<x<<endl;
// }

// void fun1(){
//     int x = 3; 
//     cout<<x<<endl;
// }

// int main(){
//     fun();
//     fun();
//     fun1();
//     fun1();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int x = 10;
//     int *ptr;
//     int ptr = &x;
//     cout<<x<<endl;
//     cout<<*ptr<<endl;
//     cout<<ptr<<endl;
//     cout<<&x<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void swap(int x, int y){
//     int c;
//     c = x;
//     x = y;
//     y = c;
//     cout << x <<endl;
//     cout<< y;
// }
// int main(){
//     int x ,y;
//     cin>>x>>y;
//     swap(x,y);
//     return 0;
// }

// swap without using third variable
// #include<iostream>
// using namespace std;
// void swap(int x , int y){
//     x = x+y;
//     y = x-y;
//     x = x-y;
//     cout<<x<<endl;
//     cout<<y;
// }
// int main(){
//     int x ,y;
//     cin>>x>>y;
//     swap(x,y);
//     return 0;
// }

//oops concepts implementation

// Calculator program using classes and objects

// #include<bits/stdc++.h>
// using namespace std;
// class Calculator{
//     public:
//     float x,y;
//     void number(){
//         cout<<"Enter First Number: ";
//         cin>>x;
//         cout<< "Enter Second Number: ";
//         cin>>y;
//     }
//     float Add(){
//         return x+y;
//     }
//     float Sub(){
//         return x-y;
//     }
//     float Mul(){
//         return x*y;
//     }
//     float Div(){
//         if(y==0){
//             cout<<"Division by ZERO Error"<<endl;
//             return INFINITY;
//         }
//         return x/y;
//     }
// };
// int main(){
//     Calculator C;
//     char ch;
//     C.number();
//     cout<<"Enter Operation to Perform + , - , * , /";
//     cin>>ch;
//     switch(ch){
//         case '+':
//           cout<<"Addition is " << C.Add();
//           break;
           
//         case '-':
//           cout<<"Subtraction is "<<C.Sub();
//           break;
//         case '*':
//             cout<<"Mutiplicatio is "<<C.Mul();
//             break;
//         case  '/':
//             cout<<"Divison is "<<C.Div();
//             break;
//     }  
//     return 0;
// }

//program to reverse words in a string

// #include<bits/stdc++.h>
// using namespace std;


// int main(){
//     string str = "I can do it";
    
//     vector<string> tmp;
//     string s = "";
//     for(int i = 0; i<str.length();i++){
//         if(str[i]== ' '){
//             tmp.push_back(s);
//             s="";
//         }
//         else{
//             s += str[i];
//         }
    
//     }
//     tmp.push_back(s);
//     for(int i = tmp.size()-1;i>0;i--){
//         cout<<tmp[i]<<" ";
//     }
//     cout<<tmp[0]<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std;
// string reverseWord(string S){
//     string ans = "";
//     string res = "";
//     for(int i = 0 ;i<S.length();i++){
//         if(S[i] == '.'){
//             ans = res + ans;
//             ans = S[i] + ans;
//             res = "";
//         }
//         else{
//             res += S[i];
//         }
        
//     }
//     ans = res + ans;
//     return ans;
// }

// int main(){
//     string S = "hello.Prgrammers.How.are.you";
//     cout<< reverseWord(S);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// string capitalize(string S){
//     for(int i = 0 ;i< S.length();i++){
//         if(i==0){
//             S[i] = toupper(S[i]);
//         }
//         else if(S[i] == ' '){
//             S[i+1] = toupper(S[i+1]);
        
//             S[i-1] = tolower(S[i-1]);
//         }
//         else if(i==S.length()-1){
//             S[i] = tolower(S[i]);
//         }
        
//     }
//     cout<<S.length()<<endl;
//     return S;
// }

// string reverse(string S){
//     string s1 = "";
//     string s2 = "";
//     string s3 = "";
//     for(int i = S.length();i>=0;i--){
//         s1 = s1 + S[i];
//     }
//     for(int j =0 ;j<s1.length();j++){
//         if(s1[j]==' '){
//             s2 = s3+s2;
//             s2 = s1[j] + s2;
//             s3 = "";
//         }
//         else{
//             s3 += s1[j];
//         }
//     }
//     s2 = s3 + s2;
//     string s4 = "";
    
//     for(int k = 0; k < s2.length();k++){
//         if(k==0){
//             s2[k] = toupper(s2[k]);
//         }
//         else if(s2[k-1] == ' '){
//             s2[k] = toupper(s2[k]);
//             s2[k-2] = tolower(s2[k-2]);
//         }
//     }
//     cout<<capitalize(s2)<<endl;
//     return s2;
    
// }


// int main(){
//     string S = "hello prashant nfsdo";
//     cout<<reverse(S);
    
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// string capitalize(string S){
//     for(int i = 0 ;i< S.length();i++){
//         if(i==0){
//             S[i] = toupper(S[i]);
//         }
//         else if(S[i] == ' '){
//             S[i+1] = toupper(S[i+1]);
        
//             S[i-1] = tolower(S[i-1]);
//         }
//         else if(i==S.length()-1){
//             S[i] = tolower(S[i]);
//         }
        
//     }
//     cout<<S.length()<<endl;
//     return S;
// }
// int main(){
//     string S = "mY namE iS vikranT sharmA";
//     cout<< capitalize(S);
//     return 0;
// }
 
 
// program to check if a vowel is present in the string

// #include<bits/stdc++.h>
// #include <set>
// using namespace std;
// int checkVowel(string str){
//   string str1 = "aeiou";
//   unordered_set<char> cnt;
//   int count=0;
//   for(int i = 0 ;i<str1.length();i++){
//       for(int j=0;j<str.length();j++){
//           if(str1[i] == str[j] ){
//               cnt.insert(str[j]);
//           }
//       }
//   }
//   for (auto i : cnt) {
//         cout << i << ' ';
//         count++;
//     }
//   return count;
// }
// int main(){
//     string str;
//     cout<<"enter the string: ";
//     getline(cin, str);
//     cout<<str<<endl;
//     cout<<checkVowel(str);
//     return 0;
// }

// program to find the unique string

// #include<bits/stdc++.h>
// using namespace std;
// int distinctCharcters(string str){
//     set<char> dis;
//     for(int i = 0;i<str.length();i++){
//         dis.insert(str[i]);
//     }
//     cout<<"unique characters are"<<endl;
//     for(auto i: dis){
//         cout<<i;
//     }
//     return dis.size();
// }

// int main(){
//     string str;
//     cout<<"enter string:";
//     getline(cin,str);
//     cout<<str<<endl;
//     cout<<str.length()<<endl;
//     cout<<distinctCharcters(str);
// }

// to check prime number 

// #include<bits/stdc++.h>
// using namespace std;
//  bool primeCheck(int n){
//     if(n==1 || n<=0){
//         return false;
//     }
//     if(n==2){
//         return true;
//     }
//     for(int i = 2; i<= n/2 ;i++){
//       if(n%i==0 ){
//           return false;
//       }
//     }
//   return true; 
// }

// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     cout<<primeCheck(n);
//     return 0;
// }

// to print prime number upto n;

// #include<bits/stdc++.h>
// using namespace std;
// bool primeRange(int n){
//     if(n==1 || n<=0){
//         return false;
//     }
//     for(int i =2 ;i<=n/2;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int n;
//     cout<<"Enter Range upto which prime number is to be printed: "<<endl;
//     cin>>n;
//     for(int i = 1 ;i<=n;i++){
//       if( primeRange(i)){
//           cout<<i<<" ";
//       }
//     }
// }

//factorial of a number

// #include<bits/stdc++.h>
// using namespace std;
// int factorial(int n){
//     if(n<0){
//         cout<<"No factorial";
//     }
//     if (n==1){
//         return 1;
//     }
//     return n*factorial(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<factorial(n);
//     return 0;
// }

//factoril using iterative funtions

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     int fact=1;
//     cin>>n;
//     for(int i=n;i>=1;i--){
//         fact=fact*i;
//     }
//     cout<<fact;
// }

// pallindrome string 
// #include<bits/stdc++.h>
// using namespace std;
// void checkPallindrome(string s){
//     int count = 0;
//     int k = s.length();
//     for(int i = 0;i<k/2+1 ;i++){
//         if(s[i] != s[k-i-1]){
//             count += 1;
//         }
        
//     }
//     if (count ==0){
//         cout<<"pallindrome";
//     }
//     else{
//         cout<<"Not pallindrome";
//     }
//     cout<<count<<endl;
//     cout<<k;
// }
// int main(){
//     string s;
//     getline(cin,s);
//     checkPallindrome(s);
//     return 0;
// }