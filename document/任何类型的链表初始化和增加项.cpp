#include<stdlib.h> 
#include<stdio.h> 

typedef unsigned short  MCC_MNC_Digit;
#define LIST(T) typedef  struct node{T value;struct node *next;}*Node;
LIST(MCC_MNC_Digit);
void fun(Node *a,MCC_MNC_Digit b);
/*#define list(x) typedef \
struct node				\
{						\
	x value;			\
	struct node *next;	\
}*Node;
*/ 


int main(void)
{
	/*int a;
	LIST(int);
	Node list;//��������(��ʵ��ֻ��һ���ڵ㣬����ڵ�ָ��һ���ṹ�壩 
	list=(Node)malloc(sizeof(node)); 
	scanf("%d",&a);
	list->value=a;
	printf("%d",list->value);
	//add_item(&list,pnew);*/
	
	
	Node lianbiao;//����������� 
	lianbiao=(Node)malloc(sizeof(struct node));//�����ڴ� 
	lianbiao=NULL;//��ʼ����������д��һ����ʼ���������� 
	/*
		void init(������� *a)����ָ�������ָ�� 
		{
			*a=NULL//������ĵ�һ���ڵ�����Ϊ�գ� 
		} 
	*/ 
	fun(&lianbiao,5);
	printf("%d",lianbiao->value);
	
return 0;	 
}
void fun(Node *a,MCC_MNC_Digit b)//aΪָ�������ָ�� bΪ�����е���(unsigned short���ͣ� 
{
	Node pnew;
	pnew=(Node)malloc(sizeof(struct node));
	
	pnew->value=b;
	pnew->next=NULL; 
	Node scan;//����һ�����������洢����ָ�봫����������
	 
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
