#include <iostream>
using namespace std;

struct AlamatDetail
{
	string desa;
	string kota;
};

struct Mahasiswa
{
	string NIM;
	string nama;
	AlamatDetail alamat;
	int umur;
};

int main() {
	Mahasiswa mhs;

	cout << "Masukan NIM : ";
	cin >> mhs.NIM;
	cout << "Masukan Nama: ";
	cin >> mhs.nama;
	cout << "Masukan alamat : ";
	cout << "\n\tMasukan Desa : ";
	cin >> mhs.alamat.desa;
	cout << "Masukan kota : ";
	cin >> mhs.alamat.kota;
	cout << "Masukan Umur : ";
	cin >> mhs.umur;
	
	cout << "\n\nNIM = " << mhs.NIM;
	cout << "\nNama = " << mhs.nama;
	cout << "\nAlamat = " << mhs.alamat.desa;
	cout << "\nAlamat = " << mhs.alamat.kota;
	cout << "\nUmur = " << mhs.umur;
}