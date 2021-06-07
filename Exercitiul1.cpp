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