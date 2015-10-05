# include <iostream>
using namespace std;
 
class Film
{
        private:
            string namaFilm;
            
        public:
            void addFilm()
            {            	
                cout<<"Input Kode Film [A/B] : ";
                getline(cin, namaFilm);          
            }
            
            string getFilm(){
            	return namaFilm;
			}
			
            void showFilm()
            {            	
            	if(namaFilm == "A"){   					         		
            		cout<<"Film yang dipilih   : Batman" <<endl;            	
				}else{
					cout<<"Film yang dipilih   : Robin" <<endl;            	
				}
            	
            }
};
