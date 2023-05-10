#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim(); //deklarasi method
};

void mahasiswa::showNim() {           //implementasi method diluar class
	cout << "No Induk = " << nim << endl;
}

int main()
{
	mahasiswa mhs{ 1 };          //object mhs
	mhs.showNim();               //member Acces Operator

	mahasiswa& ref = mhs;
	ref.nim = 2;
	mhs.showNim();

	mahasiswa* pMhs = &mhs;
	pMhs->nim = 3;
	mhs.showNim();
	system("pause");
	return 0;
}