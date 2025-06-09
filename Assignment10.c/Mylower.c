////MYSTRLWR()


#include<stdio.h>
#include<string.h>

 void mystrlwr(char*);

int main()
{
	char a[10];
	
	printf("enter string:");
	scanf("%s",&a);
	
	mystrlwr(a);
	printf("%s",a);
}

 void mystrlwr(char* a)
  {
  	int i=0;
  	while(a[i]!='\0')
  	{
  		if(a[i]>='A')
  		{
  			if(a[i]<='Z')
  			{
  				a[i]=a[i]+32;
			  }
			  a++;
		  }
	  }
  }
