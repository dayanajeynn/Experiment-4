#include<iostream>

using namespace std;

void addition()
{
 int x, y, sum;
 
 cout << "Enter two numbers: ";
 cin >> x; cin >> y;
 
 sum = x + y;
 cout << x << " + " << y <<" = " << sum;
 
 return;
}

void subtraction()
{
 int x, y, diff;
 
 cout << "Enter two numbers: ";
 cin >> x; cin >> y;
 
 diff = x - y;
 cout << x << " - " << y <<" = " << diff;
 
 return;
}

void multiplication()
{
 int x, y, prod;
 
 cout << "Enter two numbers: ";
 cin >> x; cin >> y;
 
 prod = x * y;
 cout << x << " * " << y <<" = " << prod;
 
 return;
}

void division()
{
 int x, y, quotient;
 
 cout << "Enter two numbers: ";
 cin >> x; cin >> y;
 
 quotient = x / y;
 cout << x << " / " << y <<" = " << quotient;
 
 return;
}

void modul()
{
 int x, y, modu;
 
 cout << "Enter two numbers: ";
 cin >> x; cin >> y;
 
 modu = x % y;
 cout << x << " % " << y <<" = " << modu;
 
 return;
}


int main()
{
	int operation;
	char cont;
	
	do{
	
		cout << "MENU: " << "\n";
		cout << "1. Add " << "\n";
		cout << "2. Subtract " << "\n";
		cout << "3. Multiply " << "\n";
		cout << "4. Divide " << "\n";
		cout << "5. Modulus " << "\n";
		
		cout << "Enter your choice: ";
		cin >> operation;
switch(operation)
{
	case 1:
	{
		addition();
		break;
	}
	
	case 2:
	{
		subtraction();
		break;
	}
	
	case 3:
	{
		multiplication();
		break;
	}
	
	case 4:
	{
		division();
		break;
	}
	
	case 5:
	{
		modul();
		break;
	}
	
	default:
	cout << "Choose from 1 to 5!" << endl;
	}
	cout << endl << "Enter 'y'to continue: ";
	cin>> cont;
	
	}
	while (cont=='y' || cont=='Y');
	
	return 0;
}

