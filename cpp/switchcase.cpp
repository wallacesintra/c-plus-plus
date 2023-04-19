/*
- switch case - used when there are several conditions to test.
- some expression is evaluated its result compared with some discrete values(cases)
- if there is a match,some task is executed and the program will exit otherwise
next value is considered.
- if there is no match for any of the case value a default task is executed.

switch(expression){
   case value1:
   task 1;
   break;
   case value2:
   task2;
   break;
   ----
   default:
   task;
}
*/
// develop a C++ program for an elevator to be used in 4 floors storey building
// the user will key in the floor then the system displays a response
/*
0 - ground floors1
1 - first floor
2 - second floor
3 - third floor
4 - four floor
*/
#include <iostream>
using namespace std;
class Elevator{
  private : int response;
  public : void Read(){
    cout << "Enter the floor number:" << endl;
    cin >> response;
    display(response);
  }
  public : void display(int r) {
    /* code */
    switch (r) {
      case 0 :
      cout << "Ground Floor" <<endl;
      break;
      case 1 :
      cout << "First Floor" <<endl;
      break;
      case 2 :
      cout << "Second Floor" <<endl;
      break;
      case 3 :
      cout << "Third Floor" <<endl;
      break;
      case 4 :
      cout << "Fourth Floor" <<endl;
      break;
      default :
      cout << "Invalid input, please try again" <<endl;
    }
  }
};
int main(){
  Elevator E;
  E.Read();
  return 0;
}
