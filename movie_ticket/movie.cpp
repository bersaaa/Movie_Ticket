#include "movie.h"


#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <process.h>
#include <time.h>

using namespace std;

Tarih::Tarih(int m, int d, int y)
{
    mo = m; da = d; yr = y;
}

ostream& operator<<(ostream& os, const Tarih& dt)
{
    os << dt.mo << '/' << dt.da << '/' << dt.yr;
    return os;
}


Movie_reservation::Movie_reservation()
{
}

Movie_reservation::Movie_reservation(string name[20],string tel_no[10],string e_mail_id[20],string adress[50],int purcase_ticket,string seat_no[10])
{
    this->isim[20]=isim[20];
	this->tel_no[10]=tel_no[10];
	this->e_mail_id[20]=e_mail_id[20];
	this->address[50]=adress[50];
	this->purcase_ticket=purcase_ticket;
	this->seat_no[10]=seat_no[10];
}

void Movie_reservation::Reservation()
{
	fstream genel;
	genel.open("Bilgiler.exe",ios::in|ios::out|ios::app|ios::ate);


	{time_t t = time(NULL);
	 tm* timePtr = localtime(&t);
	 genel << "Time of the computer presently:";
     genel << "seconds= " << timePtr->tm_sec << endl;
     genel << "minutes = " << timePtr->tm_min << endl;
     genel << "hours = " << timePtr->tm_hour << endl;
     genel << "day of month = " << timePtr->tm_mday << endl;
     genel << "month of year = " << timePtr->tm_mon << endl;
     genel << "year = " << timePtr->tm_year + 1900 << endl;
     genel << "weekday = " << timePtr->tm_wday << endl;
     genel << "day of year = " << timePtr->tm_yday << endl;
     genel << "daylight savings = " << timePtr->tm_isdst << endl;
     genel << endl<<endl<<endl;
    }

	int b;
	int ent;

	cout<<"\n\t\t\t ----------------------------------";
	cout<<"\n\t\t\t      Bilet Rezervasyon sistemi    ";
	cout<<"\n\t\t\t ----------------------------------";
	cout<<"\n\t\t\t\t       HOSGELDINIZ";
	cout<<"\n\n\t\t\t\t <1> BILET REZERVASYONU";
	cout<<"\n\t\t\t\t <2> BILET KESIMI";
	cout<<"\n\t\t\t\t <3> DTCard KAYIT";
	cout<<"\n\t\t\t\t <4> CIKIS \n\n";
	cout<<"\t\t\t\tLUTFEN SECIM YAPINIZ :"<<"\t";
	cin>>ent;
	char ans;

 do{

	  switch (ent){

		  case 1:
		      int a;
		      system("CLS");

		      cout<<"\n\n\t\t\t\tThe VIZYONDAKILER :";
			  cout<<"\n\n\t\t\t\t 1. Inception";
			  cout<<"\n\n\t\t\t\t 2. The Pianist";
		      cout<<"\n\n\t\t\t\t 3. Tenet";
			  cout<<"\n\n\t\t\t\t 4. Titanic";
		      cout<<"\n\n\t\t\t\t 5. Babam ve Oglum\n";
			  cout<<"\n\t\t\t\tEnter Lutfen seciniz :"<<"\t";
			  cin>>a;



			  switch(a){

			  	  case 1:

					system("CLS");
				    cout<<"\n\n\t\t\t\t Gosterim zamanlari: ";
					cout<<"\n\t\t\t\t 1. 08.00";
					cout<<"\n\t\t\t\t 2. 13.00";
					cout<<"\n\t\t\t\t 3. 14.50";
					cout<<"\n\t\t\t\t 4. 18.00";
					cout<<"\n\t\t\t\t 5. 21.00";
					cout<<"\n\t\t\t\t 6. 01.00 \n";
					cout<<"\n\n\t\t\t\t  Gosterim zamanini seciniz: ";
					cin>>b;

				    cout<<"\n\n\t\t\t\t Adinizi giriniz: ";
					cin >>isim[20];
					cout<<"\n\n\t\t\t\t Iletisim numaranizi giriniz: ";
					cin>>tel_no[10];
					select_seat();
					cout<<"\n\n\t\t\t\t Rezervasyon yapilacak bilet sayisini girin: ";

					cin>>purcase_ticket;
					pay(purcase_ticket);
					cout<<"\n\n\n\t\t\t\t Bilgileriniz: ";
					cout<<"\n\t\t\t\t Isim                   :"<<isim[20];
					cout<<"\n\t\t\t\t Tel No                 :"<<tel_no[10];


					cout<<"\n\t\t\t\t Gosterim zamanlari 	:";
					switch(b)
					{
						case 1:	cout<<"08.00";
							break;
						case 2:	cout<<"13.00";
							break;
						case 3:	cout<<"14.50";
							break;
						case 4:	cout<<"18.00";
							break;
						case 5:	cout<<"21.00";
							break;
						case 6:	cout<<"01.00";
							break;
					}

					genel<<" Film'in adi       :Inception"<<endl<<" Isim              :"<<isim[20]<<endl<<" Tel no            :"<<tel_no[10]<<endl<<" Gosterim zamani   :";
					switch(b)
					{
						case 1:	genel<<"08.00"<<endl;
							break;
						case 2:	genel<<"13.00"<<endl;
							break;
						case 3:	genel<<"14.50"<<endl;
							break;
						case 4:	genel<<"18.00"<<endl;
							break;
						case 5:	genel<<"21.00"<<endl;
							break;
						case 6:	genel<<"01.00"<<endl;
							break;
					}
					char ans;
					cout<<"\n\n\t\t\t\t Baska bir islem yapmak istiyor musunuz? (y/n)";
					cin>>ans;
					system("CLS");
					break;


				  case 2:

				    system("CLS");
				    cout<<"\n\n\t\t\t\t Gosterim zamanini seciniz: ";
					cout<<"\n\t\t\t\t 1. 08.00";
					cout<<"\n\t\t\t\t 2. 13.00";
					cout<<"\n\t\t\t\t 3. 14.50";
					cout<<"\n\t\t\t\t 4. 18.00";
					cout<<"\n\t\t\t\t 5. 21.00";
					cout<<"\n\t\t\t\t 6. 01.00 \n";
					cout<<"\n\n\t\t\t\t  Gosterim zamanini seciniz: ";
					cin>>b;

				    cout<<"\n\n\t\t\t\t Adinizi girin: ";
					cin >>isim[20];
					cout<<"\n\n\t\t\t\t Iletisim numaranizi giriniz: ";
					cin>>tel_no[10];
					select_seat();

					cout<<"\n\n\t\t\t\t Rezervasyon yapilacak bilet sayisini girin: ";

					cin>>purcase_ticket;
					pay(purcase_ticket);
					cout<<"\n\n\n\t\t\t\t Bilgileriniz: ";
					cout<<"\n\t\t\t\t Isim                   :"<<isim[20];
					cout<<"\n\t\t\t\t Tel No                 :"<<tel_no[10];


					cout<<"\n\t\t\t\t Gosterim zamanlari 	:";
					switch(b)
					{
						case 1:	cout<<"08.00";
							break;
						case 2:	cout<<"13.00";
							break;
						case 3:	cout<<"14.50";
							break;
						case 4:	cout<<"18.00";
							break;
						case 5:	cout<<"21.00";
							break;
						case 6:	cout<<"01.00";
							break;
					}

					genel<<" Film'in adi       :The Pianist"<<endl<<" Isim              :"<<isim[20]<<endl<<" Tel no            :"<<tel_no[10]<<endl<<" Gosterim zamani   :";
					switch(b)
					{
						case 1:	genel<<"08.00"<<endl;
							break;
						case 2:	genel<<"13.00"<<endl;
							break;
						case 3:	genel<<"14.50"<<endl;
							break;
						case 4:	genel<<"18.00"<<endl;
							break;
						case 5:	genel<<"21.00"<<endl;
							break;
						case 6:	genel<<"01.00"<<endl;
							break;
					}
					cout<<"\n\n\t\t\t\t Baska bir islem yapmak istiyor musunuz? (y/n)";
					cin>>ans;
					system("CLS");
					break;

				 case 3:
				    system("CLS");

					system("CLS");
				    cout<<"\n\n\t\t\t\t Gosterim zamanini seciniz: ";
					cout<<"\n\t\t\t\t 1. 08.00";
					cout<<"\n\t\t\t\t 2. 13.00";
					cout<<"\n\t\t\t\t 3. 14.50";
					cout<<"\n\t\t\t\t 4. 18.00";
					cout<<"\n\t\t\t\t 5. 21.00";
					cout<<"\n\t\t\t\t 6. 01.00 \n";
					cout<<"\n\n\t\t\t\t  Gosterim zamanini seciniz: ";
					cin>>b;

				    cout<<"\n\n\t\t\t\t Adinizi girin: ";
					cin >>isim[20];
					cout<<"\n\n\t\t\t\t Iletisim numaranizi giriniz: ";
					cin>>tel_no[10];
					select_seat();

					cout<<"\n\n\t\t\t\t Rezervasyon yapilacak bilet sayisini girin: ";

					cin>>purcase_ticket;
					pay(purcase_ticket);
					cout<<"\n\n\n\t\t\t\t Bilgileriniz: ";
		            cout<<"\n\t\t\t\t Isim                   :"<<isim[20];
					cout<<"\n\t\t\t\t Tel No                 :"<<tel_no[10];


					cout<<"\n\t\t\t\t Gosterim zamanlari 	:";
					switch(b)
					{
						case 1:	cout<<"08.00";
							break;
						case 2:	cout<<"13.00";
							break;
						case 3:	cout<<"14.50";
							break;
						case 4:	cout<<"18.00";
							break;
						case 5:	cout<<"21.00";
							break;
						case 6:	cout<<"01.00";
					    	break;
					}


				    genel<<" Film'in adi       :Tenet"<<endl<<" Isim              :"<<isim[20]<<endl<<" Tel no            :"<<tel_no[10]<<endl<<" Gosterim zamani 	 :";
					switch(b)
					{
						case 1:	genel<<"08.00"<<endl;
							break;
						case 2:	genel<<"13.00"<<endl;
							break;
						case 3:	genel<<"14.50"<<endl;
							break;
						case 4:	genel<<"18.00"<<endl;
							break;
						case 5:	genel<<"21.00"<<endl;
							break;
						case 6:	genel<<"01.00"<<endl;
							break;
					}
					cout<<"\n\n\t\t\t\t Baska bir islem yapmak istiyor musunuz? (y/n)";
					cin>>ans;
					system("CLS");
					break;

				 case 4:

					system("CLS");
				    cout<<"\n\n\t\t\t\t Gosterim zamanini seciniz: ";
					cout<<"\n\t\t\t\t 1. 08.00";
					cout<<"\n\t\t\t\t 2. 13.00";
					cout<<"\n\t\t\t\t 3. 14.50";
					cout<<"\n\t\t\t\t 4. 18.00";
					cout<<"\n\t\t\t\t 5. 21.00";
					cout<<"\n\t\t\t\t 6. 01.00 \n";
					cout<<"\n\n\t\t\t\t  Gosterim zamanini seciniz: ";
					cin>>b;

				    cout<<"\n\n\t\t\t\t Adinizi girin: ";
					cin >>isim[20];
					cout<<"\n\n\t\t\t\t Iletisim numaranizi giriniz: ";
					cin>>tel_no[10];
					select_seat();

					cout<<"\n\n\t\t\t\t Rezervasyon yapilacak bilet sayisini girin: ";

					cin>>purcase_ticket;
					pay(purcase_ticket);
					cout<<"\n\n\n\t\t\t\t Bilgileriniz: ";
					cout<<"\n\t\t\t\t Isim                   :"<<isim[20];
					cout<<"\n\t\t\t\t Tel No                 :"<<tel_no[10];


					cout<<"\n\t\t\t\t Gosterim zamanlari 	:";
					switch(b)
					{
						case 1:	cout<<"08.00";
							break;
						case 2:	cout<<"13.00";
							break;
						case 3:	cout<<"14.50";
							break;
						case 4:	cout<<"18.00";
							break;
						case 5:	cout<<"21.00";
							break;
						case 6:	cout<<"01.00";
							break;
						}

					genel<<" Film'in adi       :Titanic"<<endl<<" Isim              :"<<isim[20]<<endl<<" Tel no            :"<<tel_no[10]<<endl<<" Gosterim zamani   :";
					switch(b)
					{
						case 1:	genel<<"08.00"<<endl;
							break;
						case 2:	genel<<"13.00"<<endl;
							break;
						case 3:	genel<<"14.50"<<endl;
							break;
						case 4:	genel<<"18.00"<<endl;
							break;
						case 5:	genel<<"21.00"<<endl;
							break;
						case 6:	genel<<"01.00"<<endl;
							break;
					}
					cout<<"\n\n\t\t\t\t Baska bir islem yapmak istiyor musunuz? (y/n)";
					cin>>ans;
					system("CLS");
					break;
				  case 5:

					system("CLS");
				    cout<<"\n\n\t\t\t\t Gosterim zamanini seciniz: ";
					cout<<"\n\t\t\t\t 1. 08.00";
					cout<<"\n\t\t\t\t 2. 13.00";
					cout<<"\n\t\t\t\t 3. 14.50";
					cout<<"\n\t\t\t\t 4. 18.00";
					cout<<"\n\t\t\t\t 5. 21.00";
					cout<<"\n\t\t\t\t 6. 01.00 \n";
					cout<<"\n\n\t\t\t\t  Gosterim zamanini seciniz: ";
					cin>>b;

				    cout<<"\n\n\t\t\t\t Adinizi girin: ";
					cin >>isim[20];
					cout<<"\n\n\t\t\t\t Iletisim numaranizi giriniz: ";
					cin>>tel_no[10];
					select_seat();

					cout<<"\n\n\t\t\t\t Rezervasyon yapilacak bilet sayisini girin: ";

					cin>>purcase_ticket;
					pay(purcase_ticket);
					cout<<"\n\n\n\t\t\t\t Bilgileriniz: ";
					cout<<"\n\t\t\t\t Isim                   :"<<isim[20];
					cout<<"\n\t\t\t\t Tel No                 :"<<tel_no[10];


					cout<<"\n\t\t\t\t Gosterim zamanlari 	:";
					switch(b)
					{
						case 1:	cout<<"08.00";
							break;
						case 2:	cout<<"13.00";
							break;
						case 3:	cout<<"14.50";
							break;
						case 4:	cout<<"18.00";
							break;
						case 5:	cout<<"21.00";
							break;
						case 6:	cout<<"01.00";
							break;
					}


					genel<<"Film'in adi      :Babam ve Oglum"<<endl<<" Isim              :"<<isim[20]<<endl<<" Tel no            :"<<tel_no[10]<<endl<<" Gosterim zamani   :";
					switch(b)
					{
						case 1:	genel<<"08.00"<<endl;
							break;
						case 2:	genel<<"13.00"<<endl;
							break;
						case 3:	genel<<"14.50"<<endl;
							break;
						case 4:	genel<<"18.00"<<endl;
							break;
						case 5:	genel<<"21.00"<<endl;
							break;
						case 6:	genel<<"01.00"<<endl;
							break;
					}

					cout<<"\n\n\t\t\t\t Baska bir islem yapmak istiyor musunuz? (y/n)";
					cin>>ans;
					system("CLS");
					break;
	            }
			break;
		    case 2:
			    system("CLS");
			    char ans;
				cout<<"\n\nBiletinizi Online aldiginiz icin tesekkur ederiz... \nBiletin ciktisi icin ID'inizi girin: "<<endl;
				struct pre
				{
				int trsnid;
				char isim[10];
				} p;
				cout<<"\n Islem yapmak icin ID girin:\n (Orn. ID' nizin son 5 hanesini girin.) "<<endl;
				cin>>p.trsnid;
				cout <<"Adinizi girin"<<endl;
				cin>>p.isim;
				cout<<"Uzgunuz, ancak veritabanimiz bu isimle rezervasyon gostermedi�inden biletin ciktinizi giristen �ikarmaniz gerekecek"<<endl;
				cout<<"\n Baska bir islem yapmak istiyor musunuz? (y/n)";
				cin>>ans;
				system("CLS");
			break;
		    case 3: system("CLS");
				cout<<"Iyi gunler/aksamlar \n Sinemamiza hosgeldiniz... \n"<<endl;																												//card membership
				card();
				cout<<"Tesekk�rler. \n Kart kayit islemiz gerceklesmektedir. \n Kartin avantajlarini g�rmek icin diger sayfaya geciniz."<<endl;
				char f;
				cout<<"\n Kart avantajlarini g�rmek ister misiniz? (y/n)\n"<<endl;
				cin>>f;
				if(f=='y')
				{
					cout<<"Kart kaydiniz icin tesekkurler! \n Kartin ayricaliklari sunlard�r:"<<endl;
					cout<<"\n 1. Her bilet aliminda +2.5 puan (1puan  = 1Rs.) boylelikle 16 film sonrasinda 1 bilet ucretsiz olacaktir."<<endl;
					cout<<"\n 2. Guncel olarak gosterim saatlerini ogrenebileceksiniz."<<endl;
					cout<<"\n 3. Vizyona girmeden once yer ayirtabileceksiniz."<<endl;
				}
				cout<<"\n Baska bir islem yapmak istiyor musunuz? (y/n)";
				cin>>ans;
				if(ans=='y')
				{
					system("CLS");
					break;
				}
				else
				{
					exit(0);
				}
			break;
			case 4:
		     system("CLS");
		     cout<<"\n\t\t\t\tHoscakalin...\n\n\t\t\t\t";
		     system("PAUSE");
		     exit(0);
		    break;
	    }
    }  while(ans=='y');

	genel.close();
}


