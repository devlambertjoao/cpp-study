#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  try {
    throw 32;
  } catch (int myCode) {
    cout << "Error: " << myCode;
  }
}
