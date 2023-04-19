/*
inheritance
 it is creating a new class to extend the functionality of some existing class.

the new class so created is called child/sub/derived class

the existing class being extended is called base/parent/super class.
the new class will extend the parent class by :
     --adding new methods and attributes
     --override parent class atttribute and/or methods
     --hide some attributes and/or behavior.

syntax;
class derivedClass : accessspecifier Baseclass{

};
class - keyword
derivedClass - identify for inheritance
accessspecifier - private|protected|public
Baseclass - identifier for base class.

access specifier for inheritance:
private - all inherited members immediately become private
protected - all public & protected members immediately become protected in the drived class.
public - the public inherited members&protected inherited member also become public and protected in the derived class
         respectively

class kenya{
 public : int x;
 protected : float y;
 private : char q;
};

class mp : private kenya{
//y is now private
// x is the now private
// q cant be accessed
};

class mca : public mp{
// no x, y
};
class kenya{
 public : int x;
 protected : float y;
 private : char q;
};

class mp : protected kenya{
//y is now protected
// x is now protected
// q cant be accessed
};

class mca : public mp{
// no x, y
};


type of inheritance
 1) single inheritance  : one derived class from one parent class
  consider class cloth and class shirt.
class shirt : public cloth{...};

2) Multilevel inheritance : inherites from a class which is a subclass of another class
    consider class shirt is derived from class cloth with is derived from fabric
class fabric{...};
class cloth : public fabric{...};
class shirt : public cloth{ ... };

3) Multiple inheritance : a derived class can inherite from two/more base classes.
   class customer inherite from bank and account
  class bank{ ... };
  class account{ ... };
  class customer : public bank, protected account{ ... };

4) Hierarchial inheritance : two/more derived class inherited from the same parent class.
   computer ,TV, printers are all electronic devices.
class devices{ ... };
class TV : public devices{ ... };
class computer : protected devices{ ... };
class printer : private devices{ ... };





*/
