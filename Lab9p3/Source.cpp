#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

void displayRun(int values[], int size);

bool hasRun(int values[], int size);

int main() {
	const int SIZE = 20;
	int dice[SIZE];
	srand(time(0));

	for (int i = 0; i < SIZE; i++) {
		dice[i] = rand() % (6 - 1 + 1) + 1;
	}
	while (!hasRun(dice, SIZE)) {
		for (int i = 0; i < SIZE; i++) {
			dice[i] = rand() % (6 - 1 + 1) + 1;
		}
	}

	if (hasRun(dice, 20)) {
		cout << "Has run: ";
	}
	else {
		cout << "No run: ";
	}

	displayRun(dice, 20);


}

void displayRun(int values[], int size) {
	for (int i = 0; i < size; i++) {
		if (i < size - 1 && values[i] == values[i + 1]) {
			cout << "(" << values[i];
			while (i < size - 1 && values[i] == values[i + 1]) {
				i++;
				cout << " " << values[i];

			}
			cout << ")";

		}
		else {
			cout << values[i];
		}
		if (i != size - 1) {
			cout << " ";

		}

	}
}
bool hasRun(int values[], int size) {
	for (int i = 0; i < size - 1; i++) {
		if (values[i] == values[i + 1]) {
			return true;
		}
	}
	return false;
}
