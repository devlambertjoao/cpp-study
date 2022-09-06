#include <cctype>
#include <cstdio>
#include <iostream>

using namespace std;

// Declarations
void myDeclaredFunction();
void print(string message);
void printd(string message = "No message bro!");
void printPerson(string name, int age);
void arraysOnParams(int numbers[5]);
void myFunctionOverload(int a, int b);
void myFunctionOverload(string a, string b);
int myFunctionOverload(double a, float b);


void myFirstFunction() {
  // Should be executed;
  cout << "Wow! I've called and exected! ";
  print("My message to print using cout");
}

// Returning values
string intToString(int num) {
  return to_string(num);
}

// Pass by reference
void swapNums(int &x, int &y) {
  int temp = x;
  x = y;
  y = temp;
}

void swapPassingReference() {
  int firstValue = 5;
  int secondValue = 10;

  cout << "Before swap: ";
  cout << "firstValue: " << firstValue;
  cout << "secondValue: " << secondValue;

  cout << "After swap: ";
  swapNums(firstValue, secondValue);
  cout << "firstValue: " << firstValue;
  cout << "secondValue: " << secondValue;
}

int main() {
  myFirstFunction();
  print("asdasd");
  printd();
  printd("now i have value");
  printPerson("Joao Lambert", 25);
  cout << intToString(25);
  printd(intToString(25));
  int myNumbers[5] = { 0, 1, 2, 3, 4 };
  arraysOnParams(myNumbers);

  swapPassingReference();

  return 0;
}

void myDeclaredFunction() { // Definition
  cout << "I can declare on top and use after the method calling";
}

void print(string message) { cout << message; }

void printd(string message) { cout << message; }

void printPerson(string name, int age) {
  const string toPrint = name + " - " + to_string(age);
  print(toPrint);
}

void arraysOnParams(int numbers[5]) {
  for(int index = 0; index < 5; index++) {
    cout << numbers[index];
  }
}
