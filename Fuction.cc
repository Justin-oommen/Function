#include "Funtion.h"
#include <iostream>

using std::cout;
using std::endl;

//Constuctor
Function::Function(const std::string& name){
  return name = name_;
}

//Destructor
Function::Function(){
  cout<<"~Function callled for Function"<< name_ << endl;
}

//print method
void Function::print(){
  cout<<"Function with name "<< name_ <<endl; 
}


