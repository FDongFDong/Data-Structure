#include "Stack.h"
#include <stdio.h>

void StackInit(Stack * pstack)		//������ �ʱ�ȭ
{
	pstack->topIndex = -1;
}
int IsEmpty(Stack * pstack)		//������ ������� Ȯ��
{
	if (pstack->topIndex == -1)
		return TRUE;
	else
		return FALSE;
}
void Push(Stack * pstack, Data data)
{
	pstack->topIndex += 1;
	pstack->stackArr[pstack->topIndex] = data;
}
Data Pop(Stack * pstack)
{
	int index;
	if (IsEmpty(pstack))
	{
		printf("�����");
		return;
	}
	index = pstack->topIndex;
	pstack->topIndex -= 1;
	return pstack->stackArr[index];
}
Data Peek(Stack * pstack)
{
	return pstack->stackArr[pstack->topIndex];
}


int main()
{
	Stack stack;
	StackInit(&stack);

	Push(&stack, 10);
	Push(&stack, 20);
	Push(&stack, 30);
	Push(&stack, 40);
	Push(&stack, 50);

	while (!IsEmpty(&stack))
	{
		printf("%d", Pop(&stack));
	}
	return 0;


}