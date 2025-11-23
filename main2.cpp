#include<iostream>
using namespace std;

#include "stack.h"

int main(int argc, char **argv){
    Stack s;
    int i,j;
   
/*
  Exercise 2
 printf("Checking the parentheses in argv arguments\n");

   */

    for(i=0;i<argc;i++){
     for(j=0;j<strlen(argv[i]);j++){
       Stack s; //change node to char-->****
        if(argv[i]=='[' || argv[i][j]=='{')  
          s.push(argv[i][j]);
        else {
          if (argv[i]==']' || argv[i][j]=='}')   {
              char x=s.pop();
            
        }
     }
    }
  }


   return 0;
}
