#include <stdio.h>
#include <stdlib.h>
#include "Member.h"
#include "../../포인터로 연결 리스트 만들기/포인터로 연결 리스트 만들기/LinkedList.h"

static Node *AllocNode(void)
{
	return calloc(1, sizeof(Node));
}