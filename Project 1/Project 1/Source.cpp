/*
* Tony Silva 
* CS 5005 - Computing Structures
* Project 1
*/
#include <iostream>
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
// Twitter Address Token
//---------------------------------------------------------------
class TwitterAddressToken{

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
TokenContainer::TokenContainer(){

}
//HashTag Token Container Sub Class
//---------------------------------------------------------------
class HashTagTokenContainer : public TokenContainer{
private:
	HashTagToken* tokenList[200];
public:
	HashTagTokenContainer();
	void printTokens();
	void addToken(HashTagToken*);
	virtual ~HashTagTokenContainer();
};
HashTagTokenContainer::HashTagTokenContainer(){

}
void HashTagTokenContainer::addToken(HashTagToken* hashtag){

}
void HashTagTokenContainer::printTokens(){

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
	cout << "Test Token was created" << endl;
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
	cout << "Token destroyed" << endl;
}

//------------------------------------------------------------
int main(){
	
	
	// scanning document
	char c;
	int count = 1;
	int i = 0;
	 // this is to pass what is scanned into the setToken methods // I need to put this as a pointer...
	

	cin.get(c);
	while (!cin.eof()){
		if (c == '#') {
			HashTagToken* hashTagobj = NULL;
			hashTagobj = new HashTagToken();
			char pass[141];
			while (c != ' ')
			{
				pass[i] = c;   //generating character array to set the Token
				i++;
				cin.get(c);
			}
			
			pass[i] = '\0';
			i = 0;
			(*hashTagobj).setToken(pass);
			(*hashTagobj).printToken();
			delete hashTagobj;
		} 
		else 
		{
						
			//cout << c;
					
		}
		
		cin.get(c);
	}
	return 0;
}
