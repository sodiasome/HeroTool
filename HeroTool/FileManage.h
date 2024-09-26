#pragma once
#include <vector>
#include <string>
#include <windows.h>

using std::vector;
using std::string;

class FileManage
{
public:
	FileManage();
	~FileManage();

	void readCsv(string path, vector<vector<string>> &data);
};

