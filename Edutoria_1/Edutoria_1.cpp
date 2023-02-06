#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Ru");
	//Ex. 1
	const int ROWS = 10;
	const int COLS = 10;
	int stolbec = 0, stroka = 0, K = 0, s = 1;

	int** arr = new int*[ROWS];
	for (int i = 0; i < ROWS; i++) {
		arr[i] = new int[COLS];
	}
	while (stroka < ROWS) {
		arr[stroka][stolbec] = K++;
		stolbec += s;
		if (stolbec == COLS - 1) {
			arr[stroka][stolbec] = K++;
			stroka++;
			stolbec = -1;
		}
		else if (stolbec == 0) {
			arr[stroka][stolbec] = K--;
		}
	}
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}
	
	return 0;
}
