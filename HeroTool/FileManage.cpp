#include "FileManage.h"

#include <fstream>
#include <sstream>

using std::ifstream;
using std::istringstream;

FileManage::FileManage()
{

}

FileManage::~FileManage()
{
}

void FileManage::readCsv(string path, vector<vector<string>> &data)
{
	//std::wifstream file(path);
	//file.imbue(std::locale("zh_CN.UTF-8"));
	//std::wstring line;
	//while (std::getline(file, line))
	//{
	//	vector<wstring> elems;
	//	split(line, ',', elems);
	//	data.push_back(elems);
	//}
	//file.close();


	ifstream csvFile(path, std::ios::in);
	if (!csvFile.is_open())
	{
		exit(1);
	}
	else 
	{
		string line;

		vector<string> words; //声明一个字符串向量
		string word;
		getline(csvFile, line);


		istringstream sin;
		while (getline(csvFile, line))
		{
			words.clear();
			sin.clear();

			sin.str(line);
			while (getline(sin, word, ','))
			{
				words.push_back(word); 
			}
			data.push_back(words);
		}
		csvFile.close();
	}
}