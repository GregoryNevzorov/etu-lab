﻿#include <iostream>
#include <cstdlib>
#include <chrono>
using namespace std;

//Функция для вывода массива в консоль
//Если значение элемента массива меньше 10 (только 1 разряд), перед ним в консоль печатается дополнительный пробел.
void print_array(int N, int i, int j, int random_array[])
{
	for (i; i < N; i++)
	{
		j += 1;
		if (j % 10 == 0)
		{
			if (random_array[i] >= 10)
				cout << random_array[i] << "\n";
			else
				cout << " " << random_array[i] << "\n";
		}
		else
		{
			if (random_array[i] >= 10)
				cout << random_array[i] << " ";
			else
				cout << " " << random_array[i] << " ";
		}
	}
}

int main()
{
	char end = 'y';
	while (end == 'y' )
	{
		//Размер массива (Натуральные числа, "0" не включен).
		const int N = 100;
		int random_array[N];
		//Счетчики для циклов for.
		int i = 0;
		int j = 0;
		//Цикл заполняет массив random_array случайными значениями в диапазоне от 0 до 99 (int).
		srand(time(NULL));
		for (i; i < N; i++) random_array[i] = rand() % 100;
		//Сбрасываем переменную i.
		i = 0;
		//Теперь вывод массива в консоль вынесен в отдельную функцию - print_array.
		cout << "random_array before sorting:\n\n";
		print_array(N, i, j, random_array);


		//Bubble sort
		int counter = N - 1;
		int exchange;
		do
		{
			j = 0;
			for (i; i < counter; i++)
			{
				if (random_array[i] > random_array[i + 1])
				{
					exchange = random_array[i];
					random_array[i] = random_array[i + 1];
					random_array[i + 1] = exchange;
					j += 1;
				}
			}
			counter -= 1;
			i = 0;
		} while (j != 0);
		//Сбрасываем переменные (i и j уже равны 0).
		counter = 0;
		exchange = 0;
		//Распечатываем отсортированный массив
		cout << "\nBubble sort:\n\n";
		print_array(N, i, j, random_array);


		//Shaker sort


		//Проверка на повторный запуск программы
		cout << "Run this program again now? (y / n = any other character)";
		cin >> end;
	}
	return 0;
}