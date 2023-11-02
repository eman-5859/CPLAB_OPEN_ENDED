#include <iostream>
using namespace std;
int main()
{
  int choice;
    cout<<"If you want to find prime numbers in a range press 1 else press 0 for one specific number"<<endl;
  cin >> choice;
  if(choice == 0) {
    int num;
    cout << "Enter the value of num :" << endl;
    cin >> num;
    int i = 2;
    while (i < num) {
        if (num % i == 0) {
            cout << "Number is not prime. " << endl;
            break;
        }
            i++;
    }
    if (i == num) {
        cout << " Number is prime. " << endl;
    }
  } else {
    int range, num;
    cout << "Enter the value of range :" << endl;
    cin >> range;
    for(int j = 2; j < range; j++){
      num = j;
      int i = 2;
      while (i < num) {
          if (num % i == 0) {
              break;
          }
              i++;
      }
      if (i == num) {
          cout << num << " " << endl;
      }
    }
  }
  return 0;
}