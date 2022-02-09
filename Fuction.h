//Function.h
#ifndef Function_h
#define Funtion_h

#include<iostream>

class Function{

 public:
  Funtion();
  Funtion(const std::string& name);
  virtual ~Function();
  virtual double value(double x) const = 0;
  virtual double derivative(double x) const = 0;
  virtual double integrate(double xlow, double xhigh ) const = 0;
  virtual void print() const;
  virtual std::sting name() const{ return name_;}
  

 private:
  std::string name_;
};
