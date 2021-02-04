#include<string.h>
#include<math.h>
void main(){
	int i=0,j=0,x=0,n;
	void *p,*add[15];
	char ch,srch,b[35],d[35],c;
	printf("Enter an expression:\n");
	while((c=getchar())!='\n')
	{
		b[i]=c;
		i++;
	}
	n=i-1;
	printf("Given expression:");
	i=0;
	while(i<=n)
	{
		printf("%c",b[i]);
		i++;
	}
	printf("\n Symbol Table\n");
	printf("Symbol \t\t\t addr \t\t\t type");
	while(j<=n)
	{
		c=b[j];
		if (isalpha(toascii(c)))
		{
			p=malloc(c);
			add[x]=p;
			d[x]=c;
			printf("\n%c \t\t\t %d \t\t\t identifier\n",c,p);
			x++;
			j++;
		}
		else
		{
			ch=c;
			if(ch=='+'||ch=='-'||ch=='*'||ch=='=')
			{
				p=malloc(ch);
				add[x]=p;
				d[x]=ch;
				printf("\n%c\t\t\t %d\t\t\t Operator\n",ch,p);
				x++;
				j++;
			}
		}
	}
}


  