void Movie_reservation:: select_seat(){

	string numara;
	string koltuk;
    fstream dosya;
    fstream dosya1;
	dosya.open("Dolu.txt",ios::out|ios::ate|ios::in|ios::app);
	dosya1.open("Bilgiler.txt",ios::out|ios::ate|ios::in|ios::app);
	if(dosya.is_open()==true)
	{
		a:
		dosya.seekg(0,ios::beg);
    	cout<<"\n\n\t\t\t\t Oturmak istediginiz koltuk numarasini girin:";
	    cin.clear();
	    cin>>numara;
		while(dosya>>koltuk)
		{
	  	  if(numara==koltuk)
			{
	  		  cout<<"\n\n\t\t\t\t yeni bir koltuk numarasi girin:";
	  	      goto a;
			}
	    }

		cout<<"\n\n\t\t\t\t Sectiginiz koltugu ayirdiniz";
		dosya1<<endl<<" Koltuk no         :"<<numara<<endl;
		dosya<<" "<<numara;
	}

   dosya.close();
}


void Movie_reservation::card()
{
	int cardid;
	cout<<"\t\t\t\tKart kayit islemlerine Hosgeldiniz...";
	cout<<" \n\t\t\t\t Adinizi girin: ";
	cin>>isim[20];
	cout<<"\t\t\t\tTelefon numaranizi girin: ";
	cin>>tel_no[10];
	cout<<"\t\t\t\tAdresinizi girin: ";
	cin>>address[50];
	cout<<"\t\t\t\t Mail adresinizi girin: ";
	cin>>e_mail_id[20];
	system("CLS");
	int ID;
	srand (time(NULL));
	ID = rand() % 400000 + 4000000;
	if (ID<0)
	ID=(ID*-1);
	cout<<"\t\t\t\tYeni kart numaraniz- :" <<"\t"<<ID;
	fstream fout;
	fout.open("Card.txt", ios::out|ios::app|ios::in);
	fout<<"\n isim :"<<isim[20]<<"\n"<<"\n Tel No. :"<<tel_no[10]<<"\n"<<"\n Address :"<<address[50]<<"\n"<<"\n Mail ID :"<<e_mail_id[20]<<"\n"<<"\nCard Number:"<<ID;
	fout.close();
	cout<<"\t\t\t\tKart kaydiniz tamamlandi. \n";
}




