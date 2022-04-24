#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string s ;
	const char *fileName="contributor.txt";

	ifstream file;

	file.open(fileName,ios::in);
	if(!file)
	{
		cout<<"Error in opening file!!!"<<endl;

	}

	while (!file.eof())
	{
	    getline(file,s);
	    cout<<s<<endl;
	}


	file.close();
	cout << "Hello world!" << endl;
    return 0;
}
