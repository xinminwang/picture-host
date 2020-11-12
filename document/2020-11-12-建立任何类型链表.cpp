#include<stdlib.h> 
#include<stdio.h> 
//#define LIST(T) typedef struct node	{T value;struct node *next;} *NODE;

#define LIST(T) 			\
typedef struct node			\
{							\
	T value;				\
	struct node *next;		\
} *NODE;

void fun1(void);
void fun2(void);
void fun3(void);
//void add_item(Node * a,Node b);
int main(void)
{
	fun1();
	fun2();
	fun3();
	return 0;	
}
void fun1(void)//建立int类型的链表 
{
	LIST(int);
	NODE lianbiao;
	lianbiao=(NODE)malloc(sizeof(struct node));
	lianbiao->value=8;
	printf("%d\n",lianbiao->value);
}
void fun2(void)//建立char类型链表 
{
	LIST(char);//被替换为typedef struct node	{char value;struct node *next;} *NODE;  char链表类型定义
	NODE lianbiao1; //使用char类型链表，定义一个链表（变量）。
	lianbiao1=(NODE)malloc(sizeof(struct node));//对这个链表（变量）分配动态内存，并强转为NODE类型的链表（强转为定义这个链表（变量）的类型）
	//下面使用这个链表
	lianbiao1->value='a';
	printf("%c\n",lianbiao1->value);
}
void fun3(void) //建立自定义nihao类型的链表（很重要） 
{
	typedef int nihao;
	LIST(nihao);//被替换为typedef struct node	{nihao value;struct node *next;} *NODE;  nihao链表类型定义
	NODE lianbiao2; //使用char类型链表，定义一个链表（变量）。
	lianbiao2=(NODE)malloc(sizeof(struct node));//对这个链表（变量）分配动态内存，并强转为NODE类型的链表（强转为定义这个链表（变量）的类型）
	//下面使用这个链表
	nihao a;
	scanf("%d",&a);
	lianbiao2->value=a;
	printf("%d",lianbiao2->value);
}
