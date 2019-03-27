#include <stdio.h>
#include "ArrayList.h"

int main(void)
{
	List list;
	int i = 0;
	int data=0;
	int sum = 0;
	ListInit(&list);
	for (i = 0; i < 10; i++)
	{
		LInsert(&list, i + 1);
	}
	if (LFirst(&list, &data))
	{
		sum += data;
		while (LNext(&list, &data))
		{
			sum += data;
		}
	}
	printf("%d", sum);
	if (LFirst(&list, &data))
	{
		if (data % 2 == 0 && data % 3 == 0)
		{
			LRemove(&list);
		}
		while (LNext(&list, &data))
		{
			if (data % 2 == 0 || data % 3 == 0)
			{
				LRemove(&list);
			}
		}
	}
	printf("\n\n");
	if (LFirst(&list, &data))
	{
		printf("%d ", data);
		while (LNext(&list, &data))
		{
			printf("%d ", data);
		}
	}

	return 0;
}