#include<stdio.h>
#include<conio.h>
void gotoxy(int x,int y)
{
printf("%c[%d;%d]\n",0x1B,x,y);
}
int main()
{
	gotoxy(2,4);
	printf("Hello\n");
	gotoxy(40,20);
	printf("World\n");
	
	return 0;
}
