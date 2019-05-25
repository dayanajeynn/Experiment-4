#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int arrsize, num[100], i, j, x;
	cout << "Enter the size of array: ";
	cin >> arrsize;
	cout << "Enter the elements: ";
	for(i=0;i<arrsize;i++)
	{
		cin >> num[i];
	}
		cout << "Your data: ";
		for(i=0;i<arrsize;i++)
	{
		cout << num[i] << " ";
	}
	
	cout << endl; 
	cout << "Selection sorting..." << endl;
	for(i=0;i<arrsize;i++)
	{
		for(j=i+1; j<arrsize; j++)
		{
			if(num[i] > num[j])
			{
				x=num[i];
				num[i] = num[j];
				num[j]=x;
			}
		}
	}

	cout << "After using selection sort " << "\n";
	cout << "Sorted data: ";
		for(i=0;i<arrsize;i++)
	{
		cout << num[i] << " ";
	}
	_getch();
	return 0;


}
