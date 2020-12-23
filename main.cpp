/* 
Written By: Christian Vargas
*/

// This program implements basic stack ADT operations using a singly linked list.
// This functions in a similar manner as if you were to make a stack of plates. In this scenario, adding or removing is only possible at the top.

// main file
#include <iostream>
#include "ADTStackLList.h"
using std::cout;
using std::cin;
using std::endl;

// The main() function here gives the user a choice on whether they want to PUSH, POP, or DISPLAY the stack. 
// The proper fucntion is called here using switch. Similarly, if the user enters an invalid choice, then it is made known to the user.
// There is also an option to EXIT the progam. 

int main(){

int item = 1, UserChoice;

stack<int> myStack;

 while (item==1)
 {
  cout <<"MENU for Stack Operations"<< endl;
  cout <<"*************************" << endl;
  cout <<" [1] PUSH (insert) " << endl;
  cout <<" [2] POP (remove)  " << endl;
  cout <<" [3] DISPLAY stack " << endl;
  cout <<" [4] EXIT          " << endl;

    cout << "Enter your MENU choice: " << endl;
    cin >> UserChoice; // Get user's choice from input

    switch(UserChoice) {
      case 1: {
          myStack.push();
          cout<<endl;
          break;
         }
      case 2: {
          myStack.pop();
          break;
         }
      case 3: {
          myStack.display();
          break;
         }
      case 4: {
          cout<<"\nYou have exited the program." << endl;
          item = 0;
          break;
         }
      default: {
            cout<<"\nError! Invalid choice entered."<<endl;
         }
      }
      cout<<"\n";
   }
      return 0;
}
