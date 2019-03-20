#include <iostream>
using namespace std;
int main()
{
	int i, j, temp;
	int array[10] = {1,3,8,2,7,4,9,10,6,5};
	for (i = 0; i < 9; i++)
	{
		j = i;
		while (array[j] > array[j + 1])
		{
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			j--;
		}
	}
	for (i = 0; i < 10; i++)
	{
		cout << array[i] << endl;
	}
}