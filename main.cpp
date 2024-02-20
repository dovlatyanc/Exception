#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>
using namespace std;\
//int fTest(int x, int y, bool is)
//{
//	if (!x)
//		throw;
//	if (!y)
//		throw;
//	if (!is)
//		throw;
//	//здесь пишем логику функции
//}
//int divideNumbers(int x, int y) {
//	if (!y)
//		throw "Oh... divide by zero!!";
//
//		return x / y;
//	
//}
//int main()
//{
//	cout << "Enter \'y\': "<<endl;
//	int x = 10, y;
//	cin >> y;
//
//	try
//	{
//		//попробовать выполнить это
//		int z = divideNumbers(x, y);
//	}
//	catch (const char*errorMassage)
//	{
//		//выполни это, если не удалось
//		cout << errorMassage;
//	}
//
//	return 0;
//}
//«адание
// 1.
// смоделировать выброс исключени€ при выходе
// за пределы диапазона массива
// допустим при записив 11 элемент при размере массива 10;
// 2. попытка открыти€ файла которого нет или попытка записи в файл который закрыт  
//   


int main()
{
	const int size = 3;
	int array[size]{1,2,3};
	try
	{
		

		for (int i = 0; i < size + 1; i++) {


			if (i >= size) {
				throw string("You have exceeded the size of the array");
			}
			array[i] = rand()%10;
		}
	}
	catch (const string&e)
	{
		cout<< e<<endl;
	}
	

	try
	{
	
		ifstream File("666.txt");
		if (!File.is_open())
			throw string("the file is missing");
	}
	catch (const string& ex)
	{

		cout << ex << endl;
	}	


	return 0;
}