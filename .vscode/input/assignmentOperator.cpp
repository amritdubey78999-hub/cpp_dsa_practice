/*
int x=7;
x+=8//x=x+8

x -= 10;//x=x-10
x /= 5;//x = x/5
*/


//predect the output
#include<iostream>
using namespace std;
int main(){
    /*
    bool p= false;
    bool q= false;
    bool r= true;
    cout<<(p==q==r);//(p==q)=(r) => (false==false)==true => true==true => 1
    //yah ak comparison operator hai jo check karega ki p ki value q ke barabar hai ya nahi.
    //Since p ki value false hai aur q ki value bhi false hai, output 1 aayega.
    //ab 1 == r hoga to r ki value to true hi hai yani ki 1 isliye output bhi 1 hi aayega yani true.
    */

    int p=1;
    int q=2;
    int r=2;
    cout<<((p==q)==r);//if(p==q)==(r) ->(0)==(2) -> 0
    cout<<(p==(q==r));//if(p)=(q==r) -> (1)==(2==2)-> (1)==(1) -> 1 
}