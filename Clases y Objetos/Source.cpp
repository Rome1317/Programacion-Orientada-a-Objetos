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

//Constructor, srive para inicializar los atributos
Persona::Persona(int _edad, string _nombre) {
	edad = _edad;
	nombre = _nombre;
}

void Persona::leer() {
	cout << nombre <<" is reading"<< endl;
}

void Persona::correr() {
	cout << nombre << " is running" << endl;
}

int main() {

	Persona p1 = Persona(20, "Rome");
	Persona p2(19, "Paco");

	p1.leer();
	p2.correr();

	system("pause");
	return 0;
}