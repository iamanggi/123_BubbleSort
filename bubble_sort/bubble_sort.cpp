#include <iostream>
using namespace std;


int a[20];			// deklarasi array a dengan ukuran 20 
int n;				// deklarasi variabel n untuk menyimpan banyaknya elemen pada array 

void input() {		// prosedur untuk input 
	while (true) {	// looping 
		cout << "masukan banyaknya elemen pada array : ";	// output ke layar
		cin >> n;		// input dari pengguna 
		if (n <= 20)	// jika n kurang dari atau sama dengan 20
			break;		// keluar dari loop
		else {			// jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen. \n";		// output ke layar
		}
	}
	cout << endl;							// output baris kosong 
	cout << "===============" << endl;		// output ke layar 
	cout << "masukan elemen Array" << endl;	// output ke layar 
	cout << "===============" << endl;		// output ke layar 

	for (int i = 0; i < n; i++) {		// looping dengan i dimulai dari 0 hingga n-1
		cout << "data ke- " << (i + 1) << ":";	// output ke layar 
		cin >> a[i];		// input dari pengguna
	}
}
void BubbleSortArray() {		// prosedur untuk mengurutkan array dengan metode bubble sort
	for (int i = 1; i < n; i++) {		// looping dengan i dimulai dari 1 hingga n-1
		for (int j = 1; j < n - 1; j++) {	// looping dengan j dimulai dari 0 hingga n-1
			if (a[j] > a[j + 1]) {			// jika nilai pada a[j] lebih besar dari a [j + 1]
				int temp = a[j];			// simpan nilai a[j] ke variabel sementara temp
				a[j] = a[j + 1];			// assign nilai a[j+1] ke a[j]
				a[j + 1] = temp;			// assign nilai temp ke a[j+1]
			}
		}
	}

}

void unsorted() {
	cout << endl;					// output baris kosong 
	cout << "================================" << endl;	// output ke layar
	cout << "elemen Array yang belum tersusun" << endl;	// output ke layar
	cout << "================================" << endl; // output ke layar
	for (int j = 0; j < n; j++) {						// looping dengan j dimulai dari 0 hingga n-1 
		cout << a[j] << endl;							// output ke layar 
	}
	cout << endl;
}

void display() {					// prosedur untuk menampilkan hasil 
	cout << endl;					// output baris kosong 
	cout << "================================" << endl;	// output ke layar
	cout << "elemen Array yang tersusun" << endl;	// output ke layar
	cout << "================================" << endl; // output ke layar
	for (int j = 0; j < n; j++) {						// looping dengan j dimulai dari 0 hingga n-1 
		cout << a[j] << endl;							// output ke layar 
	}
	cout << endl;				// output baris kosong 
}

int main() {
	input();				//memanggil prosedur read()
	unsorted();				// memanggil prosedur unsorted()
	BubbleSortArray();		// memanggil prosedur bubblesortarray()
	display();				// memanggil prosedur display()

	return 0;
}