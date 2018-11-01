#include <string.h>

class String
{
private:
	char* str;
	size_t length;
public:
	String(const char* str)
	{
		this->length = strlen(str);
		this->str = new char[length+1];
		strcpy(this->str, str);
	}
	~String()
	{
		delete[] str;
	}
	const char* c_str(void) const
	{
		return str;
	}
	size_t GetLength(void) const
	{
		return length;
	}
	void Concatenate(const char* str)
	{
		
	}
	void Concatenate(String str)
	{

	}
};
