# include <iostream>
using namespace std;
 
class Person
{
        private:
            string nama, alamat;
            
        public:
            void addPerson()
            {
                cout << "Input Nama Karyawan : ";
                getline(cin, nama);                
                cout << "Input Alamat Karyawan : ";
                getline(cin, alamat);
            }
            void showPerson()
            {
            cout <<     "Nama Karyawan : " << nama <<endl;
            cout <<     "Alamat Karyawan : " << alamat <<endl;
            }
};

