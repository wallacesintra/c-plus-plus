/*
classifying  methods by how they are related
member methods - belong to a class
---manager methods- manage class : constructor (allocate memory): same name as the class
                                                                  invokes automatically.
                                                                  have parameters
                                                                  first to execute
                                                                  not mandatory
                                                                  no return type


                                   destructor(deallocate memory): same name as class but preceded by a tilde
                                                                  invokes automatically
                                                                  no parameter
                                                                  last to execute
                                                                  not mandatory
                                                                  no return type
---accessor methods(getters)- get values
---mutator methods(setters) - used to modify data members values
---auxillary methods - friend method used to access protected and private
                        friend methods are auxillary methods
                                          access private/protected data members
                                          use keyword friend
                                          no need for visibility
                                          its parameters are objects
*/

//friends methods.
#include <iostream>
using namespace std;
class safari{
  private: int l,w;
  friend void get(safari s);
  public : void compute(int a, int b){
    cout << "product is :"<<a*b<<endl;
  }
  public : safari(){
    cout << "initializing ...."<< endl;
  }
  public : ~safari(){
    cout << "deleting ....." << '\n';
  }
};

void get(safari s){
  cout <<"enter 2 numbers"<< endl;
  cin>>s.l>>s.w;
  s.compute(s.l,s.w);
}

int main(){
  safari sa;
  get(sa);
  return 0;
}
