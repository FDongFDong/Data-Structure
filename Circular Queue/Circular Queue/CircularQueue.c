#include <stdio.h>
#include <stdlib.h>
#include "CircularQueue.h"

void QueueInit(Queue * pq) //�� �� ��� front�� rear�� ���� ��ġ�� ����Ŵ 
{
	pq->front = 0;
	pq->rear = 0;
}

int IsEmpty(Queue * pq)	//ť�� ����ִٸ� True, �ƴϸ� False
{
	if (pq->front == pq->rear)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int NextPosIdx(int pos)	
{
	if (pos == QUE_LEN - 1)		//�迭�� ������ ����� �ε��� ���̶��
	{
		return 0;
	}
	else
	{
		return pos + 1;
	}
}
void Enqueue(Queue *pq, Data data)
{
	if (NextPosIdx(pq->rear) == pq->front) //ť�� �� á�ٸ�
	{
		printf("�� ��");
		return;
	}
	
	pq->rear = NextPosIdx(pq->rear);
	pq->queArr[pq->rear] = data;
}

Data Dequeue(Queue * pq)
{
	if (IsEmpty(pq))
	{
		printf("�����");
		return;
	}
	pq->front = NextPosIdx(pq->front);
	return pq->queArr[pq->front];
}

Data QPeek(Queue * pq)
{
	if (IsEmpty(pq))
	{
		printf("���� ");
		return;
	}
	return pq->queArr[NextPosIdx(pq->front)];
}