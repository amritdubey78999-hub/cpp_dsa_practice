#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter the problem :";
    cin>>a>>op>>b;
  /*
    if(op=='+'){
        cout<<"The sum is :"<<a+b;
    }
    if(op=='-'){
        cout<<"The difference is :"<<a-b;
    }
    if(op=='*'){
        cout<<"The product is :"<<a*b;
    }
    if(op=='/'){
        cout<<"The quotient is :"<<a/b;
    }
}
    */

    switch(op){
        case '+':
            cout<<"The sum is :"<<a+b;
            break;
        case '-':
            cout<<"The difference is :"<<a-b;
            break;
        case '*':
            cout<<"The product is :"<<a*b;
            break;
        case '/':
            cout<<"The quotient is :"<<a/b;
            break;
        default:
            cout<<"Invalid operator";
    }
}