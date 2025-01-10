#include<iostream>
#include<string>
using namespace std;

class customer{
    // Contsructor--> fn that invoked automatically at the time of object creation, name of constructor should be same as class name dont have any return type, used to intialize value.
    // public:
    string name;
    int account_num;
    int balance;

    public:
    // default constructor
    customer()
    {
        name = "astha";
        account_num = 5;
        balance = 1000000;
        // cout<< "customer is called " << endl;
    }

    void display()
    {
        cout<< name << " " << account_num << " " << balance << endl;
    }

   /* // parameterised constructor ----:
    customer(string name, int account_num, int balance){
       this-> name = name;
       this-> account_num = account_num;
       this-> balance = balance;
    }
    */
   
   //constructor overloading
    customer(string a, int b){
        name = a;
        account_num = 50; // changed its value 
    }

    //Inline constructor 
   inline customer(string a, int b, int c): name(a), account_num(b), balance(c){

    }

};


int main(){

    customer A1;
    customer A2("astha", 123, 1000000000); // file open
    customer A3("asthaa", 25);
    A1.display();
    A2.display();
    A3.display();
}