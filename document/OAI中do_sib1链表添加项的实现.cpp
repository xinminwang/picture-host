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
	
	
	
	list lianbiao;//建立链表变量 
	lianbiao=(Node *)malloc(sizeof(Node));//分配内存 //换一下 
	lianbiao=NULL;//初始化链表，可以写成一个初始化函数如下 
	/*
		void init(链表变量 *a)传入指向链表的指针 
		{
			*a=NULL//把链表的第一个节点设置为空； 
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
void fun(list *a,MCC_MNC_Digit b)//a为指向链表的指针 b为链表中的项(unsigned short类型） 
{
	Node *pnew;
	pnew=(Node *)malloc(sizeof(struct node));
	
	pnew->value=b;
	pnew->next=NULL; 
	Node *scan;//设置一个链表，用来存储链表指针传过来的链表。
	 
	scan=*a;
	if(*a==NULL)
	{
		
		*a=pnew;//链表为空 ,把b作为第一项。
		 
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
