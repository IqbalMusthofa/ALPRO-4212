#include <iostream>
using namespace std;

int main()
{
  cout << "Program C++ Penjumlahan Array" << endl;
  cout << "=============================" << endl;
  cout << endl;

  int input[100], arr_count, i, total;

  cout << "Input jumlah element array: ";
  cin >> arr_count;
  cout << endl;

  cout << "Input "<< arr_count << " angka: ";
  cout << endl;

  total = 0;
  for(i = 0; i < arr_count; i++){
    cout << "Angka ke-" << i+1 <<": ";
    cin >> input[i];
    total = total + input[i];
  }

  cout << endl;

  cout << "Total penjumlahan dari "<< arr_count <<
          " angka tersebut adalah: " << total << endl;

  return 0;
}
