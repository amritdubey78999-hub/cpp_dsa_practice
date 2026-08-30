

#include<iostream>
#include<iomanip>//iska use fractional part nikalne ke liye kiya gya hai 
using namespace std;
int main(){

  /*
    //HalfOFINteger find
    int x;//question m bol rha hai int hi lena hai 
    cin>>x;
    float y=(float)x;//typecasting karenge yhan
    cout<<y/2;
  */
   
  /*
  //finding Fractional part
  float x;
  cin>>x;// x=9.1
  int y=(int)x;// y=9 :ak y nam k integere ka dabba banaye usme x ko integer banakar dale
  if(y<0) y=y-1;
  float z = (float)y;//ab z float ka dabba banyenge taki integer ko float me change kar ske tabhi to aage solve kar payenge
  x= x-z;//ab fractional part ke liye x me se z ko minus karenge
  cout<<fixed<<setprecision(1)<<x; //ab shi hai ab chalega code

 // ab shi hai minus aur plus dono ke liye 1.6 ka fraction part=0.6
 // -1.3 ka fractional part=0.7
 //-1.8 ka fractional part=0.2
 */

 //finding output
 int num1;
 int p=5 ,q=10;
 p += q -= p;
 cout<<p<<" "<<q<<endl;
 return 0;//output 10  5 aayega.



}