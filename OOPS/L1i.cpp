#include<iostream>
using namespace std;

class a
{
    char b; // if it is empty then its size will be 1 because In C++, the size of an empty class is at least 1 byte because the compiler assigns it a unique address in memory.

    int c;//its size give 8 bytes instead of 5 becuase of padding it reads 2 times of cycle [c, , , ,| b, b, b, b]; comprises the memory for faster procesing 

    /* the data type take place according to its multiple like 1 byte will be in place of multiple of 1, 4 byte is in multple of 4 [0, 1, 2, 3,4, 5....]*/

    char d;

/* char c;
    int a;
    char b;  the answer will be 12 bytes instead of 9 because it is rule that the largest data type value should divide the answer otherwise nearest will be answer 9/4byte != 0 so by increasing 12/4 == 0 so it will be answer----> order or proper allignemnt is important means large data type should be written first
    char c;
    int b;
    char d;
    double e;  answer is 24 indexing start from 0
    c p p p b b b b d p p p p p p p e e e e e e e e--. p for padding  */

    /* Dynamic memory allocation in heap
  class student{ 
 public: 
  string name;
  int age;
  int roll_number;
  string grade;
  };
  int main(){
  student *S = new Student; // making an pointer 
  (*S).name = "astha";
  (*S).age = 10;
  (*S).roll_number = 21;
  (*S).grade = "A++";

  cout<< S->name<< " ";
  }
    */


};

int main(){
    a obj;
    cout<< sizeof(obj)<< " ";
}