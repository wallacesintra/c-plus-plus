#include <iostream>
using namespace std;
class overloading{
  private : int a,b;
            float e,f;
  public : void Get(){
    cout <<"enter 2 whole numbers: "<<endl;
    cin >>a>>b;
    cout <<"enter 2 real numbers: "<<endl;
    cin >>e>>f;
    calc(a,b);
    calc(a,e);
    calc(e,f);
    calc(e,a);
  }
public: void calc(int x,int y){
  cout <<"product of whole numbers:"<<x*y<<endl;
}
public: void calc(float x,float y){
  cout <<"product of 2 real numbers:"<<x*y<<endl;
}
public: void calc(float x,int y){
  cout <<"product of real and int:"<<x*y<<endl;
}
public: void calc(int x,float y){
  cout <<"product of int then real: "<<x*y<<endl;
}
};
int main(){
  overloading ov;
  ov.Get();
  return 0;
}
