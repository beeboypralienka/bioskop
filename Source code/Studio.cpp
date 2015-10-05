# include <iostream>
using namespace std;
 
class Studio
{
        private:
            string namaStudio;
            
        public:
            void addStudio()
            {
                cout<<"Input Kode Studio [1/2] : ";
                getline(cin, namaStudio);                               
            }
            
            string getStudio(){
            	return namaStudio;
			}
			
            void showStudio()
            {            	            					
				if(namaStudio == "1"){            		
            		cout<<"Studio yang dipilih : Studio Alexa" <<endl;            	
				}else{
					cout<<"Studio yang dipilih : Studio Delux" <<endl;            	
				}
            	         
            }
};
