# include <iostream>
using namespace std;
 
class Person
{
        private:
            string nama, alamat;
            
        public:
            void addPerson()
            {
                cout << endl << "Input Nama   : ";
                getline(cin, nama);                
                cout <<         "Input Alamat : ";
                getline(cin, alamat);
            }
            void showPerson()
            {
            cout << endl <<     "Nama   : " << nama;
            cout << endl <<     "Alamat : " << alamat;
            }
};

