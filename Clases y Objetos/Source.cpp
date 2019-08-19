//Clases 
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Persona {
private://Atributos (Encapsulamiento)
	int edad;
	string nombre;
public://Metodos
	Persona(int, string);//Constructor
	void leer();
	void correr();
};

class Rectangulo {
private:
	int largo;
	int ancho;
public:
	Rectangulo(int, int);
	void perimetro();
	void area();
};

//Constructor, srive para inicializar los atributos
Persona::Persona(int _edad, string _nombre) {
	edad = _edad;
	nombre = _nombre;
}

Rectangulo:: Rectangulo (int _largo, int _ancho) {
	largo = _largo;
	ancho = _ancho;
}

void Persona::leer() {
	cout << nombre <<" is reading"<< endl;
}

void Persona::correr() {
	cout << nombre << " is running" << endl;
}

void Rectangulo::perimetro() {

	int p;
	p = largo * 2 + ancho * 2;
	cout << "El perimetro es: " << p << endl;
}

void Rectangulo::area() {

	int a;
	a = largo * ancho;
	cout << "El area es: " << a << endl;
}

int main() {

	Persona p1 = Persona(20, "Rome");
	Persona p2(19, "Paco");

	p1.leer();
	p2.correr();

	Rectangulo r1 = Rectangulo(5, 7);

	r1.area();
	r1.perimetro();

	system("pause");
	return 0;
}