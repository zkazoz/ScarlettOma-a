/*Gráficas Computacionales
Fecha: 16-ago-2017
Scarlett Omaña Silva A01373419*/
//ljg*/
/*dshola mundo*/
#include <iostream>
int numeromayor;
int numeromenor;


//Ejercicio1
int PerimetroRectangulo(int base, int altura) {
	int P = (2 * base) + (2 * altura);
	return P;
}

//Ejercicio2
float AreaTriangulo(float base, float altura) {
	float a = (base*altura) / 2;
	return a;

}

//Ejercicio3
int Mayor(int numero1, int numero2, int numero3) {
	std::cout << "Primer Numero:";
	std::cin >> numero1;
	std::cout << "Segundo Numero:";
	std::cin >> numero2;
	std::cout << "Tercer Numero: ";
	std::cin >> numero3;

	if (numero1 >= numero2 && numero1 >= numero3) {
		numeromayor = numero1;
	}

	if (numero2 >= numero1 && numero2 >= numero3) {
		numeromayor = numero2;

	}
	if (numero3 >= numero1 && numero3 >= numero2) {
		numeromayor = numero3;
	}
	return numeromayor;
}
//Ejercicio4
int Menor(int num1, int num2, int num3) {
	std::cout << "Primer Numero:";
	std::cin >> num1;
	std::cout << "Segundo Numero:";
	std::cin >> num2;
	std::cout << "Tercer Numero: ";
	std::cin >> num3;

	if (num1 <= num2 && num1 <= num3) {
		numeromenor = num1;
	}

	if (num2 <= num1 && num2 <= num3) {
		numeromenor = num2;

	}
	if (num3 <= num1 && num3 <= num2) {
		numeromenor = num3;
	}
	return numeromenor;
}

//Ejercicio5
void FilaEstrellas(int n) {

	for (int i = 0; i < n; i++)
		std::cout << "*";

}

//Ejercicio6
void MatrizEstrellas(int n) {
	for (int i = 0; i < n; i++) {
		std::cout << std::endl;
		for (int i = 0; i < n; i++)
			std::cout << "*";
	}
}

//Ejercicio7
void PiramideEstrellas(int n) {
	for (int i = 0; i < n; i++) {
		std::cout << std::endl;
		for (int s = 0; s <= i; s++)
			std::cout << "*";
	}
}

//Ejercicio8
void FlechaEstrellas(int n) {
	for (int i = 0; i < n; i++) {
		for (int s = 0; s <= i; s++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	for (int i = n; i >= 0; i--) {
		std::cout << std::endl;
		for (int j = 0; j < i; j++) {
			std::cout << "*";

		}
	}
}

//Ejercicio9

void Fibonacci(int n) {
	int  a = 0, f = 1, b = 1, c;
	std::cout << " " << f << std::endl;
	for (c = 1; c < n; c++)
	{
		f = a + b;
		a = b;
		b = f;
		std::cout << " " << f << std::endl;
	}

}

//Ejercicio 10


bool EsPrimo(int x) {
	if (x > 3) {
		for (int a = 2; a < x; a++) {
			if (x % a == 0)
				return false;
		}
	}
	return true;
}

/*bool EsPrimo(int numero){
if (numero <=0)
return false;
for(int i=2; i < numero;i++){
if(numero % i == 0) 
return false;
}
return true
}*/

int main() {
	int p = PerimetroRectangulo(5, 3);
	std::cout << "El perimetro es:" << p << std::endl;
	std::cout << std::endl;
	float a = AreaTriangulo(5.0f, 3.0f);
	std::cout << "El Area del Triángulo es: " << a << std::endl;
	std::cout << std::endl;
	int e = Mayor(5, 9, 1);
	std::cout << "El numero mayor es: " << e << std::endl;
	std::cout << std::endl;
	int y = Menor(7, 6, 8);
	std::cout << "El numero menor es: " << y << std::endl;

	std::cout << std::endl;
	FilaEstrellas(5);
	std::cout << std::endl;

	MatrizEstrellas(4);
	std::cout << std::endl;

	PiramideEstrellas(6);
	std::cout << std::endl;

	FlechaEstrellas(4);

	std::cout << std::endl;
	Fibonacci(9);
	bool primo = EsPrimo(79);
	bool primo = EsPrimo(52);
	std::cout << primo << std::endl;



	std::cin.get(); system("PAUSE");

}