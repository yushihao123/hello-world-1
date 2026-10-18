#include<iostream>

int main()
{
	int peach1=1;
	int peach0=0;
	int i=11;
	
	while(i>1){
		peach0=2*(peach1+1); 
		peach1=peach0;
		i=i-1;
	}
	
	printf("第一天最初摘了%d个桃子\n",peach0);
	return 0;
 } 
