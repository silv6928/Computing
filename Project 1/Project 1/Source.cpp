/*
* Tony Silva 
* CS 5005 - Computing Structures
* Project 1
*/
#include <iostream>
#include <ctype.h>
using namespace std;

// Date Token Class
//---------------------------------------------------------------
class DateToken{

};
// Year Token Class
//---------------------------------------------------------------
class YearToken{

};
// Web Address Token
//---------------------------------------------------------------
class WebAddressToken{

};

//Token Container class
//---------------------------------------------------------------
class TokenContainer{
private:
	int numTokens;
public:
	TokenContainer();
	int getNumTokens();
	void setNumTokens(int x);
	virtual ~TokenContainer();
};
TokenContainer::TokenContainer(){

}
void TokenContainer::setNumTokens(int x){
	numTokens = x;
}
int TokenContainer::getNumTokens(){
	return numTokens;
}
TokenContainer::~TokenContainer(){

}
//Word Token Class
//---------------------------------------------------------------
class WordToken{
private:
	char* WordTokenChar;
public:
	WordToken();
	void printToken();
	char* getToken();
	void setToken(char* x);
	virtual ~WordToken();
};
//Word Token constructor
WordToken::WordToken(){

}
void WordToken::setToken(char* x){

	WordTokenChar = x;

}
char* WordToken::getToken(){
	return WordTokenChar; // might need to return the address on this.
}
WordToken::~WordToken(){

}
// Hash Tag Class
//------------------------------------------------------------
class HashTagToken{
public:
	HashTagToken();
	void printToken();
	char* getToken();
	void setToken(char* x);
	virtual ~HashTagToken();
private:
	char* HashTagChar;
};
// HashTag default constructor
HashTagToken::HashTagToken() {

}
//HashTag Set Token class
void HashTagToken::setToken(char* x){
	HashTagChar = x;
}
void HashTagToken::printToken(){
	cout << " <" << HashTagChar << "> ";
}
char* HashTagToken::getToken(){

	return HashTagChar;
}
HashTagToken::~HashTagToken(){
	
}
// Twitter Address Token
//---------------------------------------------------------------
class TwitterAddressToken{
private:
	char* TwitterAddressChar;
public:
	TwitterAddressToken();
	void printToken();
	char* getToken();
	void setToken(char* x);
	virtual ~TwitterAddressToken();
};
TwitterAddressToken::TwitterAddressToken(){

}
void TwitterAddressToken::printToken(){
	cout << "<" << TwitterAddressChar << "> ";
}
char* TwitterAddressToken::getToken(){

	return TwitterAddressChar;
}
void TwitterAddressToken::setToken(char* x){
	TwitterAddressChar = x;
}
TwitterAddressToken::~TwitterAddressToken(){

}
void emptyString(char* s, int length)
{
	for (int i = 0; i < length; i++)
		s[i] = '\0';
}
//------------------------------------------------------------
int main(){
	
	
	// scanning document
	char c;
	int i;
	char pass[142];
	 // this is to pass what is scanned into the setToken methods // I need to put this as a pointer...
	

	cin.get(c);
	while (!cin.eof()){
		i = 0;
		emptyString(pass, 142);
		if (c == '@'){
			TwitterAddressToken* TwitterAddObj = NULL;
			TwitterAddObj = new TwitterAddressToken();
			while ((c != ' ')&&(c != '\'')&&(c != '.')&&(c != '!') && (c != ':')&&(c!= '\n')&&(c!=',')){
				pass[i] = c;
				cin.get(c);
				i++;
			}
			(*TwitterAddObj).setToken(pass);
			(*TwitterAddObj).printToken();
			delete TwitterAddObj;
		}
		else if (c == '#') {
			HashTagToken* hashTagobj = NULL;
			hashTagobj = new HashTagToken();
			
			while ((c != ' ') && (c != '\'') && (c != '.') && (c != '!') && (c != ':') && (c != '\n') && (c != ','))
			{
				pass[i] = c;   //generating character array to set the Token
				i++;
				cin.get(c);
			}
			(*hashTagobj).setToken(pass);
			(*hashTagobj).printToken();
			delete hashTagobj;
		} 
		else if (c == '\n'){
			cout << c;
		}
		
		cin.get(c);
		
		}
		
	return 0;
	}
	
