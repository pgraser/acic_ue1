#include "pch.h"
#include <string.h>
#pragma warning(disable : 4996)

class String
{
private:
	size_t _length;
	char* _str;
public:
	String(const char* str)
	{
		this->_length = strlen(str);
		this->_str = new char[_length+1];
		strcpy(this->_str, str);
	}
	~String()
	{
		delete[] _str;
	}
	const char* c_str(void) const
	{
		return _str;
	}
	size_t GetLength(void) const
	{
		return _length;
	}
	void Concatenate(const char* str)
	{
		
	}
	void Concatenate(String str)
	{

	}
};
