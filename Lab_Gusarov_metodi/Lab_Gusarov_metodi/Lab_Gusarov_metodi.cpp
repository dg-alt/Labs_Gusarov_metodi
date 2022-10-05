#include "Gusarov_viz.h"
#include <string>
#include <iostream>

using namespace std;

using std::string;
using std::cout;
using std::cin;

int main()
{


	setlocale(LC_CTYPE, ".1251");

	string key;
	string nameFile;
	bool flag = true;
	int command;
	cout << "Введите команду: " << endl;
	cin >> command;
	while (flag)
	{
		switch (command)
		{
		case 0:
		{
			cout << "Введите имя файла: ";
			cin >> nameFile;
			cout << "Введите ключ: ";
			cin >> key;
			Gusarov_viz::EncryptFileA(key, nameFile, "Enc" + nameFile);
			cin.clear();
			system("cls");
			break;
		}
		case 1:
		{
			cout << "Введите имя файла: ";
			cin >> nameFile;
			cout << "Введите ключ: ";
			cin >> key;
			Gusarov_viz::DecryptFileA(key, nameFile, "Dec" + nameFile);
			cin.clear();
			system("cls");
			break;
		}
		case -1:
		{
			system("cls");
			flag = false;
			break;
		}
		}
	}

	return 0;
}