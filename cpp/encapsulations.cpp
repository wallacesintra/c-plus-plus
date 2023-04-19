/*
encapsulation
its the process of packaging data and operation into class and then providing a controlled access.
the controlled acces is done using public methods and/or friend methods.

class x{
private: int a,b; //hidden
friend void get(X x);
}
void get(X x){
cout <<"enter 2 numbers"<< endl;
cin >>x.a>>x.b;
}

abstraction : ability to provide only necessary info. about an encapsulation/program
a)data abstraction
b)method abstraction
c)class abstraction
*/
