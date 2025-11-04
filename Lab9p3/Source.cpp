#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void displayRun(int values[], int size);

int main(){

	int dice[20] = { 1,2,3,4,4,5,1,2,3,6,6,6,6,1,1,3,1,2,4,5 }; //test numbers
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