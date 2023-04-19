#include <iostream>
using namespace std;

int main() {
  int marks;
  cout << "Enter Marks:";
  cin >> marks;


if (marks >= 50) {
  cout << "you have passed" << endl;
  if (marks==100) {
    cout <<"Perfect" << endl;
  }
  else{
    cout << "You Failed!" << endl;
  }
}
  return 0;
}
