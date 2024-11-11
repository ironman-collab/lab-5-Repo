#include <iostream>
using namespace std;
int main()
{

	//Task-1

	int marks = 0, marks2 = 0, marks3 = 0, Average = 0;
	cout << "Enter marks of first subject =  ";
	cin >> marks;
	cout << "Enter marks of secound subject = ";
	cin >> marks2;
	cout << "Enter the marks for third subject = ";
	cin >> marks3;
	if ((marks + marks2 + marks3) / 3 > 80)
	{
		cout << "You are above standard!" << endl;
		cout << "Admission granted!" << endl;
	}


	////Task-2
	char Alphabet;
	cout << "Enter Alphabet: ";
	cin >> Alphabet;
	if (Alphabet >= 'A' && Alphabet <= 'Z') {
		cout << "The character is capital letter " << endl;
	}
	else {
		cout << "The character is small letter " << endl;
	}

	char alphabet;
	cout << "Enter Alphabet: ";
	cin >> alphabet;
	if (alphabet >= 'a' && alphabet <= 'z') {
		cout << "The character is small letter " << endl;
	}

	else {
		cout << "The character capital  letter " << endl;
	}

	//Task-3
	int n1 = 0, n2 = 0, n3 = 0;

	cout << "Enter first number =  ";
	cin >> n1;
	cout << "Enter second number = ";
	cin >> n2;
	cout << "Enter third number  = ";
	cin >> n3;
	int max_num = n1;
	if (n2 > max_num) {
		max_num = n2;
	}
	if (n3 > max_num) {
		max_num = n3;
	}


	cout << "The maximum number is = " << max_num << endl;
	//Task-4
	int n4 = 0, n5 = 0, n6 = 0;
	cout << "Enter first number : ";
	if (n4 >= 0)
		cin >> n4;
	{
		cout << "The number is positive = " << endl;
		cout << "Enter the second number = ";

	}
	cin >> n5;
	if (n5 == 0);
	{
		cout << "The number is zero" << endl;
		cout << "Enter the third number = ";

	}
	cin >> n6;
	if (n6 <= 0);
	{
		cout << "The number is negative " << endl;
	}
	////Task-5
	int n7 = 0;

	{
		cout << "Enter the score = ";
		cin >> n7;
	}
	if (n7 >= 50)
	{
		cout << "You Paseed " << endl;
	}
	else {
		cout << "You Failed " << endl;
	}
	//Task-6
	int n8 = 0, n9 = 0;

	cout << "Enter first Integers = ";
	cin >> n8;
	cout << "Enter second number = ";
	cin >> n9;

	if (n8 / n9 == 0)
	{
		cout << n8 << "Is Multiplier of " << n9 << endl;

	}
	else
	{
		cout << n8 << "Is Not Multiplier of " << n9 << endl;
	}

	//Task-11
	int age = 0;
	cout << "Enter Age = ";
	cin >> age;
	if (age >= 18)
	{
		cout << "You are eligible for driving licence." << endl;
	}
	else {
		cout << "You are not eligible for driving licence." << endl;
	}

	//Task-14
	int temp = 0;
	cout << "Enter temprature in celsious: " << endl;
	cin >> temp;
	if (temp > 35) {
		cout << "Its hot day ." << endl;
	}
	else {
		cout << "It is a normal day ." << endl;
	}


	

		return 0;


}