#include <iostream>
#include <cstdlib>
using std::cout;
using std::cin;
using std::endl;

// To implement a stack using singly linked list
template <class T>
class node
{
public:
  T data;
  node<T>*next;
};

template <class T>
class stack
{
private:
  T item;
  node<T>*top;

public:
  stack();// Constructor
  void push(); // To insert an item to the stack
  void pop(); // To remove an item from the stack
  void display(); // The display() function serves to diplay all of the elements in the stack.
};

// This constructor initliazes the stack
template <class T>
stack<T>::stack() {
    top = NULL;
  };

// This function inserts an item to the stack
template <class T>
void stack<T>::push() {
  int ValueChoice;
  node<T>* temp;
  temp = new node<T>;

  cout << "Enter an item to be pushed: ";
  cin >> ValueChoice;
  temp-> data = ValueChoice;
  temp-> next = NULL;

  if(top==NULL)
    top = temp;
    else{
      temp -> next = top;
      top = temp;
    }
  cout<<"\nPushed Successfully";
}

// This function pops the top item from the stack
template <class T>
void stack<T>::pop() {
  node<T>* temp;
  int ValueChoice;
  if (top == NULL) { //Checks to see if the stack is empty.
    cout << "\nThe stack is empty.\n";
    ValueChoice = -1;
  }

  else{
    temp = top;
    top = top-> next;
    ValueChoice = temp-> data;
    cout << "\n" << ValueChoice <<" is popped successfully"<<endl;
    temp -> next = NULL;
    delete temp;
  }
}

// This function serves to diplay all of the elements in the stack
template <class T>
void stack<T>::display() {
  node<T>* temp;
    temp = top;

  if (top == NULL) { //Checks to see if the stack is empty.
    cout << "\nThe stack is empty.\n";
  }

  else{
    cout << "\nElements in the stack are as follows: "  << endl;
    while (temp != NULL)
    {
        cout <<"|"<< temp->data <<"|"<<endl;
        temp = temp->next;
    }
  }
}