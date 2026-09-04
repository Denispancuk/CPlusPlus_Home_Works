#include <iostream>
using namespace std;
int main()
{
	/*const int USA = 1;
	const int France = 33;
	const int Ukraine = 380;
	const int Italy = 39;
	const int Australia = 61;*/


	/*enum countries { USA = 1, France = 33, Ukraine = 380, Italy = 39, Australia = 61 };
	cout << USA << endl;
	cout << Ukraine << endl;
	enum genres {Comedy, Fantasy, Novel, Opovidanya, FairyTales};
	genres genre;
	genre = Comedy;
	cout << Comedy << endl;
	enum coins { penny = 1, nickel = 5, dime = 10, quarter = 25, half = 50, dollar_coin = 100 };
	int coin;
	cout << "Enter value of American coin: ";
	cin >> coin;
	switch (coin)
	{
	case penny:
		cout << "Penny is 1 cent" << endl;
		break;
	case nickel:
		cout << "Nickel is 5 cent" << endl;
		break;
	case dime:
		cout << "Dime is 10 cent" << endl;
		break;
	case quarter:
		cout << "Quarter is 25 cent" << endl;
		break;
	case half:
		cout << "half is 50 cent" << endl;
		break;
	case dollar_coin:
		cout << "dollar_coin is 100 cent" << endl;
		break;
	default:
		cout << "Not coin" << endl;
		break;
	}*/
	//int counter = 0;
	//while (counter < 15)
	//{
	//    ++counter;//increment
	//    cout << "I did " << counter << " set of squarts" << endl;
	//}

	//int seats = 0;
	//do
	//{
	//    ++seats;//increment
	//    cout << "I did " << seats << " set of squarts" << endl;
	//} while (seats < 15);
	/*float a, b, res;
	char key;*/

	/*cout << "Enter a : "; cin >> a;
	cout << "Enter b : "; cin >> b;
	cout << "\tChoose the operation : " << endl;;
	cout << " [+] - add number" << endl;
	cout << " [-] - sub number" << endl;
	cout << " [*] - multy number" << endl;
	cout << " [/] - div number" << endl;
	cout << " [0] - exit" << endl;
	cin >> key;*/
	/*while (key != 'e') {
		{


			switch (key)
			{
			default:
				cout << "Error choice!!!!" << endl;
				break;
			case 'e':
				cout << "Have a nice day" << endl;
			case '+':
				res = a + b;
				cout << "Resualt = " << res << endl;
				break;
			case '-':
				res = a - b;
				cout << "Enter a : "; cin >> a;
				cout << "Enter b : "; cin >> b;

			}
			cout << "\tChoose the operation : " << endl;;
			cout << " [+] - add number" << endl;
			cout << " [-] - sub number" << endl;
			cout << " [*] - multy number" << endl;
			cout << " [/] - div number" << endl;
			cout << " [0] - exit" << endl;
			cin >> key;
		}
	}*/
	/*do
	{
		cout << "Enter a : "; cin >> a;
		cout << "Enter b : "; cin >> b;
		cout << "\tChoose the operation : " << endl;;
		cout << " [+] - add number" << endl;
		cout << " [-] - sub number" << endl;
		cout << " [*] - multy number" << endl;
		cout << " [/] - div number" << endl;
		cout << " [0] - exit" << endl;
		cin >> key;
		switch (key)
		{
		default:
			cout << "Error choice!!!!" << endl;
			break;
		case '+':
			res = a + b;
			cout << "Resualt = " << res << endl;
			break;
		case '-':
			res = a - b;
			cout << "Resualt = " << res << endl;
			break;
		case '*':
			res = a * b;
			cout << "Resualt = " << res << endl;
			break;
		case '/':
			res = a / b;
			cout << "Resualt = " << res << endl;
			break;
		}
	} while (key != 'e');*/
	/*int i = 1;
	for (int i = 1; i <= 10; i+=2)
	{
		cout << i << " ";
	}
	cout << endl;
	float x = 1;
	for (; x <= 20; x+=0.2)
	{
		cout << x << " ";
	}
	cout << endl;
	for (int i = 0; i < 5;) {
		cout << i << " ";
		i++;
	}
	for (int i = 0;;i++) {
		cout << i << " ";
		if (i == 5)
			break;
	}*/
	int MagicNumber = 2;
	cout << "===============================" << endl;
	cout << "\tMy magic number between 1 and 10: " << endl;
	cout << "===============================" << endl;
	int user = 0;
	for (int i = 1; i <= 5; i++)
	{
		cout << "Your Number ??? -->";
		cin >> user;
		if (user == MagicNumber) {
			cout << "Congratilation!!! You are winner!!!";
			break;
		}
		else {
			cout << "thats not my number" << endl;
		}
		if (i == 5) {
			cout << "You loserrr!!!";
		}
	}
}