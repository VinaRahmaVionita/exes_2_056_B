#include <iostream>
using namespace std;


// fungsi untuk melakukan binary search pada array
int binarySearch(int vinarahma[], int vina, int vionita, int target) {
    while (vina <= vionita) { // selama vina masih lebih kecil atau sama dengan vionita
        int mid = vina + (vionita - vina) / 2; // hitung indeks tengah atau rata rata 

        if (vinarahma[mid] == target) // jika angka pada indeks tengah sama dengan target
            return mid; // kembalikan indeks tengah

        if (vinarahma[mid] < target) // jika angka pada indeks tengah lebih kecil dari target
            vina = mid + 1; // perbarui vina menjadi indeks setelah mid
        else
            vionita = mid - 1; // perbarui vionita menjadi indeks sebelum mid
    }
    return -1; // jika target tidak ditemukan, kembalikan -1
}

int main() {
    const int N = 10; // ukuran array
    const int maxVina = 88; // nilai maksimal elemen

    int vinarahma[N]; // array vinarahma dengan ukuran N

    // isi array dengan nilai acak dari 1 hingga maxElemen
    for (int i = 0; i < N; i++) {
        vinarahma[i] = rand() % maxVina + 1;
    }
    // urutkan array
    (vinarahma, vinarahma + N);

    // tampilkan isi array
    cout << "Isi array: ";
    for (int i = 0; i < N; i++) {
        cout << vinarahma[i] << " ";
    }

    // minta pengguna untuk memasukkan nilai target
    int target;
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> target;

    // panggil fungsi binarySearch
    int result = binarySearch(vinarahma, 0, N - 1, target);
    if (result != -1)
        cout << "Angka " << target << " ditemukan di indeks ke-" << result << endl;
    else
        cout << "Angka " << target << " Not Found in Array." << endl;

    return 0;
}

