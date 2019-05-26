#include<iostream>
using namespace std;
template<class T>
void swap1(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<>
void swap1<char>(char& a, char& b)
{
	char c;
	c = a;
	a = b;
	b = c;
}


int main()
{
	char s='a', s1 = 'b';
	int a = 1, b = 2;
	swap1(s, s1);
	swap1(a, b);

	cout << s << s1 << endl;
	cout << a << " " << b;

}