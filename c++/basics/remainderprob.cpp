#include<iostream>
using namespace std;
int main(){
    int a= 16;// a means dividend
    int b= 3;//b is divisor
    //int q= a/b;//q is quotient
    //a=(b*q)+r; // r is remainder
    //int r= a-(b*q);//r is remainder
    //cout<<r;
    int r= a%b;//r is remainder when a is divided by b 
    cout<<r;//output 1 aayega kyunki 16 ko 3 se divide karne par remainder 1 aata hai
}