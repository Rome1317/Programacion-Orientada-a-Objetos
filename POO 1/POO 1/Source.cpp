#include <iostream>
#include <string>

using namespace std;

void menu();

float cost[10] = { 255195,296000,267817,173248,689253,7142537,981256,217848,9152635,525361 };
string characteristcs[10] = { "Bonito","Chido","Carrazo","Lindo","Para conseguir perras!","No lo compres","Maravilloso","Mucho mejor que el que tienes","Es azul","No existe" };

int op;

enum cars {
	Civic = 1,
	Lamborghini,
	FordMustang,
	FerrariTestarossa,
	ChevroletCorvette,
	PorscheCarrera,
	BugattiVeyron,
	ACCobra,
	Vulcan,
	Challenger
};

void main() {

	menu();
	cin >> op;

	system("cls");

	switch (op)

	{
	case Civic:

		cout << "Civic" << endl;
		cout << "Precio: " << *(&cost[Civic - 1]) << endl;
		cout << "Carasteristica: " << *(&characteristcs[Civic - 1]) << endl;

		break;
	case Lamborghini:

		cout << "Lamborghini" << endl;
		cout << "Precio: " << *(&cost[Lamborghini - 1]) << endl;
		cout << "Carasteristica: " << *(&characteristcs[Lamborghini - 1]) << endl;

		break;
	case FordMustang:

		cout << "FordMustang" << endl;
		cout << "Precio: " << *(&cost[FordMustang - 1]) << endl;
		cout << "Carasteristica: " << *(&characteristcs[FordMustang - 1]) << endl;

		break;
	case FerrariTestarossa:

		cout << "FerrariTestarossa" << endl;
		cout << "Precio: " << *(&cost[FerrariTestarossa]) << endl;
		cout << "Carasteristica: " << *(&characteristcs[FerrariTestarossa - 1]) << endl;

		break;
	case ChevroletCorvette:

		cout << "ChevroletCorvette" << endl;
		cout << "Precio: " << *(&cost[ChevroletCorvette - 1]) << endl;
		cout << "Carasteristica: " << *(&characteristcs[ChevroletCorvette - 1]) << endl;

		break;
	case PorscheCarrera:

		cout << "PorscheCarrera" << endl;
		cout << "Precio: " << *(&cost[PorscheCarrera - 1]) << endl;
		cout << "Carasteristica: " << *(&characteristcs[PorscheCarrera - 1]) << endl;

		break;
	case BugattiVeyron:

		cout << "BugattiVeyron" << endl;
		cout << "Precio: " << *(&cost[BugattiVeyron - 1]) << endl;
		cout << "Carasteristica: " << *(&characteristcs[BugattiVeyron - 1]) << endl;

		break;
	case ACCobra:

		cout << "ACCobra" << endl;
		cout << "Precio: " << *(&cost[ACCobra - 1]) << endl;
		cout << "Carasteristica: " << *(&characteristcs[ACCobra - 1]) << endl;

		break;
	case Vulcan:

		cout << "Vulcan" << endl;
		cout << "Precio: " << *(&cost[Vulcan - 1]) << endl;
		cout << "Carasteristica: " << *(&characteristcs[Vulcan - 1]) << endl;

		break;
	case Challenger:

		cout << "Challenger" << endl;
		cout << "Precio: " << *(&cost[Challenger - 1]) << endl;
		cout << "Carasteristica: " << *(&characteristcs[Challenger - 1]) << endl;

		break;
	default:
		break;
	}

	system("pause>nul");
}

void menu() {

	cout << "Vehiculos: " << endl;
	cout << "1.Civic" << endl;
	cout << "2.Lamborghini" << endl;
	cout << "3.Ford Mustang" << endl;
	cout << "4.FerrariTestarossa" << endl;
	cout << "5.ChevroletCorvette " << endl;
	cout << "6.PorscheCarrera" << endl;
	cout << "7.BugattiVeyron" << endl;
	cout << "8.ACCobra" << endl;
	cout << "9.Vulcan" << endl;
	cout << "10.Challenger" << endl;

}


