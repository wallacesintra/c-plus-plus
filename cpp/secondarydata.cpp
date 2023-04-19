/*
Derived data/secondary data:
-array - homogenous element stored in contiguos
-structure - derived type that consist a collection of numbers(data & operations) under one identifier.
-union - derived type that consist of members that share location.
-enum - derived type used to create a set of members represented as numbers
-typedef - derived type used to create a synonymn for built in type(alias)

--- ARRAY ---
used : grouping related variables
       make it easier to access

type arrayname[size];
int x[5]; //static array, fixed memory
dynamic array can adjust its memory allocation

int x[4]; one dimension array 4
int x[3][2]; two dimension array 3*2
int x[3][3][2]; three dimension array 3*3*2

accessed using indexs from 0 to n-1; where n is the size.

write a program to store scores for 10 students in an array then display the corresponding grade using



*/
#include <iostream>
using namespace std;

class Exam{
  private : int s[10],i;
            char T[10];
  public : void Get(){
    for (i=0;i<10;i++){
      cout << "Enter element at "<< i <<endl;
      cin >> s[i];
    }
    Award(s);
  }
  public : void Award(int X[]){
    cout << "Grading the students" <<endl;
    for (i = 0;i < 10;i++){
      if (X[i] >= 0 && X[i] <= 39){
        T[i] = 'E';
      }
      else if (X[i] >= 40 && X[i] <= 49){
        T[i] = 'D';
      }
      else if (X[i] >= 50 && X[i] <= 59){
        T[i] = 'C';
      }
      else if (X[i] >= 60 && X[i] <= 69){
        T[i] = 'B';
      }
      else if (X[i] >= 70 && X[i] <= 100){
        T[i] = 'A';
      }
      else {
        T[i] = 'F';
      }
    }
      cout << "Performance" <<endl;
      for (i = 0;i <= 9;i++){
        cout << s[i] << ":\t" <<T[i] <<endl;
      }
    
  }
};
int main() {
Exam ex;
ex.Get();
}
