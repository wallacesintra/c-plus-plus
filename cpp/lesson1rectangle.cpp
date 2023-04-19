#include <iostream>
using namespace std;

class Rectangle{
  private : float length,width;
  public : void Read(){
    cout << "Enter length and width"<<endl;
    cin >> length >> width;
    calculate(length,width);
  }
  public : void calculate(float l,float w){
    float perimeter,area;
    area = l*w;
    perimeter = 2*(l+w);
    cout << "area is: " << area << " and the perimeter is :" << perimeter<< endl;
  }

};
int main(){
  Rectangle Re;
  Re.Read();
  return 0;
}
