#include <iostream>
using namespace std;

struct mahasiswa
{
	string NIM;
	string nama;
	string alamat;
	int umur;
};

int main() {
	mahasiswa mhs1, mhs2;

	mhs1.NIM = "2020220100";
	mhs1.nama = "ardian mulya";
	mhs1.alamat = "wonosbo";
	mhs1.umur = 28;

	cout << "Masukan NIM : ";
	cin >> mhs2.NIM;
	cout << "Masukan Nama: ";
	cin >> mhs2.nama;
	cout << "Masukan alamat : ";
	cin >> mhs2.alamat;
	cout << "Masukan Umur : ";
	cin >> mhs2.umur;

	cout << "/nNim = " << mhs1.NIM;
	cout << "/nNama = " << mhs1.nama;
	cout << "/nalamat = " << mhs1.alamat;
	cout << "/numur = " << mhs1.umur;


}