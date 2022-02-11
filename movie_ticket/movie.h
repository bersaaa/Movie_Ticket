#ifndef Movie_H
#define Movie_H


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
//gamze
class Tarih
{
    int mo, da, yr;

	public:
       Tarih(int m, int d, int y);
       friend ostream& operator<<(ostream& os, const Tarih & dt);
};

class Movie_reservation
{

	public:
		//arzu
		Movie_reservation();
		Movie_reservation(string name[20],string tel_no[10],string e_mail_id[20],string adress[50],int purcase_ticket,string seat_no[10]);
	    //esra
		void Reservation();
	    void select_seat();
	    //seda
		void pay( int a);
		void random();
	    void card();



	private:

		string isim[20];
		string tel_no[10];
		string address[50];
		string e_mail_id[20];
		string seat_no[10];
		int purcase_ticket;


};





#endif
