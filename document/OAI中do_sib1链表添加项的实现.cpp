#include<stdlib.h> 
#include<stdio.h> 

typedef unsigned short  MCC_MNC_Digit;
typedef  struct node
{
	struct node *next;
	MCC_MNC_Digit value;
}Node;
typedef Node * list; 
void fun(list *a,MCC_MNC_Digit b);
/*#define list(x) typedef \
struct node				\
{						\
	x value;			\
	struct node *next;	\
}*Node;
*/ 


int main(void)
{
	
	
	
	list lianbiao;//����������� 
	lianbiao=(Node *)malloc(sizeof(Node));//�����ڴ� //��һ�� 
	lianbiao=NULL;//��ʼ����������д��һ����ʼ���������� 
	/*
		void init(������� *a)����ָ�������ָ�� 
		{
			*a=NULL//������ĵ�һ���ڵ�����Ϊ�գ� 
		} 
	*/ 
	fun(&lianbiao,5);
	fun(&lianbiao,7);
	Node *nodebianli;
	nodebianli=(Node *)malloc(sizeof(Node));
	nodebianli=lianbiao;
	printf("%d  11111111\n",nodebianli->value);
	while(nodebianli->next!=NULL)
	{
		nodebianli=nodebianli->next;
		printf("%d  222222\n",nodebianli->value);
	}
	
	
return 0;	 
}
void fun(list *a,MCC_MNC_Digit b)//aΪָ�������ָ�� bΪ�����е���(unsigned short���ͣ� 
{
	Node *pnew;
	pnew=(Node *)malloc(sizeof(struct node));
	
	pnew->value=b;
	pnew->next=NULL; 
	Node *scan;//����һ�����������洢����ָ�봫����������
	 
	scan=*a;
	if(*a==NULL)
	{
		
		*a=pnew;//����Ϊ�� ,��b��Ϊ��һ�
		 
	}
	else
	{
		
		while(scan->next!=NULL)//
		{
			scan=scan->next;	
		}
		scan->next=pnew;
	 } 
}
