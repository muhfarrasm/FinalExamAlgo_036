#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
public:
	const int MAX_MAHASISWA = 100;
	int mahasiswa_array[100];
	int NIM;
	string nama;
	int tahunMasuk;
	int jumlahMahasiswa = 0;

	void tambahMahasiswa()
	{
		cout << "Maukkan Nim" << endl;
		int nim;
		cin >> nim;
		cout << "Maukkan Nama" << endl;
		int name;
		cin >> name;
		cout << "Maukkan tahun masuk" << endl;
		int tahunmasuk;
		cin >> tahunmasuk;

	}
	void tampilkanSemuaMahasiswa()
	{

	}
	
	void Binarysearch(int low, int high)
	{
		int n, mid, item;
		while (true) {
			cout << "\nMasukkan NIM yang dicari : ";
			cin >> item;

		}

		low = 0;
		high = n - 1;
		mid = (low + high) / 2;

		while (array[mid] == item)
		{
			if (array[mid] == item)
			{
				cout << "\n" << item << "\nfound" << endl;
			}
			else
			{
				cout << "\n Exit" << endl;
			}

		}

		while (item < array[mid])
		{
			high = mid - 1;
		}

		while (item > array[mid])
		{
			high = mid + 1;
		}


		if (low <= high)
		{
			mid = (low + high) / 2;
		}

		else
		{
			cout << "\n Not Found" << endl;
		}

	}




	void q_sort(int low, int high) {

		int pivot, i, j;
		if (low > high) {															// langkah 1 
			return;
		}
		//partition the list into two parts
		//one containing elements less that or equal to pivot 
		//outhor containing elements greather than pivot

		pivot = arr[low];																// langkah 2

		i = low + 1;																	// langkah 3
		j = high;																		// langkah 4	

		while (i <= j) {																// langkah 10
			//search for an element greater than pivot
			while ((arr[i] <= pivot) && (i <= high)) {									// langkah 5
				i++;
				cmp_count++;

			}
			cmp_count++;
			//search for an element less than or equal to pivot
			while ((arr[j] > pivot) && (j >= low)) {									// langkah 7
				j--;																	// langkah 8
				cmp_count++;
			}
			cmp_count++;
			// langkah 9
			if (i < j) //if the greater element is on the left of the element
			{
				//swap the element at index i with element at index j
				swap(i, j);
				mov_count++;
			}
		}
		//j now containt the index of the last element in the sorted list
		if (low < j)																	// langkah 11
		{
			//move the pivot to its correct position in the list
			swap(low, j);
			mov_count++;
		}
		//sort the list on the left of pivot using quick sort
		q_sort(low, j - 1);																// langkah 12

		//sort the list on the right of pivot using quick sort
		q_sort(j + 1, high);														// langkah 13

	}

	
	
};


int main() {
	int pilihan;
	mahasiswa mhs;
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
			mhs.tambahMahasiswa();
			break;
		case 2:
			mhs.tampilkanSemuaMahasiswa();
			break;
		case 3:
			mhs.Binarysearch();
			break;
		case 4:
			mhs.q_sort();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}

//2. quick short dan binary search
//3. Bedanya Algoritma Stack dan Queue
// Stack 
// a. Hanya memiliki satu akses yaitu TOP
// b. Hanya bisa menambah dan mengambil, tidak bisa mencari
// c. Last in Frist Out
// Queue
// a. Memiliki 2 akses front & rear
// b. First In First Out
//4. Waktu yang tepat untuk menggunakan stack, yaitu saat kita menginginkan data yang dimasukan terakhir menjadi data yang akan keluar pertama
// Contohnya seperti saat kita menggunakan fitur undo redo.
//5. a. Kedalamnnya adalah 5 
// b. Preorder
// penjelasan inti dari metode preorder adalah 1) Visit root, 2) Mengunjungi anak kiri, 3) Mengunjungi anak kanan
// jadi urutannya 25,20,10,5,1,8,12,15,22,36,30,28,40,38,48,45,50