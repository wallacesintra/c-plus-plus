#include <iostream>
#include <string.h>
using namespaca std;
int main() {
	char arr[6][20] = {"programmer","developer","engineer","student","teacher","professor"};

	char name[25];
	int found = 0;
	cout <<"Who are you?";
	cin >> name;
	for (int i=0; i<6; i++){
	 if (!strcmp(name,arr[i]))
	 {
	 cout << "\n Congratulation!";
	 cout << "\n You are invited from codescracker.com";
	 found = 1;
	 break;
	 }
	 else
	 found ++;
	}
  if (found != 1){
    cout << "\n Sorry! \n You are not invited";
    cout << endl;
    return 0;
  }
}
