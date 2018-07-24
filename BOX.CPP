#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<string.h>
#include<iostream.h>
char a[500],b[500];
int n[10],k=0,s[10],l=0;
int m=250;
void draw();
void show();
void array();
void sort();
void max();
void com1();
void com2();
void main()
{
	clrscr();
	draw();
	//printf("%d\n%d",getmaxx(),getmaxy());
	for(int i=180;i<=300;i=i+60)
	{
		for(int j=260;j<=380;j=j+60)
		{
			scanf("%d",&n[k]);
			sprintf(a,"%d",n[k]);
			outtextxy(j,i,a);
			//printf("n[%d]=%d\n",k,n[k]);
			k++;
		}
	}
	array();
	for(int s=0;s<9;s++)
	{
		if(n[0]==0&&n[1]==0&&n[2]==0)
		{
			max();
			com2();
			sort();
		}
		else
		{
			max();
			com1();
			sort();

		}
		if((n[6]==0&&n[7]==0)||(n[7]==0&&n[8]==0)||(n[6]==0&&n[8]==0))
		{
			max();
			com1();
			sort();
		}
	}

getch();
}
void draw()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	line(230,150,230,330);
	line(290,150,290,330);
	line(350,150,350,330);
	line(410,150,410,330);

	line(230,150,410,150);
	line(230,210,410,210);
	line(230,270,410,270);
	line(230,330,410,330);
}
void show()
{
	k=0;
	for(int i=180;i<=300;i=i+60)
	{
		for(int j=260;j<=380;j=j+60)
		{

			sprintf(a,"%d",n[k]);
			outtextxy(j,i,a);
			k++;
		}
	}
	getch();
}
void array()
{
	printf("array=");
	for(int k=0;k<9;k++)
	{
		printf("%d",n[k]);
	}
	getch();
}
void max()
{
	if(n[6]!=0&&n[7]!=0&&n[8]!=0)
	{
		if(n[6]<n[7]||n[6]<n[8])
		{
			if(n[7]<n[8])
			{
				//printf("n[%d]=%d",8,n[8]);
				s[l]=n[8];
				n[8]=0;
				printf("\ns[%d]=%d",l,s[l]);
				l++;
			}
			else
			{
				//printf("n[%d]=%d",7,n[7]);
				s[l]=n[7];
				n[7]=0;
				printf("\ns[%d]=%d",l,s[l]);
				l++;
			}
		}
		else
		{
			//printf("n[%d]=%d",6,n[6]);
			s[l]=n[6];
			n[6]=0;
			printf("\ns[%d]=%d",l,s[l]);
			l++;
		}
	}
	else
	{
		if(n[6]==0)
		{
			if(n[7]<n[8])
			{
				//printf("n[%d]=%d",8,n[8]);
				s[l]=n[8];
				n[8]=0;
				printf("\ns[%d]=%d",l,s[l]);
				l++;
			}
			else
			{
				//printf("n[%d]=%d",7,n[7]);
				s[l]=n[7];
				n[7]=0;
				printf("\ns[%d]=%d",l,s[l]);
				l++;
			}
		}
		else if(n[7]==0)
		{
			if(n[6]<n[8])
			{
				s[l]=n[8];
				n[8]=0;
				printf("\ns[%d]=%d",l,s[l]);
				l++;
			}
			else
			{
				s[l]=n[6];
				n[6]=0;
				printf("\ns[%d]=%d",l,s[l]);
				l++;
			}
		}
		else if(n[8]==0)
		{
			if(n[6]<n[7])
			{
				s[l]=n[7];
				n[7]=0;
				printf("\ns[%d]=%d",l,s[l]);
				l++;
			}
			else
			{
				s[l]=n[6];
				n[6]=0;
				printf("\ns[%d]=%d",l,s[l]);
				l++;
			}
		}
	}
	getch();
}
void sort()
{
	for(int p=0;p<l;p++)
	{

		sprintf(b,"%d ",s[l-1]);
		outtextxy(m+10,400,b);
		outtextxy(195,400,"SORTED:-");

	}
	getch();
}
void com1()
{
	for(k=6;k<9;k++)
	{
		if(n[k]==0)
		{
			int temp=0;
			temp=n[k];
			n[k]=n[k-6];
			n[k-6]=temp;
			int temp1=0;
			temp1=n[k];
			n[k]=n[k-3];
			n[k-3]=temp1;
			n[k-6]=0;
			//clearviewport();
			draw();
			array();
			show();
		}
	}
	getch();
}
void com2()
{
	for(k=6;k<9;k++)
	{
		if(n[k]==0)
		{
			int temp;
			temp=n[k];
			n[k]=n[k-3];
			n[k-3]=temp;
			n[k-3]=0;
			draw();
			array();
			show();
		}
	}
	getch();
}