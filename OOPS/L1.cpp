#include<iostream>
#include<string>
using namespace std;

class student{ 
     //user defined data type and create blue print for object
  private: // accesss modifier
  string name;
  int age;
  int roll_number;
  string grade;

  // function getter and setter 
  public:
  void setname(string s)
  {
    if(s.size() == 0){
        cout<< "invalid string: ";
        return;
    }
    name = s;
  }
  void setage(int a){
    if(age <0 || age > 100){
        cout<< "invalid age: ";
        return;
    }
    age = a;
  }

  void setroll_number (int r)
  {
    roll_number = r;
  }
  void setgrade(string s)
  {
    grade = s;
  }

  void getname()
  {
    cout << name << endl;
  }
  void getage()
  {
    cout << age << endl;
  }

  int getroll_number() 
  {
    return roll_number;
  }

  string get_grade(int pin){
   if(pin == 123)
   return grade;

   return " "; 
  }

};

int main(){
   student s1;
//    s1.name = "astha";
//    s1.age = 10;
//    s1.roll_number = 2183;
//    s1.grade = "A+";

//    cout << s1.age<< " ";

 s1.setname("");
 s1.setage(10);
 s1.setroll_number(123);
 s1.setgrade("A+");

 s1.getname();
 s1.getage();

 cout<< s1.getroll_number()<< endl;
 cout << s1.get_grade(123)<< endl;




    return 0;
}

// object --> it is an entity that exist in real world and has state and behaviour 