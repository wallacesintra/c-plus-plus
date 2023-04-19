#include <iostream>
using namespace std;
class methods2{
  private: int a,b;
  public : void Get();
  public :int add(int x,int y);
};
void methods2 :: Get(){
  cout <<"Enter 2 numbers"<<endl;
  cin >>a>>b;
  cout <<"sum is "<<add(a,b)<<endl;
}
int methods2 ::add(int x,int y){
  return x+y;
}
int main(){
  /* code */
  methods2 me;
  me.Get();
  return 0;
}
