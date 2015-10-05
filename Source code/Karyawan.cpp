#include <iostream>
using namespace std;
 
class Karyawan
{
        private:
            string namaKaryawan;
            
        public:
            void addKaryawan()
            {                
                cout << "Input Nama Karyawan : ";
                getline(cin, namaKaryawan);                                
            }
            void showKaryawan()
            {            	
                cout << "Kasir : "<< namaKaryawan<<endl;                                
            }
};
