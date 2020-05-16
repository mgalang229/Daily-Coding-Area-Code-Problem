#include <bits/stdc++.h>

using namespace std;

void decode(){
	string s;
	getline(cin, s);
	bool ch = false;
	for(int i = 0; i < s.size(); i++){
		if(ispunct(s[i])){
			ch = true;
		}
	}
	if(ch == true){
		cout << "INVALID";
	} else{
		cout << "VALID";
	}
	cout << "\n";
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t = 4;
	while(t--){
		decode();
	}
	return 0;
}
