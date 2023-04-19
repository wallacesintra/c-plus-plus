#include <iostream>
using namespace std;

int main() {
  int waitingpass,bus,emptyseats;
  cout << "Enter the waiting passengers:";
  cin >> waitingpass;
  bus = 50;
  emptyseats = waitingpass % bus;
  cout << "empty seats:" << emptyseats << endl;

  return 0;
}
