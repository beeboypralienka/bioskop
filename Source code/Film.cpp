# include <iostream>
# include "Film.h"
using namespace std;
                     
            void Film::addFilm()
            {            	
                cout<<"Input Kode Film [A/B]     : ";                
                getline(cin, namaFilm);          
            }
            
            string Film::getFilm(){
            	return namaFilm;
			}
			
            void Film::showFilm()
            {            	
            	if(namaFilm == "A"){   					         		
            		cout<<"Film yang dipilih   : Batman" <<endl;            	
				}else{
					cout<<"Film yang dipilih   : Robin" <<endl;            	
				}
            	
            }
