#include <iostream>
#include <math.h>
using namespace std;
class tv{
  protected: int a,b;
  public : void Get(){
    cout <<"enter quantity and price"<<endl;
    cin >>a>>b;
    calc(a,b);
  }
public: void calc(int p,int q){
  cout <<"total price is "<<p*q<<endl;
}
};
class lg: public tv{
 public: void Get(){
   cout<<"enter quantity and price"<<endl;
   cin >>a>>b;
   calc(a,b);
 }
public:void calc(int x,int y){
  cout <<"sum is "<< x+y <<endl;
}
};
int main(){
  lg l;
  l.Get();
  tv t;
  t.Get();
  return 0;
}
