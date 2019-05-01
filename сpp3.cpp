#include "pch.h"
#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");

	const int size = 6; // 6 символов, т.к. последнее место отводится под нуль-терминатор
	char str[size];
	std::cout << "Введите слово из пяти символов" << std::endl << std::endl;
	std::cin >> str;

	bool flag = false;
	if ((str[0] == str[size - 2]) && (str[1] == str[size - 3]))
		std::cout << "Слово является полиндромом";
	else
		std::cout << "Слово не является полиндромом";

}

