#include <iostream>
#include <stdlib.h>  // rand(), srand()
#include <windows.h> // time()
#include <math.h>    // библиотека матеши
#include <time.h>
using namespace std;

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	cout << "Задание 1\n\n";
	int arr[5] = { 1,2,3,4,5 };

	int min = MAXINT;
	int max = 0;
	for (int i = 0; i < 5; i++) {

		if (arr[i] < min) {
			min = arr[i];
		}

		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << "Минимум: " << min << "\n";
	cout << "Максимум: " << max << "\n";


	cout << "\n\nЗадание 2\n\n";
	
	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int number = 6;
	int sum = 0;
	
	cout << "Введите число:\n";
	cin >> number;

	for (int i = 0; i < 10; i++) {
		if (arr2[i] < number) {
			sum += arr2[i];
		}
	}
	cout << "Сумма: " << sum;


	cout << "\n\nЗадание 3\n";

	int gr1 = 2; int check = 0;
	int gr2 = 6; int check2 = 0;
	int buffer = 0;
	int arr3[12] = {};
	min = MAXINT;
	max = 0;
	for (int i = 0; i < 12; i++) {
		cout << "\nВведите прибыль за " << i+1 << " месяц:\n";
		cin >> arr3[i];
	}
	cout << "\nВведите первую границу:\n";
	cin >> gr1;
	cout << "\nВведите вторую границу:\n";
	cin >> gr2;
	if (gr1 > gr2) {
		buffer = gr1;
		gr1 = gr2;
		gr2 = buffer;
	}

	for (int i = gr1; i < gr2; i++) {
		if (arr3[i] < min) {
			min = arr3[i];
			check = i;
		}

		if (arr3[i] > max) {
			max = arr3[i];
			check2 = i;
		}
	}
	cout << "\nМинимальная прибыль: " << min << " За " << check+1 << " Месяц.";
	cout << "\nМаксимальная прибыль : " << max << " За " << check2+1 << " Месяц.";


	cout << "\n\nЗадание 4\n\n";

	int otSum = 0; int csum = 0; int sum3 = 0;
	int arrays[10] = { -1,-2,-3,-4,-5,1,2,3,4,5 };
	min = MAXINT; int mini = 0; int one = 0; int two = 0;
	max = 0; int maxi = 0; int sum4 = 0;
	for (int i = 0; i < 10; i++) {
		if (arrays[i] < 0) {
			otSum += arrays[i];
		}
		if (i % 2 == 0) {
			csum += arrays[i];

		}
		if (arrays[i] < 0) {
			two = i;
		}
	}

	for (int i = 10; i >= 0; i--) {
		if (arrays[i] < 0) {
			one = i;
		}
	}

	for (int i = 0; i < 10; i++) {
		if (arrays[i] < min) {
			min = arrays[i];
			mini = i;
		}

		if (arrays[i] > max) {
			max = arrays[i];
			maxi = i;
		}
		if (i > one && i < two) {
			sum4 += arrays[i];
		}
	}

	for (int i = 0; i < 10; i++) {
		if (i > mini && i < maxi) {
			sum3 += arrays[i];
		}

	}
	cout << "\nСумма отрицательных элементов: " << otSum << "\nСумма между min-max: " << sum3 << "\nСумма чётных номеров: " << csum;
	cout << "\nСумма элементов отрицательных чисел: " << sum4;
}