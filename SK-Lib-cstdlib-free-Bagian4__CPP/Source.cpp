#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
	Source by Programiz (https://www.programiz.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

using namespace std;

int main() {
	int* ptr;
	ptr = (int*)malloc(5 * sizeof(int));
	cout << "Enter 5 integers" << endl;

	for (int i = 0; i < 5; i++) {
		cin >> *(ptr + i);
	}

	cout << endl << "User entered value" << endl;

	for (int i = 0; i < 5; i++) {
		cout << *(ptr + i) << " ";
	}
	free(ptr);

	cout << "Garbage Value" << endl;

	for (int i = 0; i < 5; i++) {
		cout << *(ptr + i) << " ";
	}

	_getch();
	return 0;
}