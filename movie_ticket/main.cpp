#include<iostream>
#include<fstream>
#include "movie.h"
using namespace std;

int main(){
	    Movie_reservation m1;
	    int a, b,c;
	    cout<<"\n\t\t\t\t   Rezervasyon yapmak istediginiz tarihi yazin (dd/mm/yy):"<<endl;
	    cout<<"\n\t\t\t\t ";
	    cin>>a;
	    cout<<"\t\t\t\t ";
	    cin>>b;
	    cout<<"\t\t\t\t ";
	    cin>>c;
		Tarih dt(a, b,c );
		cout<<"\n\t\t\t\t Rezervasyon tarihiniz : "<<dt<<" olarak ayarlanmistir."<<endl<<endl;
	    m1.Reservation();
}
