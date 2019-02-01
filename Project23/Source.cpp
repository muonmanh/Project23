#include<iostream>
using namespace std;
struct fraction {
	int numerator;
	int denominator;
	void input();
	void output();
};
void fraction::input() {
	cout << "Enter x: ";
	cin >> numerator;

	cout << "Enter denomiator: ";
	cin >> denominator;

}
void fraction::output()
{
	cout << numerator;
	cout << denominator;
}
void main()
{
	
}
