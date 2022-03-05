#include <iostream>
#include <string>
using namespace std;

int CalcOptSteps(string &S, string &T){
	int result = 0;
	int size = T.size() - 1;

	for (int i = 0, ssize = S.size(); i < ssize; i++){
		unsigned index = T.find(S[i]);
		if (index != string::npos){
			result += 1 + (size-index);
			if (index == 0) continue;
			result += 2 + (index);
		}
	}

	// int match;
	// for (int i = 0, ssize = S.size(); i <= ssize; i++){
	// 	unsigned index = T.find(S[i]);
	// 	if (index != string::npos){
	// 		match=0;
	// 		for (int j = 0; j <= size; j++){
	// 			if (T[i]==S[i+j]){
	// 				match++;
	// 			}
	// 		}
	// 		result += 1 + (size-match);
	// 		cout << S[i] << " : " << match << endl;
	// 		if (index == 0) continue;
	// 		result += (2*match);
	// 		cout << "\b" << S[i] << " : " << result << endl;
	// 	}
	// }


	return result;
}


int main(){
	string S;
	string T;

	getline(cin, S);
	getline(cin, T);

	cout << CalcOptSteps(S, T) << endl;
	
	return 0;
}