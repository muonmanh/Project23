#include<iostream>
using namespace std;
struct fraction {
	int num;
	int y;
	void input();
	void output();
};
void fraction::input() {
	cout << "Enter num: ";
	cin >> num;

	cout << "Enter y: ";
	cin >> y;

}
void fraction::output()
{
	cout << num;
	cout << y;
}
void main()
{
	
}