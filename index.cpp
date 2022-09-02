#include <iostream>

using namespace std;

void printEmpty() { cout << "\n"; }

int main() {
  cout << "My CPP Program!";
  printEmpty();
  cout << "Tell me a number: ";
  int number;
  cin >> number;

  cout << "The number is: " << number;

  cout << "What you want to do (sum, minus)?";
  string action;
  cin >> action;

  int myNum = 0;
  float myFloat = 0.2;
  double myDouble = 0.5;
  char myLetter = 'C';
  string myText = "";
  bool myBoolean = true;

  string textToConcat = "CONCATINGGG!!!!";

  cout << "Concating strings make easier" << textToConcat << " WOW!";

  // Using multiple declared variables
  int x = 1, y = 5;

  // Constants and readonly properties
  const int myNumConstant = 10;
  // myNumConstant = 2;     error!

  const float PI = 3.14;

  // User input:
  int numberInput;
  cout << "Type a number:";
  cin >> numberInput;

  // float
  // Has precision of 6 or 7 digits
  //
  // double
  // Has precision of 15 digits
  //
  // When need to more precision, use double

  // Float point number can also be a scientific number
  float myScientifcFloat = 14e1;
  double myScientifcDouble = 54e2;

  cout << myScientifcFloat;
  cout << myScientifcDouble;

  bool myFunnyBoolean = true;
  bool mySadBoolean = false;

  cout << myFunnyBoolean; // Output 1
  cout << mySadBoolean;   // Output 0

  cout << "Addition: " << 10 + 10;
  cout << "Subtraction: " << 50 - 20;
  cout << "Multiplication: " << 2 * 8;
  cout << "Division: " << 10 / 2;
  cout << "Mod (Division Remainder): " << 10 % 5;
  cout << "Increment (++): " << ++x;
  cout << "Decrement (--): " << --x;

  int additionAssigment = 5;
  additionAssigment += 10;

  cout << "Operator | Example   | Same as";
  cout << "   +=    | x += 5    | x = x + 5";
  cout << "   -=    | x -= 5    | x = x - 5";
  cout << "   *=    | x *= 5    | x = x * 5";
  cout << "   /=    | x /= 5    | x = x / 5";
  cout << "   %=    | x %= 5    | x = x % 5";
  cout << "   &=    | x &= 5    | x = x & 5";
  cout << "   |=    | x |= 5    | x = x | 5";
  cout << "   ^=    | x ^= 5    | x = x ^ 5";
  cout << "   >>=   | x >>= 5   | x = x >> 5";
  cout << "   <<=   | x <<= 5   | x = x << 5";

  cout << "Comparison Operators";
  int myFirstValueToCompare = 5;
  int mySecondValueToCompare = 5;

  cout << "First value: " << myFirstValueToCompare;
  cout << "Second value: " << mySecondValueToCompare;

  cout << "Equal:                 "
       << (myFirstValueToCompare == mySecondValueToCompare);
  cout << "Not equal:             "
       << (myFirstValueToCompare != mySecondValueToCompare);
  cout << "Greater Than:          "
       << (myFirstValueToCompare > mySecondValueToCompare);
  cout << "Less Than:             "
       << (myFirstValueToCompare < mySecondValueToCompare);
  cout << "Greater than or equal: "
       << (myFirstValueToCompare >= mySecondValueToCompare);
  cout << "Less than or equal:    "
       << (myFirstValueToCompare <= mySecondValueToCompare);

  cout << "Logical Operators";
  cout << "And:         && -> "
       << (myFirstValueToCompare < 5 && mySecondValueToCompare < 10);
  cout << "Or:          || -> "
       << (myFirstValueToCompare < 5 || mySecondValueToCompare < 10);
  cout << "Logical Not: !  -> "
       << !(myFirstValueToCompare < 5 || mySecondValueToCompare < 10);

  cout << "Logical not reverse the boolean";

  cout << "String can be contact using +";

  string firstStringToConcatWithPlus = "aaaa";
  string secondStringToConcatWithPlus = "bbb";

  cout << firstStringToConcatWithPlus + secondStringToConcatWithPlus;

  cout << "For get string lenght we can use .size() or .lenght()";
  cout << ".size() is an alias for .lenght()";

  string stringToGetLengh = "asd";
  cout << "String lenght is (using .size()): " << stringToGetLengh.size();
  cout << "String lenght is (using .lenght()): " << stringToGetLengh.length();

  cout << "We can get a specific character using stringVariable[x]";
  string helloWorld = "Hello World!";
  cout << "String to use: " << helloWorld;
  cout << "Second character: " << helloWorld[1];
  cout << "Changing firt character to N... using helloWorld[0] = 'N';";
  cout << "Before Change: " << helloWorld;
  helloWorld[0] = 'N';
  cout << "After Change: " << helloWorld;

  cout << "Get user input using cin, and get cin output to variable using >> (cin >> variable)";
  string yourName;
  cout << "Tell me your name: ";
  cin >> yourName;
  cout << "Your name is: " << yourName;

  cout << "Using namespaces: ";
  cout << "namespace::class";
  std::string myStdString = "Declared using namespace std";
  std::cout << "Printed using namespace std";

      return 0;
}
