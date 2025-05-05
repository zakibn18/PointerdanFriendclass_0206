#include <iostream>
using namespace std;

class mahasiswa
{
  public :
    int nim;
    void showNim()
    {
      cout << "No Induk : " << nim << endl;
    }
};

int main()
{

  mahasiswa mhs;
  mhs.nim = 2024;
  mhs.showNim();

  mahasiswa &refMhs = mhs;  // pointer deferance refMhs
  refMhs.nim = 2;           // member access
  mhs.showNim();
}