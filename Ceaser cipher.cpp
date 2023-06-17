#include <iostream>

using namespace std;

string encrypt(string s, int n) {
	string a= "";
	for(int i=0; i<s.length();i++){
		char c = s[i];
		
		if (c+n>122){
			c= c + n - 26;
		} else{
			c += n;
		}
		
		a+=c;
	}
	return a;
}

string decrypt(string s, int n) {
	string a= "";
	
	for(int i=0; i<s.length();i++){
		char c = s[i];
		if(c-n<97){
			c = c - n + 26;
		} else {
			c -= n;
		}
		
		a+=c;
	}
	return a;
}

int main(){
	string is, fs;
	int key;
	cin >> is >> key;
	if(key>26) key %=26;
	fs = encrypt(is, key);
	cout << fs << endl;
	cout << decrypt(fs, key);
}
