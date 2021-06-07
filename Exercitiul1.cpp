//Write a class MyString which has only one private member: a char*. 
//Write in this class a copy constructor and copy assignment operator, a move constructor and move assignment operator and a concatenate function.

#include <iostream>

using namespace std;

class MyString {
	char* character;

	MyString(char* character)
	{
		this->character = character;
	}
	//Copy constructor
	MyString(const MyString& sir)
	{
		character = new char[strlen(character)];
		for (int i = 0; i < strlen(character); i++)
		{
			character[i] = sir.character[i];
		}
	}
	//Copy asignment operator
	MyString& operator=(const MyString& sir)
	{
		if (&sir != this)
		{
			if (character)
				delete[] character;

			character = new char[strlen(character)];
			for (int i = 0; i < strlen(character); i++)
			{
				character[i] = sir.character[i];
			}
		}
		return *this;
	}
	//Move Constructor
	MyString(MyString&& sir)
	{
		character = sir.character;
		sir.character = nullptr;
	}

	//Move assignment operator
	MyString& operator=(MyString&& sir)
	{
		if (&sir != this)
		{
			if (character)
				delete[] character;

			character = sir.character;
			sir.character = nullptr;
		}
		return *this;
	}

	~MyString()
	{
		if (character)
		{
			delete character;
			character = nullptr;
		}
	}
};
int main()
{
	
	return 0;
}
