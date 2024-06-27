#include <iostream>
using namespace std;
int main() {
  int marks[10] = {95, 88, 32, 13, 76, 54, 90, 13, 89, 31};
  for(int i=0; i<9; i++)
    {
      if(marks[i]< 35)
        cout << i << endl;
    }
return 0;
}