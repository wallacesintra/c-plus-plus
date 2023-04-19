/*
structure
created using struct keyword
has 2 types of members (data and/or operations)
members are public by default
can be instantrated
can be inherited.

write a c++ program to create structure plot whose private data members are plotNo,location,size,prize
public member methods are Get(), read(), display()
*/
#include <iostream>
using namespace std;
struct Plot{
  private : int plotNo;
  float size,price;
  string location;

  public : void Get() {
    cout<< "Enter Plot number: " <<endl;
    cin >> plotNo;
    cout << "Enter plot size and prize: " <<endl;
    cin >> size >> price;
    cout << "Enter the location: " << endl;
    cin >>location;
    Display(plotNo,size,price,location);
  }
  public : void Display(int p, float s,float pr,string st){
    cout << "Details: "<< endl;
    cout << p <<":"<< s <<":"<< pr <<":"<< st << endl;
  }
};

int main(){
  Plot pl;
  pl.Get();
  return 0;
}
