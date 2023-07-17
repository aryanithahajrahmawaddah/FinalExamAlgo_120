#include <iostream>
#include <string>
using namespace std;

class StackArray {
private:
	string stack_Array[100];
	int top;
public:
	const int MAX_MAHASISWA = 100;
};
	

int NIM[MAX_MAHASISWA;
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];

int jumlahMahasiswa = 0;


void tambahMahasiswa(
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Jurusan : ";
		getline(cin, jurusan[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();
		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
);

void tampilkanSemuaMahasiswa(;
{
	if (ROOT == NULL)
	{
		cout << "Tree is empty" << endl;
		return;
	}
	if (ptr != NULL)
	{
		inorder(ptr->leftchild);
		cout << ptr->info << " ";
		inorder(ptr->rightchild)
	}
}


void algorithmacariMahasiswaByNIM();
{
	currentNode = ROOT;
	parent = NULL;
	while ((currentNode != NULL) && (currentNode->info != element))
	{
		parent == currentNode;
		if (element < ccurrentNode->info)
			currentNode = currentNode->leftchild;
		else
			currentNode = currentNode->rightchild;
	}
}

void algorithmaSortByTahunMasuk();
int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			cout << "Enter a word: ";
			string word;
			cin >> word;
			break;
		case 2:
			
			break;
		case 3:
			s.display();
			break;
		case 4:
			return;
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
			break;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}






//2. stack, binarysearchtree
//3.Algoritma stack merupakan kumpulan item data yang dapat diakses hanya pada satu ujung, terdapat diatas, Item dapat disisipkan dan dihapus dalam tumpukan hanya dibagian atas, Item terakhir yang dimasukkan kedalam tumpukan adalah item pertama yang akan dihapus, Disebut struktur data Last in First Out, sedangkan 
//	Algoritma Queue Merupakan suatu kumpulan data yang penambahan elemennya hanya dilakukan pada satu ujung (disebut dengan sisi belakang atau rear), dan penghapusan atau pengambilan elemen dilakukan lewat ujung yang lain(disebut juga dengan sisi depan atau front)
//4. Algoritma stack digunakan saat sudah ditentukkan jumlah maksimum element
//5.a. 5 kedalaman
//b. yang benar adalah preorder
// in	:	left subtree
// 			visit root
//			right subtree	
// preorder	: visit root
// 			  left subtree
//			  right subtree
// post		: left subtree
//			  right subtree
//			  visit root