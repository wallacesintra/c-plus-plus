/* program control structures
 constructs:
 sequence - top to bottom(default)
 selection - based on a condition (if and switch)
 loops - tasks are performed repeatedly
 if statement:
 ---single if - 1 condition tested. if true the ifblock execute otherwise
 the program will execute.
 if(test){
  block
}
---if...else - 1 condition if true, the if block execute otherwise the else ifblock
execute.
if(test){
 block 1;
}
else {
 block 2;
}
---nested if - 2/more conditions tested. 1st condition is tested if true execute if block,
if not test condition using elseif if all conditions are execute the else block.
if (test1) {
  block1
}
else if (test2){
 block2
 ....
 else{
 default block
}
}
 */
 // problem: develop an application to read users response in a survey then display the appropriate
 //remark
/*
0-4 : strongly agree
5-7 : agree
8-10 : strongly disagree
11-13 : disagree
14 and above : neither agree or disagree
*/
 #include <iostream>
 using namespace std;
 class survey {
   private : int response;
   public : void Get() {
     cout << "Enter your response " << endl;
     cin >> response;
     Reply (response);
    }
   void Reply(int r){
     if (r >= 0 && r <= 4){
       cout << "strongly agree " <<endl;
     }
     else if (r >= 5 && r <= 7){
       cout << "Agree" << endl;
     }
     else if (r >= 8 && r <= 10){
       cout << "Strongly disagree" << endl;
     }
     else if (r >= 11 && r <= 13){
       cout << "Disagree" << endl;
     }
     else if (r >= 14){
       cout << "neither agree nor disagree " <<endl;
     }
     else{
       cout << "wrong response" <<endl;
     }
   }
 };
 int main(){
   survey s;
   s.Get();
   return 0;
 }
