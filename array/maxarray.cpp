#include <iostream>
using  namespace std;
int main ()
{
    int arr[8]= {9,2,11,13,3,4,8,7};
    int max= arr[0];
  for (int i=1; i<=7; i++)
    {
      if (arr[i]>max)
        max=arr[i];
    }
  cout << max;

    return 0;
}