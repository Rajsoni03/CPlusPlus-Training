#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    int count=0;
    char ch;
	const char *fileName="ques.txt";

	ifstream file;

	file.open(fileName,ios::in);
	if(!file)
	{
		cout<<"Error in opening file!!!"<<endl;

	}

	while (!file.eof())
	{
		file >> ch;
		//cout << ch ;
		count+=1;

	}
	cout<<endl;
	cout<<count-1<<endl;

	file.close();
    cout << "Hello world!" << endl;
    return 0;
}
