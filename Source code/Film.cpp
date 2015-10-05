# include <iostream>
using namespace std;
 
class Film
{
        private:
            string namaFilm;
            
        public:
            void addFilm()
            {
                cout<<"Input Nama Film : ";
                getline(cin, namaFilm);                               
            }
            void showFilm()
            {
            	cout<<"Nama Film : " << namaFilm <<endl;            
            }
};
