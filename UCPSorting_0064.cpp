//1. algoritma Bubble Sort bekerja dengan cara berulang kali serta menukar elemen elemen yang bersebelahan jika urutannya salah.

//2.  membandingkan dan menukar elemen yang berjauhan terlebih dahulu, kemudian secara bertahap mengurangi jarak antara elemen yang dibandingkan. langkah-langkah nya seperti berikut:
	 //a.Inisialisasi nilai interval (h), biasanya dimulai dengan besar array (n) dibagi 2.
	 //b.Buat sub-daftar untuk semua elemen yang berjarak h dan urutkan sub-daftar tersebut menggunakan pengurutan sisipan.
     //c.Kurangi nilai interval dengan membagi h dengan 2, dan ulangi proses pengurutan pada sub-daftar baru.
	 //d.Ulangi langkah 2 dan 3 sampai nilai h menjadi 1, yang berarti semua elemen sekarang berjarak 1 dan seluruh array diurutkan menggunakan pengurutan sisipan.
	 //Dengan cara ini, Shell Sort dapat mengurutkan elemen-elemen yang awalnya berjauhan, sehingga ketika intervalnya berkurang, elemen-elemen tersebut sudah terurut.

//3. algorithma yang tepat yaitu menggunakan algorithma Insertionsort, karena cara kerja algortihma insertionsort yang mengambil sebuah elemen dari larik dan menempatkannya pada posisi yang benar diantara elemen-elemen yang sudah diurutkan.

//4.

#include <iostream>
using namespace std;


int arr[64];
int n;

void input() { //procedur untuk input
	int d;
	while (true) {
		cout << "Masukan banyaknya elemen pada array : "; // output ke layar
		cin >> n;      // Input dari pengguna
		if (n <= 64)    // Jika n kurang dari atau sama dengan 20
			break;     // Keluar dari loop
		else {         // Jika n lebih dari 20 
			cout << "\nArray dapat mempunyai maksimal 2 elemen.\n"; // output ke layar
		}
	}
	cout << endl;
	cout << "================" << endl;
	cout << "Masukan nicknmae" << endl;
	cout << "================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << " : ";
		cin >> arr[i];
	}
}

void insertionsort()
{
	int i, temp, j;

	for (i = 1; i <= n - 1; i++)
	{
		temp = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = temp;


	}

}

void display() {
	cout << endl;
	cout << "=======================" << endl;
	cout << "NIM yang telah tersusun" << endl;
	cout << "=======================" << endl;
	for (int j = 0; j < n; j++) {
		cout << arr[j] << endl;
	}
	cout << endl;
	cout << endl;

}

int main() {
	input();
	insertionsort();
	display();
	system("pause");
	return 0;
}