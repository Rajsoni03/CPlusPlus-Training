#include <iostream>
#include <vector>
#include <set>
#include <climits>
using namespace std;

int main(){
	short N, P;
	cin >> N;
	vector<short> vec(N);
	for (short& i : vec)
		cin >> i;
	cin >> P;
	vector<set<short>> groups;

	short P1, P2;
	while(P--){
		cin >> P1 >> P2;
		if (groups.size()==0){
			groups.push_back({P1, P2});
			// cout << "new" << endl;
		}
		else{
			for (unsigned i = 0; i < groups.size(); i++){
				if (groups[i].count(P1) || groups[i].count(P2)){
					groups[i].insert(P1);
					groups[i].insert(P2);
					// cout << "match" << endl;
				}
				else{
					groups.push_back({P1, P2});
					// cout << "new" << endl;
				}
			}	
		}
	}

	short max = SHRT_MIN;
	for (unsigned i = 0; i < groups.size(); i++){
		short sum = 0;
		for (short v : groups[i]){
			sum += vec[v-1];
			// cout << v << " ";
		}
		if (max < sum) max = sum;
		// cout << endl;
	}

	for (short val = 1; val <= N; val++){
		bool flag = 0;
		for (unsigned i = 0; i < groups.size(); i++){
			if (groups[i].count(val)){
				flag = 1;
			}
		}
		if (flag == 0) {
			// groups.push_back({val});
			if (max < vec[val]) max = vec[val];
		}
	}
	
	// cout << "result : " << max;
	cout << max;
	return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     // cout<<"Enter N";
//     int N;
//     cin>>N;
//     vector<int>funds;
//     for(int i=0;i<N;i++){
//         // cout<<"enter the value "<<i+1<<endl;
//         int n;
//         cin>>n;
//         funds.push_back(n);
//     }
    
//     // for(int i=0;i<N;i++){
//     //     cout<<funds[i]<<" ";
//     // }
    
//     // cout<<"Enter the value of P ";
//     int P;
//     cin>>P;
//     int m1,m2;
//     vector<set<int>>pairs;
//     for(int i=0;i<P;i++){
//         cin>>m1>>m2;
//         if(pairs.size()==0){
//             pairs.push_back({m1,m2});
//         }
//         else{
//             for(int i=0;i<pairs.size();i++){
//                 if(pairs[i].count(m1)||pairs[i].count(m2)){
//                     pairs[i].insert(m1);
//                     pairs[i].insert(m2);
//                 }
//                 else{
//                     pairs.push_back({m1,m2});
//                 }
//             }
//         }
//     }
    
//     set<int>another;
//     for (int i = 0; i < pairs.size(); i++) {
//         for (auto x : pairs[i])
//             another.insert(x);
//     }
//     for (int i = 0; i < N; i++) {
//         // for (auto x : another)
//             if(another.count(i+1)==0){pairs.push_back({i+1});}
//             // cout<<pairs.size()<<endl;
//     }
//     // set
//     int max = INT_MIN;
//     for (int i = 0; i < pairs.size(); i++) {
//         int curr=0;
//         for (auto x : pairs[i])
//             curr+= funds[x-1] ;
//         // cout << endl;
//         if(curr>max){max=curr;}
//     }
//     cout<<max;

// }