#include<stdio.h>
void func();
int main()
{
	func();
	func();
	func();
	return 0;
}
void func()
{
	static int a=5;
      	++a;
	printf("%d\n",a);
}
