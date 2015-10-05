# include <iostream>
using namespace std;
 
class Jadwal
{
        private:
            string tglMain, jamMain, hargaTiket;
            
        public:
            void addJadwal()
            {
                cout<<"Input Tanggal Main : ";
                getline(cin, tglMain);        
				cout<<"Input Jam Main : ";
                getline(cin, jamMain);   
				cout<<"Input Harga Tiket : ";
                getline(cin, hargaTiket);                     
            }
            void showJadwal()
            {
            	cout<<"Tanggal Main : " << tglMain <<endl;            
            	cout<<"Jam Main : " << jamMain <<endl;
            	cout<<"Harga Tiket : " << hargaTiket <<endl;
            }
};
