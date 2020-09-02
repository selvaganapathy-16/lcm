#include<stdio.h>
int lcm(int a,int b);
main()
{
	int x,y,ans;
	printf("enter two numbers");
	scanf("%d%d",&x,&y);
	ans=lcm(x,y);
	printf("lcm of %d and %d is %d",x,y,ans);
	return 0;
}
int lcm(int a, int b)
{
	static int num=1;
	if(num%a==0 && num%b==0)
	{
	return num;
    }
    else
    {
    	num++;
    	 lcm(a,b);
    	 return num;
	}
	
  
	
}
