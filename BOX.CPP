#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<string.h>
#include<iostream.h>
char a[100],b[100],c[100];
int n[10],k=0,n1[10],s[10],l=0,l1=0,v=0;
int ss[9];
static int m=260;
void draw();
void draw1();
void show();
void show1();
void array();
void sort(int s1);
void max();
void com1(int c1);
void com_sort(int cs);
void com2(int c2);
void num();
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
			n1[k]=n[k];
			sprintf(a,"%d",n[k]);
			outtextxy(j,i,a);
			k++;
		}
	}
	//array();
	getch();
	for(int s=0;s<9;s++)
	{
		max();
		show1();
	}
	array();
	num();
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
	//box2
	line(195,420,465,420);
	line(195,450,465,450);

	for(int i=195;i<=465;i=i+30)
	{
		line(i,420,i,450);
	}
}
/*void draw1()
{
	line(195,420,465,420);
	line(195,450,465,450);

	for(int i=195;i<=465;i=i+30)
	{
		line(i,420,i,450);
	}
}*/
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
void show1()
{
	k=0;
	for(int i=209;i<=449;i=i+30)
	{
		sprintf(c,"%d",ss[k]);
		outtextxy(i,434,c);
		k++;
	}
	getch();
}
void array()
{
	printf("Entered Number = ");
	for(int k=0;k<9;k++)
	{
		printf("%d",n1[k]);
	}
	getch();
}
void num()
{
	printf("\nSorted Max Number = ");
	for(int k=0;k<9;k++)
	{
		printf("%d",ss[k]);
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
				s[l]=n[8];
				n[8]=0;
				printf("\ns[%d]=%d",l,s[l]);
				l1=l;
				l++;
				com_sort(8);
			}
			else
			{
				s[l]=n[7];
				n[7]=0;
				printf("\ns[%d]=%d",l,s[l]);
				l1=l;
				l++;
				com_sort(7);
			}
		}
		else
		{
			s[l]=n[6];
			n[6]=0;
			printf("\ns[%d]=%d",l,s[l]);
			l1=l;
			l++;
			com_sort(6);
		}
	}
	else
	{
		if(n[6]==0)
		{
			if(n[7]<n[8])
			{
				s[l]=n[8];
				n[8]=0;
				printf("\ns[%d]=%d",l,s[l]);
				l1=l;
				l++;
				com_sort(8);
			}
			else
			{
				s[l]=n[7];
				n[7]=0;
				printf("\ns[%d]=%d",l,s[l]);
				l1=l;
				l++;
				com_sort(7);
			}
		}
		else if(n[7]==0)
		{
			if(n[6]<n[8])
			{
				s[l]=n[8];
				n[8]=0;
				printf("\ns[%d]=%d",l,s[l]);
				l1=l;
				l++;
				com_sort(8);
			}
			else
			{
				s[l]=n[6];
				n[6]=0;
				printf("\ns[%d]=%d",l,s[l]);
				l1=l;
				l++;
				com_sort(6);
			}
		}
		else if(n[8]==0)
		{
			if(n[6]<n[7])
			{
				s[l]=n[7];
				n[7]=0;
				printf("\ns[%d]=%d",l,s[l]);
				l1=l;
				l++;
				com_sort(7);
			}
			else
			{
				s[l]=n[6];
				n[6]=0;
				printf("\ns[%d]=%d",l,s[l]);
				l1=l;
				l++;
				com_sort(6);
			}
		}
	}

	getch();
}
void sort(int s1)
{
	l1=s1;
	for(int p=0;p<=l1;p++)
	{
		sprintf(b,"%d",s[l1]);
		outtextxy(195,400,"SORTED:-");
		outtextxy(m,400,b);
		ss[v]=s[l1];

	}
	//printf("\n%d  %d",v,ss[v]);
	v++;
	getch();
}
void com1(int c1)
{

	for(k=6;k<=c1;k++)
	{
		k=c1;
		if(n[k]==n[c1])
		{
				int temp=0;
				temp=n[k];
				n[k]=n[k-6];
				n[k-6]=temp;
				int temp1=0;
				temp1=n[k];
				n[k]=n[k-3];
				n[k-3]=temp1;
				draw();
				//array();
				show();
		}
	}
	getch();
}
void com2(int c2)
{
	for(k=6;k<=c2;k++)
	{
		k=c2;
		if(n[k]==n[c2])
		{
			int temp;
			temp=n[k];
			n[k]=n[k-3];
			n[k-3]=temp;
			draw();
			//array();
			show();
		}
	}
	getch();
}
void com_sort(int cs)
{
	l=cs;
	if(n[0]==0&&n[1]==0&&n[2]==0)
		{
			com2(l);
			//printf("com2");
			sort(l1);
		}
		else
		{
			com1(l);
			//printf("com1");
			sort(l1);
		}

}
