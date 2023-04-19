/*
---for loop---
test the condition before execution(entry controlled/sentinel controlled)
no.of iteration is known in advance
break is allowed(force exit)
to skip use continue
for (ini;test;update){
 task;
}

---while loop---
test the condition before execution(entry controlled/sentinel controlled)
no.of iteration is unknown in advance
break is allowed
to skip use continue
ini;
while (test){
 task;
 update;
}

---do loop---
test after execution(exit controlled)
no.of iteration is unknown in advance
break is allowed
to skip use continue
ini;
do {
 task;
 update;
}while (test);
*/

/*
write a program that prompts the user to enter 2 integers and calculate their sum
the program should when the user choose to do so
*/
#include <iostream>
using namespace std;
class Arithmetic {
  private : int x1,x2;
  public : void Loop(){
    int i,sum,n;
    i = 0;
    while (i == 0) {
      cout <<"Enter numbers: " <<endl;
      cin >> x1 >> x2;
      sum = x1 + x2;
      cout << "Sum = " << sum << endl;
      cout << "Enter 0 to proceed or any other number to exit" <<endl;
      cin >> i;
    }
    cout << "Thank you for using my app" << endl;
  }
};
int main(){
  Arithmetic A;
  A.Loop();
  return 0;
}
