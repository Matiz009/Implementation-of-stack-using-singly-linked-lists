#include <iostream>
using namespace std;

struct node {
   int data;
   struct node *next;
};

struct node* top = NULL;

void push(int value) {
   struct node* new_node = new node;
   new_node->data = value;
   new_node->next = top;
   top = new_node;
}

void pop() {
   if(top==NULL)
   cout<<"Stack is empty"<<"\n";
   else{
      cout<<"The popped element is "<< top->data <<"\n";
      top = top->next;
   }
}

void display(){
   struct node* pointer;
   if(top==NULL)
   cout<<"Stack is empty"<<"\n";
   else {
      pointer = top;
      cout<<"Stack elements are: ";
      while (pointer != NULL) {
         cout<< pointer->data <<" ";
         pointer = pointer->next;
      }
   }
   cout<<"\n";
}
int main() {
   int choice, value;
   cout<<"1: Push in stack"<<"\n";
   cout<<"2: Pop from stack"<<"\n";
   cout<<"3: Display stack"<<"\n";
   cout<<"4: Exit"<<"\n";
   do {
      cout<<"Enter choice: \t";
      cin>>choice;
      switch(choice) {
         case 1: {
            cout<<"Enter value to be pushed:"<<"\n";
            cin>>value;
            push(value);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<"\n";
            break;
         }
         default: {
            cout<<"Invalid input"<<"\n";
         }
      }
   }while(choice!=4);
   return 0;
}

