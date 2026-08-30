#include<iostream>
using namespace std;
int main(){
    //float x=7.1;
    //int y;
    //y=(int)x;
    //cout<<y;//output 7 aayega

    //char ch= 'A';
    //int x =(int)ch;// x->65
    //cout<<x;

    //char ch ='A';
    //cout<<(int)ch+100;//output 165 aayega kyonki cout automatic typecast kar dega usko

    //agr A ko 1 ,B ko 2 aur C ko 3 print karana hoto 
    char ch='J';//A ka ASCII value 65 hota h
    int x=(int)ch;//J ka ASCII value 74 hota hai jo ki int me change ho jayega 
    cout<<x-64;//chuki J alphabet 10th number p aata h isliye output minus hoke 10 hi aayega
}