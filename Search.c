#include<stdio.h>
void binary(int list[],int x);
void linear(int list[],int x);
void main()
	{
	int a[30],count,i,x,y,el;
	printf("Enter The Number Of Elaments:");
	scanf("%d",&count);
	printf("Enter The List Elaments\n");
	for( i=0; i<=count;i++ )
		{
		printf("Enter The %d th Elament ",i+1);
		scanf("%d",&el);
		a[i]=el;
		}
	while (1){	
		
		printf("\n1\t:\tBINARY SEARCH\n2\t:\tLINEAR SEARCH");
		printf("\nEnter The Search Choice:");
		scanf("%d",&x);
		if (x==1){
			binary(a,count);
			}
		else if (x==2)
			linear(a,count);
		else
			printf("\nInvalid choice Tryagain");
		}
}
void binary(int list[],int x)
{
	int b=0,l=x-1,m,key;
	m=(b+l)/2;
	printf("\nEnter The Elament To Search:");
	scanf("%d",&key);
	while ( (key != list[m]) && (b<=l) )
	{
	if (key>list[m])
		b=m++;
	else
		{
		l=m--;
		m=(b+l)/2;
		}
	}
	if ( key == list[m] )
		{
		printf("The Elament %d is Fount At %d The Position ",key,m+1);
		}	
	else
		printf("Elament Not fount");

}	
void linear(int list[],int x)
{
	int i,key,p,flag=0;
	printf("Enter The Elament To Search:");
	scanf("%d",&key);
	for (i=0 ; i<x ; i++ )
		{
		if (list[i]==key)
			{
			p=i;
			flag=1;
			break;
			}
		}
	if (flag==1)
		printf("Elament fount in Position %d",p+1);
		
	else 
		printf("Elament Not fount");
}
