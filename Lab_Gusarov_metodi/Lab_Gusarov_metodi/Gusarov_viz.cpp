#include "Gusarov_viz.h"
#include <fstream>


void Gusarov_viz::EncryptFileA(const string& key, const string& nameFileText, const string& nameFileSave)
{
	fstream fileText;
	fstream fileSave;
	fileText.open(nameFileText + ".txt", std::ios::in);
	fileSave.open(nameFileSave + ".txt", std::ios::out);
	size_t counterIndexKey = 0;
	char symbol;
	while (fileText.is_open() && fileSave.is_open())
	{

		fileText.get(symbol);
		symbol += key[counterIndexKey];
		fileSave << symbol;
		++counterIndexKey;
		if (counterIndexKey == key.size())
		{
			counterIndexKey = 0;
		}
		if (fileText.peek() == EOF)
		{
			break;
		}
	}
	fileText.close();
	fileSave.close();
}

void Gusarov_viz::DecryptFileA(const string& key, const string& nameFileText, const string& nameFileSave)
{
	fstream fileText;
	fstream fileSave;
	fileText.open(nameFileText + ".txt", std::ios::in);
	fileSave.open(nameFileSave + ".txt", std::ios::out);
	size_t counterIndexKey = 0;
	char symbol;
	while (fileText.is_open() && fileSave.is_open())
	{
		fileText.get(symbol);
		symbol -= key[counterIndexKey];
		fileSave << symbol;
		++counterIndexKey;
		if (counterIndexKey == key.size())
		{
			counterIndexKey = 0;
		}
		if (fileText.peek() == EOF)
		{
			break;
		}
	}
	fileText.close();
	fileSave.close();
}
