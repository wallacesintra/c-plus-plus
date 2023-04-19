//2.calling methods with arguments
/*#include <iostream>
using namespace std;

class caller2{
 private: int x;
 public: void get(){
   cout<<"enter no: "<<endl;
   cin>>x;
   update(x);//call
 }
public:void update(int a){
  a=a*5;
  cout<<"updated: "<<a<<endl;
}
};

int main() {
  caller2 c;
  c.get();
  return 0;
}*/

/*
//3.call and pass reference/address
-arguments

#include <iostream>
using namespace std;

class caller3{
 private: int x;
 public: void get(){
   cout<<"enter no: "<<endl;
   cin>>x;
   update(&x);//call
 }
public:void update(int *a){
  *a=*a*5;
  cout<<"updated: "<<a<<endl;
}
};

int main() {
  caller3 c;
  c.get();
  return 0;
}*/

/*
4.inline methods-the caller will receive a copy of the code from the method
inline method inline keyword must be used
              body shldn't be big.
              it shldn't be not recursive


#include <iostream>
using namespace std;

class caller3{
 private: int x;
 public: void get(){
   cout<<"enter no: "<<endl;
   cin>>x;
   update(&x);//call
 }
public:inline void update(int *a){
  *a=*a*5;
  cout<<"updated: "<<a<<endl;
}
};

int main() {
  caller3 c;
  c.get();
  return 0;
}*/

/*
recursive method - repetitive task
base condition ensure repetitive task is not repeated infinitely.
*/
#include <iostream>
using namespace std;
class caller4{
  private: int n;
  public: void get(){
    cout << "enter number" << '\n';
    cin >> n;
    cout <<n<<"! = "<<Fa(n)<<endl;
  }
public: int Fa(int x){
  if (x==0){
    return 1;
  }
  else{
    return x*Fa(x-1);
  }
}
};

int main(){
  caller4 c;
  c.get();
  return 0;
}
/*

*/
