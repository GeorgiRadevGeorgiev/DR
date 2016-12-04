#include <iostream>

using namespace std;

int main() {

	const int size = 5;
	int countMain = 0, count = 0;
	int masiv[size][size] = {1,3,6,10,15,2,5,9,14,19,4,8,13,18,22,7,12,17,21,24,11,16,20,23,25};


	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << "Input element [" << i << "] [" << j << "] : ";
			cin >> masiv[i][j];
			cout << endl;
		}
	}


	cout << "\nThe array is :" << endl;

	for (int i1 = 0; i1 < size; i1++) {
		cout << endl;
		for (int j1 = 0; j1 < size; j1++) {
			cout << masiv[i1][j1] << " ";
		}
	}

	cout << endl;
	cout << "\nThe clockwise spiral is :" << endl;
	cout << endl;

	do {

		for (int i2 = count; i2 >= )



		if (count < size)
			count++;

		countMain++;

	} while (countMain != 2 * size - 1);

	system("pause");
	return 0;
}