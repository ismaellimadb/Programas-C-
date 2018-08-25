#include <stdio.h>
#include <limits.h>
#include <iostream>
using namespace std;
int main()
{
	int teste;
	int final = 10;
	cout << "Please enter an integer value: ";
	cin >> teste;
	while(teste <= final)
	{
		cout << teste;
		teste++;
	}
  return 0;
}
