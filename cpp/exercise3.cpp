#include<iostream>
using namespace std;

class rectangle
{
private: float length, width, area,perimeter;
public: Get()
{
  cout <<"enter the length:"<<endl;
  cin >> length;
  cout <<"enter the width:" <<endl;
  cin >> width;
  calc(length,width);
}

  public: void calc(float l, float w){
    float a = l*w;
    float p = 2(l+w);
    cout >> "area: "+a+"perimeter: "+p >>endl;
  }

};

int main() {
  /* code */
  rectangle re;
  re.Get();
  return 0;
}
