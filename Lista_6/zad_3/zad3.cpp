#include "stos.h"
#include <iostream>
using namespace std;

int main()
{
	Stos nowyStos;
	nowyStos.push(8); // dodajemy liczby na stos
	nowyStos.push(4);
	nowyStos.push(3);
	nowyStos.pop(); // usunięcie pierwszej liczby na wierzchołku stosu

	cout << "Liczba na szczycie stosu to: " << nowyStos.top() << endl; // wypisanie liczby znajduj�cej si� aktualnie na wierzcho�ku stosu

	Stos kopia_nowyStos(nowyStos);// użycie konstruktora kopiującego
	kopia_nowyStos.push(1); // dodajemy liczby na kopię nowego stosu
	kopia_nowyStos.push(9);
	kopia_nowyStos.pop(); // usunięcie pierwszej liczby na wierzcho�ku nowego stosu

	cout << "Liczba na szczycie kopii nowego stosu to: " << kopia_nowyStos.top() << endl; // wypisanie liczby znajduj�cej si� aktualnie na wierzcho�ku stosu

	Stos stos_przypisanie = kopia_nowyStos; // Użycie operatora przypisania
	stos_przypisanie.push(9);
	cout << "Liczba na wierzcholku przypisanego stosu: " << stos_przypisanie.top()<< endl;

	cout << "Stos: " << stos_przypisanie << endl; // Użycie operatora strumieniowego
}