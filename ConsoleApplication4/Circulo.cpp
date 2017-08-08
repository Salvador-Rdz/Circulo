// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//Clase Figura
class figura
{
	//Se definen como metodos virtuales puros para que la clase sea reconocida como abstracta
	virtual double getP() = 0; 
	virtual double getA() = 0;
};
//Clase Circulo
class circulo :public figura
{
private:
	double radio, perimetro, area;
public:
	//Constructores
	circulo()
	{
		radio = NULL;
		perimetro = NULL;
		area = NULL;
	}
	circulo(double r)
	{
		radio = r;
		perimetro = 2 * 3.1416*r;
		area = 3.1416*r*r;
	}
	~circulo() {}
	//Getters y Setters
	double getR()
	{
		return radio;
	}
	virtual double getP()
	{
		return perimetro;
	};
	virtual double getA()
	{
		return area;
	};
};
int main(void) //Main para comprobar el funcionamiento.
{
	//figura myfig; Marca error, debido a que es una clase abstracta.
	circulo myCirc(3);
	cout << "Radio " << myCirc.getR() << " cm \n";
	cout << "Area " << myCirc.getA()<<" cm \n";
	cout << "Perimetro " << myCirc.getP() << endl;
}


