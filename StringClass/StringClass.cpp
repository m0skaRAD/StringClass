#include <iostream>
using namespace std;

class String
{
private:
	int _size;
	char* _text;
public:
	String() {
		_size = 80;
		_text = new char[_size];
		_text[0] = ' ';
	}
	String(int size) {
		_size = size;
		_text = new char[_size];
		_text[0] = ' ';
	}
	String(const char* text) {
		_size = strlen(text) + 1;
		_text = new char[_size];
		strcpy_s(_text, _size, text);
	}

	String(const String& other) {
		_size = other._size;
		_text = new char[_size];
		strcpy_s(_text, _size, other._text);
	}
	void write() {
		cout << "Write a line: ";
		cin.getline(_text, _size);
	}

	void show() {
		cout << _text << endl;;
	}

	~String() {
		delete[] _text;
	}
};

int main()
{
    String s1;
    s1.write();
    s1.show();

    String s2("Hello");
    s2.show();
}
