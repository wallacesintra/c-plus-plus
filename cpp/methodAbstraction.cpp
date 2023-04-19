/*
method abstraction - use a  method without any regard on its implementation details.
can be done through:
   method prototyping - declane method then implement its base.
   virtual methods - implementing in base class but overriden in a derived class.

   pure virtual method - virtual method equals to 0.

*/
 #include <iostream>
 using namespace std;
  class tirex{
    public : virtual void sound(/* arguments */)
    /*public : virtual void sound() = 0; pure virtual method*/

  };
  class movie : public tirex{
    public : void sound (){
      std::cout << "whinning" << endl;
    }
  };

  int main(){
    movie m;
    m.sound();
    return 0;
  }

  /*
  class abstraction - a class which has attend 1 pure virtual methods
    - such a class cannot be instantiated
    - however it can be inherited.
  */
