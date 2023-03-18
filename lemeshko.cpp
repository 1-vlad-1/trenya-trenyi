#include <iostream>
using namespace std;

int main() {
  int n, fact = 1;
  cout << "Enter a positive integer: ";
  cin >> n;
  
  for(int i = 1; i <= n; i++) {
    fact *= i;
  }
  //первый коммит в мою ветку
  cout << "Factorial of " << n << " is " << fact << endl;
  return 0;
}
