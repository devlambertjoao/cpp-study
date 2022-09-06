#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ofstream MyFile("filename.txt");
  MyFile << "I'm writing into the file";
  MyFile.close();

  // Read the file
  string fileText;
  ifstream MyReadFile("filename.txt");
  while (getline (MyReadFile, fileText)) {
    cout << fileText;
  }

  MyReadFile.close();
};
