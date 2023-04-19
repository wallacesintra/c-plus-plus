
#include <iostream>
using namespace std;
const float C = 3.0E+08;
class Speed {
  private : float time;
  public : void Get() {
    /* code */
    cout <<"Enter time taken by the particle"<< endl;
    cin >> time;
    cout << "The distance covered is" << calc(time);

  }
  float calc(float t){
    float d;
    d = C * t;
    return d;
  }
};
int main(){
  Speed sp;
  sp.Get();
  return 0;
}
