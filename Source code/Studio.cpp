# include <iostream>
using namespace std;
 
class Studio
{
        private:
            string namaStudio;
            
        public:
            void addStudio()
            {
                cout<<"Input Nama Studio : ";
                getline(cin, namaStudio);                               
            }
            void showStudio()
            {
            	cout<<"Nama Studio : " << namaStudio <<endl;            
            }
};
