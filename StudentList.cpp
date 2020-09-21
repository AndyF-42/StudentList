#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

struct Student {
  char first[20];
  char last[20];
  int id;
  float gpa;
};

void addStudent();
void printStudents();
void deleteStudent();

int main() {

  vector<Student*> vPtr;

  vPtr.push_back(new Student);
  vPtr.push_back(new Student);

  vPtr[0].first = 
  
  
  char input[10]; 
  while (strcmp(input, "QUIT") != 0) {
    cin >> input;
    if (strcmp(input, "ADD") == 0) {
      addStudent();
    } else if (strcmp(input, "PRINT") == 0) {
      printStudents();
    } else if (strcmp(input, "DELETE") == 0) {
      deleteStudent();
    } else if (strcmp(input, "HELP") == 0) {
      cout << "Valid commands: ADD, PRINT, DELETE, HELP" << endl;
    } else if (strcmp(input, "QUIT") != 0) {
      cout << "Invalid command. Type HELP for list of valid commands." << endl;
    }
  }

  
}

void addStudent() {
  cout << "Student added." << endl;
}

void printStudents() {

  cout << "printed" << endl;
  
}

void deleteStudent() {
  cout << "Student deleted." << endl;
}
