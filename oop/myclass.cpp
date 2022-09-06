#include <iostream>
#include <stdio.h>
using namespace std;

class MyClass {
private:
  void printPrivate() { cout << "Im private method"; }

  void privateDefault() {
    cout << "By default all methods and properties is private";
  }

  int valueEncapsulation;

public:
  int myNum;
  string myString;
  MyClass() { cout << "Im the constructor"; }
  MyClass(int _myNum, string _myString) {
    myNum = _myNum;
    myString = _myString;
  }
  void print() { cout << myNum << " - " << myString; }
  void setValueEncapsulation(int v) {
    valueEncapsulation = v;
  }
  int getValueEncapsulation() {
    return valueEncapsulation;
  }
};

int main() {
  MyClass myObj;
  myObj.myNum = 10;
  myObj.myString = "asdasd";

  cout << myObj.myNum << " - " << myObj.myString;
  myObj.print();

  MyClass myOtherClass(25, "Im created using constructor and overload");
  myOtherClass.print();

  return 0;
}
