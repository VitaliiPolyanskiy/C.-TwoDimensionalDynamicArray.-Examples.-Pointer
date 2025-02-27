﻿#include <iostream>
#include <ctime>
#include "OneDimensionalArray.h"
#include "TwoDimensionalArray.h"

using namespace std;

void main()
{
	srand(time(0));
	int **ptr, rows, cols, index;
	cout << "Enter quantity of rows and cols: ";
	cin >> rows >> cols;
	ptr = Allocate(rows, cols);
	Init(ptr, rows, cols);
	Print(ptr, rows, cols);	

	int *mas = Allocate(cols);
	Init(mas, cols);
	Print(mas, cols);

	ptr = AddStringEnd(ptr, &rows, cols, mas);
	Print(ptr, rows, cols);

	cout << "Enter an index to insert: ";
	cin >> index;
	Init(mas, cols);
	Print(mas, cols);

	ptr = InsertString(ptr, &rows, cols, index, mas);
	Print(ptr, rows, cols);

	int *mas2 = Allocate(rows);
	Init(mas2, rows);
	Print(mas2, rows);

	ptr = AddColumnEnd(ptr, rows, &cols, mas2);
	Print(ptr, rows, cols);

	cout << "Enter an index to insert: ";
	cin >> index;
	Init(mas2, rows);
	Print(mas2, rows);

	ptr = InsertColumn(ptr, rows, &cols, index, mas2);
	Print(ptr, rows, cols);

	Free(mas);
	Free(mas2);
	Free(ptr, rows);
}