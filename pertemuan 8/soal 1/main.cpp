//NAMA  : IQBAL MUSTHOFA
//NIM   : A11.2022.14458
//KELAS : A11.4212

#include <iostream>
#include <vector>

using namespace std;
void cari_genap_terkecil(const std::vector <int>&deret){
    int nilai_genap_terkecil= -1;
    int index_genap_terkecil= -1;

    for(int i=0; i<deret.size(); i++){
        if(deret[i]%2==0){
            if(nilai_genap_terkecil==-1 || deret[i] < nilai_genap_terkecil){
                nilai_genap_terkecil=deret[i];
                index_genap_terkecil=i;
            }
        }
    }
    if(index_genap_terkecil==-1){
        std::cout << "Tidak ada nilai genap dalam deret" <<std::endl;
    }else{
        std::cout << "Nilai genap terkecil:" << nilai_genap_terkecil << std::endl;
        std::cout << "Indeks nilai genap terkecil:" << index_genap_terkecil << std::endl;
    }
}

int main()
{
   std::vector <int> deret = {6,7,4,3,2};

   cari_genap_terkecil(deret);
    return 0;
}
