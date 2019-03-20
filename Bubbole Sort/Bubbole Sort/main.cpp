#include <iostream>
using namespace std;
int main()
{
	int i, j;	//반복문을 위한 변수
	int temp;	//swap을 위한 변수
	int array[10] = { 3,5,8,2,7,4,9,10,1,6 };

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			if (array[j] > array[j+ 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		cout << array[i] << endl;
	}
}