#include <iostream>
#include "Person.cpp"
using namespace std;
 
class Karyawan : public Person
{
        private:
            string jabatan;
            
        public:
            void addKaryawan()
            {
                Person::addPerson();
                cout << "Input Jabatan : ";
                getline(cin, jabatan);                                
            }
            void showKaryawan()
            {
            	Person::showPerson();
                cout << "Jabatan : "<< jabatan<<endl;                                
            }
};
