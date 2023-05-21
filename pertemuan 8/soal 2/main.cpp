//NAMA  : IQBAL MUSTHOFA
//NIM   : A11.2022.14458
//KELAS : A11.4212

#include <iostream>
#include <vector>

using namespace std;
//Bubble Sort
void bubblesort(vector <int>&deret){
    int n =deret.size();
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(deret[j] < deret [j+1]){
                swap(deret[j],deret[j+1]);
            }
        }
    }
}
//Selection Sort
void selectionsort(vector <int>&deret){
    int n =deret.size();
    for(int i=0; i<n-1; i++){
        int maksindex=i;
        for(int j=i+1; j<n; j++){
            if(deret[j] >deret[maksindex]){
                maksindex=j;
            }
        }
        swap(deret[maksindex],deret[i]);
    }
}

int main(){
    vector <int> deret ={5,4,3,2,2,1,1};
    //Bubble Sort
    cout << "Hasil Bubble Sort : ";
    for(int nilai:deret){
        cout << nilai << "";
    }
    cout << endl;

    //Selection Sort
    cout << "Hasil Selection Sort : ";
    for(int nilai:deret){
        cout << nilai << "";
    }
    cout << endl;

    return 0;
}
