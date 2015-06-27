/*
* Tony Silva 
* CS 5005 - Computing Structures
* Project 1
*/
#include <iostream>
#include <cctype>
#include <ctype.h>
using namespace std;

// Date Token Class
//---------------------------------------------------------------
//---------------------------------------------------------------
class DateToken{

};
//Token Container class
//---------------------------------------------------------------
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
void WordToken::printToken(){
	cout << "<" << WordTokenChar << ">";
}
WordToken::~WordToken(){

}
// Hash Tag Class
//------------------------------------------------------------
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
	cout << "<" << HashTagChar << ">";
}
char* HashTagToken::getToken(){

	return HashTagChar;
}
HashTagToken::~HashTagToken(){
	
}
// Twitter Address Token
//---------------------------------------------------------------
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
	cout << "<" << TwitterAddressChar << ">";
}
char* TwitterAddressToken::getToken(){

	return TwitterAddressChar;
}
void TwitterAddressToken::setToken(char* x){
	TwitterAddressChar = x;
}
TwitterAddressToken::~TwitterAddressToken(){

}
// Web Address Token
//---------------------------------------------------------------
//---------------------------------------------------------------
class WebAddressToken{
private:
	char* WebAddressChar;
public:
	WebAddressToken();
	void printToken();
	char* getToken();
	void setToken(char* x);
	virtual ~WebAddressToken();
};
WebAddressToken::WebAddressToken(){

}
void WebAddressToken::printToken(){
	cout << "<" << WebAddressChar << ">";
}
char* WebAddressToken::getToken(){

	return WebAddressChar;
}
void WebAddressToken::setToken(char* x){
	WebAddressChar = x;
}
WebAddressToken::~WebAddressToken(){

}
// Year Token Class
//---------------------------------------------------------------
//---------------------------------------------------------------
class YearToken{
private: 
	char* YearTokenChar;
public:
	YearToken();
	void printToken();
	char* getToken();
	void setToken(char* x);
	virtual ~YearToken();
};
YearToken::YearToken(){

}
void YearToken::printToken()
{
	cout << "<" << YearTokenChar << ">";
}
char* YearToken::getToken()
{
	return YearTokenChar;
}
void YearToken::setToken(char* x)
{
	YearTokenChar = x;
}
YearToken::~YearToken(){

}
//Function to clear pass array
void emptyString(char* s, int length)
{
	for (int i = 0; i < length; i++)
		s[i] = '\0';
}
//---------------------------------------------------------------
//---------------------------------------------------------------
int main(){
	
	
	// scanning document
	char c;
	int i;
	char pass[142];
	 // this is to pass what is scanned into the setToken methods // I need to put this as a pointer...
	

	
	while (!cin.eof()){
		cin.get(c);
		i = 0;
		emptyString(pass, 142);
		//Test for Twitter Address
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
			cout << c; //printing spaces
			delete TwitterAddObj;
		}
		else if (c == '#') {  //test for HashTags
			//Hash tag token generated
			HashTagToken* hashTagobj = NULL;
			hashTagobj = new HashTagToken();
			while ((c != ' ') && (c != '\'') && (c != '.') && (c != '!') && (c != ':') && (c != '\n') && (c != ','))
			{
				pass[i] = c;   
				i++;
				cin.get(c);
			}
			//establish the object and print
			(*hashTagobj).setToken(pass);
			(*hashTagobj).printToken();
			cout << c; //print spaces after token
			//This is where the token container needs to go.
			delete hashTagobj;
		}  // testing for word tokens
		else if (isalpha(unsigned char(c))){
			WordToken* WordTokenObj = NULL;
			WebAddressToken* WebAddObj = NULL;
			WordTokenObj = new WordToken();
			while ((c != ' ') && (c != '\'') && (c != ':')&&(c!='"') && (c!='.')&&(c != '!') && (c != '\n') && (c != ',')&&(c!='@')&&(c!='-')){

				pass[i] = c;
				i++;
				cin.get(c);
				//checking if it is a webaddress
				if ((pass[0] == 'h') && (pass[1] == 't') && (pass[2] == 't')){
					break;
				}
			}
			if ((pass[0] == 'h') && (pass[1] == 't') && (pass[2] == 't')){
				WebAddObj = new WebAddressToken();
				while ((c != ' ') && (c != '\'') && (c != '!') && (c != '\n') && (c != ',') && (c != '@')){
					pass[i] = c;
					i++;
					cin.get(c);
				}
				(*WebAddObj).setToken(pass);
				(*WebAddObj).printToken();
				cout << c;
			}
			if (!(pass[0] == 'h' && pass[1] == 't'&& pass[2] == 't')){
				(*WordTokenObj).setToken(pass);
				(*WordTokenObj).printToken();
				cout << c; //print the character immediately after token
			}
			delete WordTokenObj;
			delete WebAddObj;
			
		}
		else if (isdigit(unsigned char(c))){


		}
		else{
			cout << c;
		}
		
	 }
		
	return 0;
	}
	
