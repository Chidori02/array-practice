#include <iostream>

using namespace std;

int input[1000];
int inputLimit;
char loop = 'y';

bool isPrime(int num);
		

int main()
{
	
	while(loop == 'y' || loop == 'Y'){
		
		
		int i = 1;
		
		cout << "How many number? : ";
		cin >> inputLimit;
		cout << endl;
		
		if(inputLimit <= 0)
		{
			cout << "Please Enter Positive Integers only." << endl;
		}
		
		while(i <= inputLimit)
		{
			cout << "Input no. " << i << ": ";
			cin >> input[i];
			
			
			if(input[i] > 1){
			
				bool isPrimeflag = isPrime(input[i]);
				
				if(isPrimeflag)
				{
					cout << input[i] << " is a Prime Number.\n" << endl;
				}
			
				else
				{
					cout << input[i] << " is Not a Prime Number.\n" << endl;
				}
			}
			
			else if(input[i] < -1)
			{
				input[i] = input[i] * -1;
				
				bool isPrimeflag = isPrime(input[i]);
				
				if(isPrimeflag)
				{
					cout << "-" <<input[i] << " is a Prime Number.\n" << endl;
				}
			
				else
				{
					cout << "-" << input[i] << " is Not a Prime Number.\n" << endl;
				}
			}
			
			else if(input[i] >= -1 && input[i] <= 1)
			{
				cout << input[i] << " is Not a Prime Number.\n" << endl;
			}
			
			else
			{
				cout << "UNEXPECTED ERROR OCCURED!\n";
			}
				
		i++;}
			
		
		cout << "\nDo you want to repeat?[y/n]:";
		cin >> loop;
		system("cls");
	}
}


bool isPrime(int num)
{
	bool isPrimeflag = true;
	
	for(int i = 2; i < num; i++)
	{
		if(num % i == 0)
		{
			return false;
		}
	}
	return true;
}