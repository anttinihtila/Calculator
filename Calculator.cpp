#include <iostream>

using namespace std;

int main(void)
{
	cout << "Calculator" << endl;
	cout << "----------" << endl;
	cout << "" << endl;

calculator:

	float a;
	float b;
	float result;
	char o;

	cout << "Calculation: ";
	cin >> a >> o >> b;
	cout << "" << endl;

	switch (o)
	{
	case '+':
		result = a + b;
		cout << "The answer: " << result << endl;
		break;
	case '-':
		result = a - b;
		cout << "The answer: " << result << endl;
		break;
	case '*':
		result = a * b;
		cout << "The answer: " << result << endl;
		break;
	case '/':
		result = a / b;
		cout << "The answer: " << result << endl;
		break;
	}

n:
	cout << "" << endl;
	char n;
	cout << "New calculation (y) / Exit (n) ";
	cin >> n;
	cout << "" << endl;
	if (n == 'y') { goto calculator; }
	else if (n == 'n') { goto exit; }
	else { goto n; }

exit:
	return 0;
}
