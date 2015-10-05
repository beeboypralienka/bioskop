# include <iostream>
using namespace std;
 
class Person
{
        private:
            string nama, alamat;
            
        public:
            void addPerson()
            {
                cout << "Input Nama    : ";
                getline(cin, nama);                
                cout << "Input Alamat  : ";
                getline(cin, alamat);
            }
            void showPerson()
            {
            cout <<     "Nama    : " << nama <<endl;
            cout <<     "Alamat  : " << alamat <<endl;
            }
};

