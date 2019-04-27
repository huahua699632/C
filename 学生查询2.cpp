#include <stdio.h> 
//#include <string.h> 
struct student { 
	int num; 
	char name[20]; 
	char sex[10]; 
	int age; 
}stu[20]; 
int main() 
{ 
	int cnt; 
	int m,n; 
	scanf("%d",&m); 
	for(int k = 0;k < m;k++)
	{ 
		scanf("%d",&cnt); 
		for(int i = 0;i < cnt;i++)
		{ 
			scanf("%d %s %s %d",&stu[i].num,stu[i].name,stu[i].sex,&stu[i].age); 
		} 
		scanf("%d",&n); 
		for(int j = 0;j < cnt;j++)
		{ 
			if(n == stu[j].num)
			{ 
				printf("%d %s %s %d\n",stu[j].num,stu[j].name,stu[j].sex,stu[j].age); 
				break; 
			} 
		} 
	}
	return 0;
}

