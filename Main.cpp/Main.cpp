/*******************************************
Materia: Graficas Computacionales
Fecha: 13 de agosto del 2017
Autor: A01373890 Gabriela Aguilar Lugo
********************************************/

#include <iostream> 
#include <cmath>


using namespace std;

void menu();
int perimetroRectangulo();
float areaTriangulo();
int mayor();
int menor();
int filaEstrellas();
int matrizEstrellas();
int piramideEstrellas();
int flechaEstrellas();
int fibonacci();
bool esPrimo();



int main() {
	int opcion;
	int salir = 0;
	bool primo;
	do {

		menu();

		cout << "Elige tu  opcion del 1 al 11: ";
		cin >> opcion;

		if (opcion == 1)
			cout << "El perimetro del rectangulo es: " << perimetroRectangulo() << endl;

		else if (opcion == 2)
			cout << "El area del triangulo es:  " << areaTriangulo() << endl;

		else if (opcion == 3)
			cout << mayor() << endl;

		else if (opcion == 4)
			cout << "El numero menor es:  " << menor() << endl;

		else if (opcion == 5)
			cout << "\n" << "La fila de estrellas es de :  " << filaEstrellas() << endl;


		else if (opcion == 6)
			cout << "\n" << "La matriz estrella es de :  " << matrizEstrellas() << endl;

		else if (opcion == 7)
			cout << "Piramide estrellas base:  " << piramideEstrellas() << endl;

		else if (opcion == 8)
			cout << "La flecha de  estrellas su base es de:  " << flechaEstrellas() << endl;

		else if (opcion == 9)
			cout << "Fibonacci:  " << fibonacci() << endl;

		else if (opcion == 10)

			cout << "Es primo?  " << (esPrimo() ? "true" : "false") << endl;

		else if (opcion == 11)
			return 0;
		system("pause");
		system("cls");
	} while (opcion != 11);

}

void menu() {
	cout << "Programas en c" << endl << endl;
	cout << "1) Perimetro rectangulo" << endl;
	cout << "2) Area Triangulo" << endl;
	cout << "3) Numero mayor" << endl;
	cout << "4) Numero menor" << endl;
	cout << "5) Fila estrellas" << endl;
	cout << "6) Matriz estrellas" << endl;
	cout << "7) Piramide estrellas" << endl;
	cout << "8) Flecha estrellas" << endl;
	cout << "9) Fibonacci" << endl;
	cout << "10) Numero primo" << endl;
	cout << "11) Terminar programa" << endl;
	cout << "-------------------------" << endl << endl;
}

int perimetroRectangulo() {
	int base;
	int altura;
	int perimetro;


	cout << "Base del rectangulo: ";
	cin >> base;
	cout << "Altura del rectangulo: ";
	cin >> altura;

	perimetro = (2 * base) + (2 * altura);
	return perimetro;
}


float areaTriangulo() {
	float base;
	float altura;

	float area;

	cout << "Base del triangulo: ";
	cin >> base;
	cout << "Altura del triangulo: ";
	cin >> altura;

	area = (base*altura) / 2;
	return area;
}


int mayor() {
	int numero1;
	int numero2;
	int numero3;
	int mayor;


	cout << "Ingresa el primer numero ";
	cin >> numero1;
	cout << "Ingresa el segundo numero ";
	cin >> numero2;
	cout << "Ingresa el tercer numero ";
	cin >> numero3;

	if (numero1 > numero2 && numero1 > numero3) {
		cout << "El numero mayor es " << numero1;
		cin >> mayor;
	}
	else {
		if (numero2 > numero1 && numero2 > numero3) {
			cout << "El numero mayor es " << numero2;
			cin >> mayor;
		}
		else {
			cout << "El numero mayor es " << numero3;
			cin >> mayor;
		}
	}
	return mayor;

}

int menor() {

	int numero1;
	int numero2;
	int numero3;
	int menor;

	cout << "Ingresa el primer numero ";
	cin >> numero1;
	cout << "Ingresa el segundo numero ";
	cin >> numero2;
	cout << "Ingresa el tercer numero ";
	cin >> numero3;


	if (numero1 < numero2 && numero1 < numero3) {
		cout << "El numero menor es " << numero1;
		cin >> menor;
	}
	else {
		if (numero2 < numero1 && numero2 < numero3) {
			cout << "El numero menor es " << numero2;
			cin >> menor;
		}
		else {
			cout << "El numero menor es " << numero3;
			cin >> menor;
		}
	}
	return menor;
}

int filaEstrellas() {
	int n;
	int i = 0;

	cout << "Ingresa numero de estrellas ";
	cin >> n;

	for (i = 0; i<n; i++) {
		cout << ("*");


	}

	return n;
}


int matrizEstrellas() {

	int i;
	int j;
	int n;

	cout << "Ingresa el tamanio de la matriz de estrellas ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "*";
		}
		cout << endl;
	}
}



int piramideEstrellas() {
	int n;
	int i = 0;
	int j = 0;
	piramideEstrellas;

	cout << "Ingresa la base de la piramide ";
	cin >> n;

	for (i = 0; i<n; i++) {
		for (j = 0; j <= i; j += 1) {
			cout << ("*");
		}
		cout << "\n";
	}
}


int flechaEstrellas() {

	int i;
	int j;
	int n;

	cout << "Ingresa numero de columnas de la flecha ";
	cin >> n;


	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	while (--n) {
		for (int j = 0; j < n; j++) {
			cout << "*";
		}
		cout << endl;
	}

}

int fibonacci() {

	int i;
	int a = 1;
	int b = 1;
	int c;
	int n;

	cout << "Ingresa numero de elementos para la sucesión de Fibonacci ";
	cin >> n;

	cout << a << " " << b << " ";
	for (int i = 2; i<n; i++) {
		c = a + b;
		cout << c << " ";
		a = b;
		b = c;
	}
	cout << endl;
	return n;

}


bool esPrimo() {
	int numero;

	cout << "Ingresa numero ";
	cin >> numero;



	if (numero <2)
		return false;
	if (numero <= 3)
		return true;

	if (numero % 3 == 0 || numero % 2 == 0)
		return false;

	for (int i = 5; i <= sqrt(numero); i += 6) {
		if (numero%i == 0 || numero % (i + 2) == 0)
			return false;
	}
	return true;
	return numero;

}





