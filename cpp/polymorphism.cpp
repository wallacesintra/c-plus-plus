/*
polymorphism - ability of an object to exist in different forms.

type of polymorphism
1) subtype - a base class pointer is used to access a derived class
     --inclusion/indirectional

class rectangle{
   protected : float length;
   public : rectangle(){
        length = 4.7;
 }
   public : virtual void print() = 0;
};
class triangle : public rectangle{
    public : void print(){
      cout << length<< endl;
  }
};

int main(){
 rectangle *r;
 triangle t;
 r = &t;
 r -> print();
 return 0;
}

2) parametric  : its implemented using method overriding or template function.
*/
/*
//subtype
#include <iostream>
using namespace std;
class rectangle{
   protected : float length;
   public : rectangle(){
        length = 4.7;
 }
   public : virtual void print() = 0;
};
class triangle : public rectangle{
    public : void print(){
      cout << length<< endl;
  }
};

int main(){
 rectangle *r;
 triangle t;
 r = &t;
 r -> print();
 return 0;
}*/

//write c++ program that use a template to read 2 no. then determine whether they are odd or even
#include <iostream>
using namespace std;

template < class t >
t calc (t a, t b){
  if (a % 2 != 0 && b %2 != 0){
    cout << a << " and " << b << " are odd "<< endl;
  }
  else if (a %2 == 0 && b % 2 == 0){
    cout << a << " and " << b << " are even "<< endl;
  }
  else if (a %2 != 0 && b % 2 == 0){
    cout << a << " is odd but " << b << " is even "<< endl;
  }
  else if (a %2 == 0 && b % 2 != 0){
    cout << a << "is even but " << b << " is odd "<< endl;
  }
  else{
    cout << "invalid input"<< endl;
  }
}
int main(){
  int x,y,z;
  z = 0;
  while (z == 0){
    cout << "enter 2numbers "<< endl;
    cin >> x >>y;
    calc(x,y);
    cout << "enter 0 to continue or any number to exit" << endl;
    cin >> z;
  }
  std::cout << "thank for using this app" << endl;
  return 0;
}
