#define TRUE 1
#define FALSE 0
#define QUE_LEN	100
typedef int Data;

typedef struct _cQueue
{
	int front;
	int rear;
	Data queArr[QUE_LEN];
}CQueue;

typedef CQueue Queue;

void QueueInit(Queue * pq);		//초기화
int IsEmpty(Queue *pq);			//비어있는지 확인
void Enqueue(Queue * pq, Data data);	
Data Dequeue(Queue * pq);		
Data QPeek(Queue *pq);
