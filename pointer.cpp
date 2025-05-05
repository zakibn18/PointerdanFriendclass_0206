#include <iostream>
using namespace std;

int main()
{
  int a = 10;
  int b = 6;
  int y = 20;
  int *c = &a;
  cout << "Alamat memmori : " << c << endl;
  cout << "Nilai dari  C : " << *c << endl;
  c = &y;
  cout << "Alamat memori : " << c << endl;
  cout << "Nilai dari C : " << *c << endl;

  int &d = b;
}