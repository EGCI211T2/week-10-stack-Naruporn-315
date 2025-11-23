
#ifndef stack_h
#define stack_h
#include "node.h"

class Stack {
	NodePtr top;
	int size;
public:
    void push(int);
    int pop();
    Stack();
    ~Stack();
};

void Stack::push(int x){
  NodePtr new_node =new NODE(x);
  if(new_node){
        new_node->set_next(top); //connect to the previous top
        top=new_node;            //change top
        size++;                  //increase size
   }
   else{
       cout<<"Stack push error: memory allocation failed"<<endl;
   }
}

int Stack::pop(){
        NodePtr t=top;
        if(t!=NULL){
        int value;
        value=t->get_value();
        top=t->get_next();      // move top to the next one
         delete t;
        --size;               //decrease the size 
        return value;
        }
        cout<<"Empty stack"<<endl;
        return 0;          //be careful of the empty stack!!!
    }

Stack::Stack(){
    top=NULL;
    size=0;
}

Stack::~Stack(){
    //delete all remaning stack (i.e. pop all) 
    cout<<"Clear the stack"<<endl;
    int n=size;
    while(n>0){
        pop();
        --n;
    }
}

#endif
