#ifndef KLASA_H_
#define KLASA_H_

class lista1 {
	struct liczby {
		int a;
		int ileOtwierany=0;
		int id;
		struct liczby *prev, *next;

	};
	int ileLiczb=0;
	struct liczby *pierwszy;
	struct liczby *ostatni;
	//pierwszy=NULL;
	//ostatni=NULL;
public:
	lista1() 
	{
		pierwszy = new (struct liczby);
		pierwszy->a=1;
		pierwszy->id=1;
		pierwszy->next=NULL;
		pierwszy->prev=NULL;
		ostatni=pierwszy;
		ileLiczb++;
	};
	int dajLiczbe(void) 
	{
		int ajdi;
		std::cout << "Podaj liczbe w kolejnosci do wypisania, \n";
		std::cin >> ajdi;
		struct liczby *temp1;
		//struct liczby *temp2;
		temp1 = pierwszy;
		for(int i=ileLiczb; i>ajdi; i--)
		{
			temp1=temp1->next;
		}
		std::cout << temp1->a;
		return temp1->a;
	}
	void przesunOd(int od)
	{
		struct liczby *aktualny;
		aktualny=pierwszy;
		//while(aktualny->id<od) aktualny = aktualny->next;
		while(aktualny->next)
		{
			if(aktualny->id<=od) aktualny->id+=1;
			aktualny=aktualny->next;
		}
		//delete aktualny;
	}//przesunOd
	void przesunDo(int upto)
	{
		struct liczby *aktualny;
		aktualny=pierwszy;
		//while(aktualny->id<do) aktualny=aktualny->next;
		while(aktualny->next)
		{
			if(aktualny->id<=upto) aktualny->id-=1;
			aktualny=aktualny->next;
		}//delete aktualny;
	}//przesunDo
	int dodajElementPocz(void)
	{
		int x;
		std::cout << "Podaj liczbe do dodania\n";
		std::cin >> x;
		struct liczby *temp;
		temp = new (struct liczby);
		temp->id=(ileLiczb+1);
		temp->prev=NULL;
		temp->next=pierwszy;
		temp->a=x;
		przesunOd(0);
		ileLiczb++;
		pierwszy->prev=temp;
		pierwszy=temp;
	}
	int usunElementID(void)
	{
		int x;
		std::cout << "Ktory element usunac?\n";
		std::cin >> x;
		struct liczby *temp, *temp2;
		temp = pierwszy;
		//while(temp->id!=x) temp = temp->next;
		for (int i=0; i<x; i++) temp=temp->next;
		if (!temp) return -1;
		temp2=temp->next;
		temp2->prev=temp->prev;
		(temp->prev)->next=temp2;
		delete temp;
		ileLiczb--;
	}
	void PobieranieEElementuZlisty()
	{
		system("wget google.com");
	}
	void wypisz(void)
	{
		struct liczby *aktualny;
		aktualny=pierwszy;
		while(aktualny) 
		{
			std::cout << "Id:\t" << aktualny->id << "\nLiczba:\t" << aktualny->a << "\n\n";
			aktualny->ileOtwierany++;
			aktualny=aktualny->next;
		}
	}

};//calosc


#endif
