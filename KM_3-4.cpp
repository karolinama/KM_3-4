
#include "stdafx.h"
#include <iostream>
	using namespace std;

	class Klasa1
	{
	public:
		Klasa1()
		{
			z1 = 1;
			z2 = 2;
			z3 = 3;
		}
	public:
		double z1;
		void w1()
		{
			cout << z1 << endl;
		}
	private:
		double z2;
		void w2()
		{
			cout << z2 << endl;
		}
	protected:
		double z3;
		void w3()
		{
			cout << z3 << endl;
		}

	};

	class Klasa2 : public Klasa1
	{
	public:
		Klasa2()
		{
			z1 = 1;

			z3 = 3;
			z4 = 4;
			z5 = 5;
			z6 = 6;
		}
	public:
		double z4;
		void w4()
		{
			cout << z4 << endl;
		}
	private:
		double z5;
		void w5()
		{
			cout << z5 << endl;
		}
	protected:
		double z6;
		void w6()
		{
			cout << z6 << endl;
		}
	public:
		void pokaz_klase1(double a)
		{
			cout << a;
		}
	};

	using namespace std;

	int main()
	{
		Klasa1 k1;
		k1.w1();
		//    k1.w2();   private
		//   k1.3();   protected

		Klasa2 k2;
		k2.w4();
		//   k2.w5();     private
		//  k2.w6();     protected

		k2.pokaz_klase1(k2.z1);
		k2.pokaz_klase1(k2.z3);

		return 0;
	}

