#define TRUE 1
#define FALSE 0
#define STACK_LEN 100

typedef int Data;

typedef struct _arrayStack
{
	Data stackArr[STACK_LEN];
	int topIndex;
}ArrayStack;

typedef ArrayStack Stack;

void StackInit(Stack * pstack);		//스택의 초기화
int IsEmpty(Stack * pstack);		//스택이 비었는지 확인
void Push(Stack * pstack, Data data);
Data Pop(Stack * pstack);
Data Peek(Stack * pstack);