/*
* Tony Silva 
* CS 5005 - Computing Structures
* Project 1
*/
#include <iostream>
using namespace std;

//Word Token Class
class WordToken{

};
// Date Token Class
class DateToken{

};
// Year Token Class
class YearToken{

};
// Hash Tag Class
class HashTagToken{

};
// Web Address Token
class WebAddressToken{

};
// Twitter Address Token
class TwitterAddressToken{

};

int main(){
	
	
	// scanning document
	char c;
	char i;
	cin.get(c);
	while (!cin.eof()){
		i = c;
		cout << c;
		cin.get(c);
	}

	return 0;
}
