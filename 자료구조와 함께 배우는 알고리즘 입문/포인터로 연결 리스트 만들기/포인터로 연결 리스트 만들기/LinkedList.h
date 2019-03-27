#ifndef __LinkedList
#define __LinkedList

#include "../../11��/11��/Member.h"

typedef struct __node
{
	Member data;
	Node *next;
}Node;

typedef struct{
	Node *head;
	Node *crnt;
}List;

void Initialize(List *list);

//�Լ� compare�� x�� ���� ��带 �˻�
Node *search(List *list, const Member *x, int compare(const Member*x, const Member *y));

//�Ӹ��� ��带 ����
void InsertFront(List * list, const Member *x);

//������ ��带 ����
void InsertRear(List * list, const Member *x);

//�Ӹ� ��带 ����
void RemoveFront(List *list);
//���� ��带 ����
void RemoveRear(List *list);

//������ ��带 ����
void RemoveCurrent(List * list);
//��ü ����
void Clear(List *list);

//������ ����� �����͸� ���
void PrintCurrent(const List *list);

//������ ����� �����͸� ���(��ٲ� ���� ����)
void PrintLnCurrent(const List *list);

//��� ����� �����͸� ����Ʈ ������� ���
void Print(const List *list);

//���Ḯ��Ʈ ����
void Terminate(List *list);


#endif