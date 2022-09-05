#include <cctype>
#include <cmath>
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

  cout << "Get user input using cin, and get cin output to variable using >> "
          "(cin >> variable)";
  string yourName;
  cout << "Tell me your name: ";
  cin >> yourName;
  cout << "Your name is: " << yourName;

  cout << "Using namespaces: ";
  cout << "namespace::class";
  std::string myStdString = "Declared using namespace std";
  std::cout << "Printed using namespace std";

  cout << "Import cmath using the header #include <cmath>";
  cout << "cmath is for use sqrt(), round(), and log()";

  cout << "Max and min for find the minor or max between two numbers";
  cout << max(2, 18);
  cout << min(5, 10);

  cout << "Using cmath: ";
  cout << "Sqrt Input: 144 , round Input: 2.8, log Input: 2";
  cout << sqrt(144.0);
  cout << round(2.8);
  cout << log(2);

  cout << "---Using if and else";

  string isAmOrPm;

  cout << "Tell me the period of the day: (AM/PM)";
  cin >> isAmOrPm;

  cout << "Using if and else ";
  if (isAmOrPm == "AM") {
    cout << "Go launch!";
  } else {
    cout << "Go dinner!";
  }

  cout << "Using ternary";
  const string isAmOrPmResult =
      (isAmOrPm == "AM") ? "Go launch!" : "Go dinner!";

  cout << isAmOrPmResult;

  cout << "Using switch case";

  cout << "Tell me a day number: (1,2,3,4,5,6,7)";
  int inputedDay;
  cin >> inputedDay;

  switch (inputedDay) {
  case 1:
    cout << "Sunday";
    break;
  case 2:
    cout << "Monday";
    break;
  case 3:
    cout << "Tuesday";
    break;
  case 4:
    cout << "Wednesday";
    break;
  case 5:
    cout << "Thursday";
    break;
  case 6:
    cout << "Friday";
    break;
  case 7:
    cout << "Saturday";
    break;
  default:
    cout << "Its not a day :(";
    break;
  }

  cout << "Using while loop";
  int loopsCount = 0;
  const int maxLoops = 4;

  while (loopsCount <= maxLoops) {
    cout << loopsCount;
    loopsCount++;
  }

  cout << "Using do while loop";
  do {
    cout << loopsCount;
    loopsCount++;
  } while (loopsCount <= maxLoops);

  cout << "For statement";

  for (int i = 0; i < 10; i++) {
    cout << "Counting.. " << i;
  }

  cout << "For break";
  for (int i = 0; i < 10; i++) {
    if (i == 5) {
      cout << "Finishing this for loop using break";
      break;
    }
    cout << "Counting.. " << i;
  }

  cout << "For continue";
  for (int i = 0; i < 10; i++) {
    if (i == 5) {
      cout << "Just jumping this loop using continue, lets for next";
      continue;
    }
    cout << "Counting.. " << i;
  }

  cout << "Arrays...";
  string myCars[4] = {"Volvo", "BMW", "Chevrolet", "Mercedes"};
  cout << "You can create without omiting the size";
  string myCarsTwo[] = {"Volvo", "BMW", "Chevrolet", "Mercedes"};
  cout << "Printing myCars[2] -> ";
  cout << myCars[2];

  cout << "Changing myCars[2] to Dodge using myCars[2] = \"Dogdge\" ";
  myCars[2] = "Dodge";

  cout << "Printing myCars[2] -> ";
  cout << myCars[2];

  cout << "Using structures";
  struct {
    int id;
    string name;
  } myFirstStruct;

  myFirstStruct.id = 1;
  myFirstStruct.name = "My Struct 1";

  cout << "myFirstStruct: " << myFirstStruct.id << " - " << myFirstStruct.name;

  cout << "We can declare more than one variable at same struct";

  struct {
    int id;
    string name;
  } mySecondStruct, myThirdStruct;

  mySecondStruct.id = 2;
  mySecondStruct.name = "My Struct 2";
  myThirdStruct.id = 3;
  myThirdStruct.name = "My Struct 3";

  cout << "We can just declare the structure and declare a variable after...";

  struct myStructDataTypeName {
    int id;
    string name;
  };

  myStructDataTypeName structDeclared;

  cout << "Creating references";
  cout << "Just create a variable starting with &";
  const string favoriteMeal = "Pizza";
  const string &meal = favoriteMeal;

  cout << "favoriteMeal: " << favoriteMeal;
  cout << "meal: " << meal;

  cout << "cout << &meal should print hexadecimal memory address";
  cout << &meal;

  return 0;
}
