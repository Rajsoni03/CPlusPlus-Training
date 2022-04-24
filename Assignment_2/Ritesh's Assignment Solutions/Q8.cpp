#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main (){
	char sentance [100] ="anteater birthday category dumpster envy finagle geometry done for sure";
	int words=0;
	int c=0;
	while(strcmp("done", sentance)!=1){
		if (sentance[c]==' '){
			words+=1;
		}
		c+=1;
	} 
	cout << c<<endl;
	words--;
	cout << words;

	return 0;
}