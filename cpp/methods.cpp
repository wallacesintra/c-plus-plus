/*
class
member methods
-describes the behavor.
part of a method/function/procedure/routine

returntype name (parameters){
   body
}
returntype- specify type of value to return bool,char,int,float,double
            if method doesnt return then returnity is void
name - valid function identifier.
parameters - variables declared in the method definition
body - group of executable statements

method declaration - specify prototype
method signature - consist of name of parameters.
                  part of prototype
method definition - specifying what the method will do:-
                      -return prototype
                      -name
                      -parameter(optional)
                      -body

consider a program in  which a class is defined outside the class

*/
#include <iostream>
using namespace std;
class Methods {
  public : void show();
};

void Methods :: show(){
  cout << "methods "<<endl;
}
int main(){
  Methods m;
  m.show();
  return 0;
}
