/*
classifying methods in C++ :
--based on how method is created--
built-in method : its predefined and its stored in C++ library
user defined method :

--based on how method is defined--
method overload : same class but different signature
                  compile time polymorphism(early binding)
        ***different data type for parameter
        ***different no of parameter
        ***different orders of parameters.
method override : process of redefining a method in the subclass
  the signature remains the same , only the behavor will change
  its used to implement runtime polymorphism.(late binding)
--based on how methods is called--
-based on relationship with the class

*/
#include <iostream>
#include <math.h>
using namespace std;
class methods3{
  private: float x,e;
  public: void Get(){
    cout<<"Enter the base : ";
    cin >> x;
    cout <<"enter the exponent : ";
    cin >> e;
  cout <<x<<"^"<<e<<" = "<<pow(x,e)<<endl;
  }
};
int main(){
  methods3 me;
  me.Get();
  return 0;
}
