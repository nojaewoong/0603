#include<stdio.h>
#include<conio.h>
#include<windows.h>
#define X_MAX 79 
#define Y_MAX 24
void move_arrow_key (char chr, int *x, int *y, int x_b, int y_b)
void gotoxy (int x, int y);
void gotoxy(int x, int y)
{
	printf("%c[%d;%d]\n",0x1B,x,y);
}

void move_arrow key(char key, int*x1, int*y1,int x_b, int y_b)
{
	int x,y;
	for(x=1;x<=10;x+=1)
	{
		y=a*x+b;
		gotoxy(x,y);
	printf("*");
	}
}

int main()
{
	
	char key;
	int x=10, y=5;
	do
	{
		gotoxy(x, y);
		printf("A");
		key=getch();
		system("cls");
		move_arrow_key(key, &x, &y, X_MAX, Y_MAX);		
	}while(key!=27);
	return 0;
}


