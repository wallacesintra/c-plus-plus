/*
pointers : user defined data type that stores address of another variable.

uses: change value of a variable indirectly
      implement polymorphism.

int x;
int *p;
p = &x;

*  - indirectional operator
-> - dereference operator
&  - reference operator
*/

#include <iostream>
using namespace std;

class Room{
  private : float size;
  public : void Get(){
    cout << "Enter size of the room: "<<endl;
    cin >> size;
    modify(size);
  }
  public : void modify(float s){
    float *p;
    p = &s;
    cout << "Enter some value to modify the size: "<<endl;
    cin >> *p;
    cout << "The room size is "<< s <<endl;
  }
};
int main(){
  Room r;
  r.Get();
  return 0;
}
