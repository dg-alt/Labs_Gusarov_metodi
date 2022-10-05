#pragma once
#include <fstream>
#include <iostream>
#include <string>

using std::string;
using std::fstream;
using std::cout;

static class Gusarov_viz
{
public:
	static void EncryptFileA(const string& key, const string& nameFileText, const string& nameFileSave);
	static void DecryptFileA(const string& key, const string& nameFileText, const string& nameFileSave);
};


