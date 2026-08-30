#include<iostream>
using namespace std;
int main(){
   // int x = 5,y= 2; (aise bhi likh skte dono variable ko ak hi line m )
   // cout<<x/y;//output 2 aayega kyuki 5 ko 2 se divide karne par quotient 2 aata hai
   float p,r,t,si;
   p=1000;//p is principal amount
    r=2.2;
    t=2;//t is time in years
    si=(p*r*t)/100;//si is simple interest calculated by using formula (p*r*t)/100
    cout<<si;//output 44 aayega kyuki (1000*2.2*2)/100 = 44
}