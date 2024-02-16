#include<stdio.h>
#include<string.h>
int judge(char*a, char*b)
{
	int i,j,k;
	k=0;
	int len=strlen(a);
	
		    if(strlen(a)!=strlen(b))
	{
		return 0;
	}
	
        
	else 
	{
	if(strcmp(a,b)==0)
	{
		return 0;
	}
		else
		{
		
		for(i=0;i<len;i++)
		{
			if(b[i]==a[0])
			{
				k=1;
				for(j=0;j<len;j++)
				{
					if((i+j)<len)
					{
						if(a[j]!=b[j+i])
						{
							k=0;
							break;
						}
					}
					else
					{
						if(a[j]!=b[i+j-len])
						{
							k=0;
							break;
						}
					}
					
				}
			}
			
		}
		
		if(k==1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	
	
}
}

int main()
{
	char arr1[100];
	char arr2[100];
	gets(arr1);
	gets(arr2);
	int len2=strlen(arr1);
	printf("%d",judge(arr1,arr2));
	return 0;
	
 } 