void Movie_reservation::pay(int purcase_ticket)
{

	int normal, gold, amt[2],id;
	time_t t = time(NULL);
	tm* timePtr = localtime(&t);
	fstream fin;
	fin.open("Card.txt", ios::out|ios::in|ios::app);
	fin>>id;
	cout<<"\t\t\t\tBu filmi sectiginiz icin Teskkurler. \n\t\t\t\t Bilet opsiyonunu seciniz: \n\n\t\t\t\t 1.Normal Class \n\t\t\t\t OR \n\t\t\t\t 2. 3D Class"<<endl;
	int c;
	cin>>c;
	if(c==1)
	{
		cout<<"\n\n\t\t\t\t Normal show sectiniz.\n\n\t\t\t\t";

		system("CLS");
		amt[1] = purcase_ticket * 40;
		char final;
		cout<<"\n\n\t\t\t\t  DTcard kartiniz var mi?(y/n): ";
		cin>>final;
		if(final=='y')
		{
			int cid;
			a:
			cout<<"\n\t\t\t\t Kart numaranizi giriniz[10 digits]:\n\t\t\t\t //Exception Handling kullanildi. "<<endl;
			cin>>cid;

			int sayi=cid,basamak=1;
			while(sayi>=10){
				sayi/=10;
				basamak++;
			}
			try{
				if(basamak>10)
				  throw 1;

				if(basamak<10)
				  throw 2;

			}

			catch(int deger ) {

				if(deger==1||deger==2){

					cout<<"\n\t\t\t\t Eksik ya da fazla rakam girdiniz. Tekrar kontrol ediniz."<<endl;
					goto a;
				}
			}


			if(cid==id)
			{
				amt[1]=amt[1] - (0.1*amt[1]);
			};
		}
		cout<<"\n\t\t\t\t Kart ile odemek ister misiniz? (y/n): ";
		char rep;
		cin>>rep;
		cout<<"\n\t\t\t\t"<<" Odenecek tutar :"<<amt[1]<<"\n";
		if (rep=='y'||rep=='Y')
		{

			char n[10];
			gets(n);
			cout<<"\n\t\t\t\t Kart numarasini girin: ";
			char Card[16];
			gets(Card);
			cout<<"\t\t\t\t Vade(MM/YYYY)"<<endl;
			int expirymm,expiryyy;
			cout<<"\t\t\t\t";
			cin>>expirymm;
			cout<<"\t\t\t\t/  ";
			cin>>expiryyy;
			while(expirymm<(timePtr->tm_mon) || expiryyy<(timePtr->tm_year + 1900)){
				if(expirymm<=(timePtr->tm_mon))
					{
						cout<<"\t\t\t\tTekrar ayi girin: ";
						cin>>expirymm;
					}
				if(expiryyy<(timePtr->tm_year + 1900))
				{
					cout<<"\t\t\t\t Gecerli bir tarih girin: ";
					cin>>expiryyy;
				}
			};

		}
	}
	else
	{
		cout<<"\n\n\t\t\t\t 3D show u sectiniz \n\t\t\t\t";

		system("CLS");
		amt[2] = purcase_ticket * 70;
		char final;
		cout<<"\n\t\t\t\t DTcard kartiniz var mi? (y/n): ";
		cin>>final;
		if(final=='y')
		{
			int cid;
			b:
			cout<<"\n\t\t\t\t Kart numaranizi giriniz[10 digits]:\n\t\t\t\t //Exception Handling kullanildi. "<<endl;
			cin>>cid;

			int sayi=cid,basamak=1;
			while(sayi>=10){
				sayi/=10;
				basamak++;
			}
			try{
				if(basamak>10)
				  throw 1;

				if(basamak<10)
				  throw 2;

			}

			catch(int deger ) {

				if(deger==1||deger==2){

					cout<<"\n\t\t\t\t Eksik ya da fazla rakam girdiniz. Tekrar kontrol ediniz."<<endl;
					goto b;
				}
			}

			if(cid==id)
			{
				amt[1]=amt[1] - (0.1*amt[1]);
			};
		}
		cout<<"\n\t\t\t\t Kart ile odeme yapmak ister misiniz? (y/n): ";
		char rep;
		cin>>rep;
		cout<<"\n\t\t\t\t"<<" Odenecek tutar :"<<amt[2]<<"\n";
		if (rep=='y'||rep=='Y')
		{
			char n[10];
			gets(n);
			cout<<"\n\t\t\t\t Kart numarasini girin: ";
			char Card[16];
			gets(Card);
			cout<<"\n\t\t\t\t Vade(MM/YY): "<<endl;
			int expirymm, expiryyy;
			cout<<"\t\t\t\t";
			cin>>expirymm;
			cout<<"\t\t\t\t/ ";
			cin>>expiryyy;
			while(expirymm<(timePtr->tm_mon) || expiryyy<(timePtr->tm_year + 1900)){
				if(expirymm<=(timePtr->tm_mon))
					{
						cout<<"\n\t\t\t\t Tekrar ayi girin: ";
						cin>>expirymm;
					}
				if(expiryyy<(timePtr->tm_year + 1900))
				{
					cout<<"\n\t\t\t\t Gecerlilik tarihini girin: ";
					cin>>expiryyy;
				}
			};

		}
	}
}


