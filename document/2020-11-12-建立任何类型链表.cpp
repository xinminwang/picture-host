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
void fun1(void)//����int���͵����� 
{
	LIST(int);
	NODE lianbiao;
	lianbiao=(NODE)malloc(sizeof(struct node));
	lianbiao->value=8;
	printf("%d\n",lianbiao->value);
}
void fun2(void)//����char�������� 
{
	LIST(char);//���滻Ϊtypedef struct node	{char value;struct node *next;} *NODE;  char�������Ͷ���
	NODE lianbiao1; //ʹ��char������������һ��������������
	lianbiao1=(NODE)malloc(sizeof(struct node));//������������������䶯̬�ڴ棬��ǿתΪNODE���͵�����ǿתΪ����������������������ͣ�
	//����ʹ���������
	lianbiao1->value='a';
	printf("%c\n",lianbiao1->value);
}
void fun3(void) //�����Զ���nihao���͵���������Ҫ�� 
{
	typedef int nihao;
	LIST(nihao);//���滻Ϊtypedef struct node	{nihao value;struct node *next;} *NODE;  nihao�������Ͷ���
	NODE lianbiao2; //ʹ��char������������һ��������������
	lianbiao2=(NODE)malloc(sizeof(struct node));//������������������䶯̬�ڴ棬��ǿתΪNODE���͵�����ǿתΪ����������������������ͣ�
	//����ʹ���������
	nihao a;
	scanf("%d",&a);
	lianbiao2->value=a;
	printf("%d",lianbiao2->value);
}
