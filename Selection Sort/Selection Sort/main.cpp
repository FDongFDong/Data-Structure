#include <iostream>
using namespace std;

int main()
{
	int min, index, i, j, temp;
	int array[10] = { 5,3,8,2,7,4,9,1,10,6 };
	for (i = 0; i < 10; i++)
	{
		min = 99;
		for (j = i; j < 10; j++)
		{
			if (min > array[j])
			{
				index = j;
				min = array[j];
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	for (i = 0; i < 10; i++)
	{
		cout << array[i] << endl;
	}
}