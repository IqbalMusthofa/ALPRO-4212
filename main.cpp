#include <iostream>

using namespace std;

void hitungRataRata(int arr[], int n) {
   float rata_rata, total = 0;

   for(int i = 0; i < n; i++) {
      total += arr[i];
   }

   rata_rata = total / n;

   cout << "Rata-rata dari total jumlah array adalah: " << rata_rata << endl;
}

int main() {
   int arr[4];

   for(int i = 0; i < 4; i++) {
      cout << "Masukkan angka ke-" << i+1 << ": ";
      cin >> arr[i];
   }

   hitungRataRata(arr, 4);

    return 0;
}


