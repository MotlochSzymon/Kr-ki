// ConsoleApplication1.cpp: definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


void rysuj(int n)
{
	cout << "*************" << endl;
	cout << endl;
	for (int i = 0; i < n; i++)
	{   
		if (tab[i] == 1) cout << i + 1 ;
		else cout << "0";
		if (tab[i] == 2) cout << i + 1;
		else cout << "0";
		if (tab[i] == 3) cout << i + 1;
		else cout << "0";
	}
	cout << "***********" << endl;
}

void prz(int krazek, int pozycja)
{
	tab[krazek] = pozycja;
	cout << "Krazek nr." << krazek + 1 << "na pozcyje " << pozycja << endl;
}

bool jest(int tab[], int n, int pozycja,  int &m)
{
	
	
	for (int i = 0; i < n; i++)
	{
		if ( tab[i] == pozycja)
		{
			m = i;
			return true;
		}
	}
	return false;
	
}

void ile(int tab[], int n, int &ile1, int &ile2, int &ile 3)
{
	ile1 = 0;
	ile2 = 0;
	ile3 = 0;
	for (int i = 0; i < n; i++)
	{
		if (tab[i] == 1) ile1++;
		if (tab[i] == 2) ile2++;
		if (tab[i] == 3) ile3++;
	}

}
int licz(int tab[], int n, int pozycja)
{
	int ilosc;
	for (int i = 0; i < n; i++)
	{
		if (tab[i] == pozycja)
		{
			ilosc++;
		}
	}
	return ilosc;
}

int wnioskuj(int a, int b);
{
	if (a == 1 && b == 2 || a==2 && b==1) return 3;
	if (a == 1 && b == 3 || a==3 && b==1) return 2;
	if (a == 2 && b == 3 || a==3 && b==2) return 1;
}

void zmiania_zmiennych(int a, int b, int c)
{

}




void stosik_na_inny(int tab[], int n, int &a , int &b, m);
{
	int c;
	int ilosc, przerzucone;
	// int pomocnicze_a, pomocnicze_b;
	c = wnioskuj(a, b);
	ilosc = licz(tab[], n, a);
	przerzucone = licz(tab[], n, b);
		int m = 0;
	//	if (pierwszy() == 1)
	//	{
		//	int ile1, ile2, ile3;
		//int m;
			//pierwszy = 0;
		//	ile(tab[], n, ile1, ile2, ile3);
		//	jest(tab[], n, a, m);
		//
		//	if (a == 1 && ile1 == 1 || a == 2 && ile2 == 1 || a == 3 && ile3 == 1)
		//	{
		//		prz(m, b);
		//		return 0;
		//	}
		//	else if (a == 1 && ile1 == 2 || a == 2 && ile2 == 2 || a == 3 && ile3 == 2)
		//	{
		//		prz(m, c);
		//		prz(m + 1, b);
		//		prz(m, c);
		//		return 0;
		//	}
	//	}

	if (ilosc == 1 && tab[0] == a )
	{
		prz(0, b);
	}
	else if (ilosc == 2  && tab [0] == a)
	{
		if (tab[0] == tab[1])
		{
			prz(0, c);
			prz(1, b);
			prz(0, b);
		}else prz(0, b);

	}
//	else if (ilosc == 3 tab [0] == a)
//	{

//		prz(0, b);
//		prz(1, c);
//		prz(0, c);
//		prz(2, b);
//		prz(0, a);
//		prz(1, b);
//		prz(0, b);

//	}

	else if (tab[0] == a )
	{
		if (tab[0] == tab[1] && tab[1] == tab[2])
		{

			if (ilosc % 2 == 0)
			{
				prz(0, c);
				prz(1, b);
				prz(0, b);
				prz(2, c);

				int pom;
				pom = a;
				a = b;
				b = c;
				c = pom;
				m = 0;
				while (przerzucone != ilosc)
				{
					stosik_na_inny(tab[], n, a, b, m);
					przerzucone = licz(tab[], n, b);

				}
			}
			else
			{
				prz(0, b);
				prz(1, c);
				prz(0, c);
				prz(2, b);

				int pom;
				pom = a;
				a = c;
				c = pom;
				m = 0;
				while (przerzucone != ilosc)
				{
					stosik_na_inny(tab[], n, a, b, m);
					przerzucone = licz(tab[], n, b);
				}

			}

		}
		else if (tab[0] == tab[1])
		{
			prz(0, c);
			prz(1, b);
			prz(0, b);
		}
		else prz(0, b);


	}
//	else // ubrany stos (a) - przeniesnie 2 stosów  na wolne (b)
//	{
//		prz(m, b);
//		int pom;
//		pom = a;
//		a = c;
//		c = pom;

//	}


	if (a % 2 = 0)
	{
		prz(m, c);
		prz(m + 1, b);
		prz(m, b);
	}
	else
	{
		prz(m, b);
		prz(m + 1, c);
		prz(m, c);

	}

	if (a == 1 && ile1 == 3 || a == 2 && ile2 == 3 || a == 3 && ile3 == 3) return 0;


	if ()

		if (jest(a, n, m))
		{
			while (m <= n && tab[m] == tab[m + 1]) // sąsiadujące krązki są na tym samum paliku i istnieje
			{

			}

		}




}


void trzdr(int tab[], int n, int m);  // trzeci stosik na drugi

void drtrz(int tab[] , int n , int m )
{
	
		if ( !(jest( 3, n ) ) )  // Jeżeli nie ma nic na 3
		{
			prz(m, 1);
			prz(m + 1, 3);
			prz(m, 3);
			m = m + 2;
		}
		     

		while ( jest(2, n, m) )
		{
			if (tab[ m + 1 ] == 2)
			{
				prz(m, 1);
				trzdr(tab[], n, m);
				prz(m, 3);
				

		    }
			else
			{

			}

		}
	
}

int main()
{
	int n;
	int przerzucone = 0;
	int a, b;
	int m;
	cout << "Podaj ilosc krazkow" << endl;
	cout << "n= ";
	cin >> n;
	while (n < 1)
	{
		cout << " zla wartosc, podaj n= ";
		cin >> n;
	}
	int * tab = new int[n];
	for (int i = 0; i < n; i++)
	{
		tab[i] = 1;
	}
    
	
	if (n == 1)
	{
		prz(0, 2);
	}
	else if (n==2)
	{
		prz(0, 3);
		prz(1, 2);
		prz(0, 2);
	}
//	else if (n==3)
//	{
//	
//			prz(0, 2);
//			prz(1, 3);
//			prz(0, 3);
//			prz(2, 2);
//			prz(0, 1);
//			prz(1, 2);
//			prz(0, 2);
		
//	} 
	else
	{
		if (n % 2 == 0)
		{
			prz(0, 3);
			prz(1, 2);
			prz(0, 2);
			prz(2, 3);
			a = 2;
			b = 3;
			m = 0;
				while (przerzucone != n)
				{
					stosik_na_inny(tab[], n, a, b, m);
					przerzucone = licz(tab[], n, 2);
				}
		}
		else
		{
			prz(0, 2);
			prz(1, 3);
			prz(0, 3);
			prz(2, 2);
			przerzucone = licz(tab[], n, 2);
			a = 3;
			b = 2;
			m = 0;
			while (przerzucone != n)
			{
				stosik_na_inny(tab[], n, a, b, m);
				przerzucone = licz(tab[], n, 2);
			}

		}

	}
	



	delete[] tab;
	return 0;
}

