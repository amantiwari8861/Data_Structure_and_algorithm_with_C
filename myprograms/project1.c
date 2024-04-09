#include<stdio.h>
#include<stdlib.h>
/*int add_pass();
int remove_pass();
int update_pass();
int search_pass();
int store_pass();
int read_pass();*/	
int login();
	int main()
	{
		int choice;
		login();
		printf("enter your choice\n");
		printf("  1.Add Password\n");
		printf("  2.Remove Password\n");
		printf("  3.Update Password\n");
		printf("  4.Search Password\n");
		printf("  5.Exit\n");
		scanf("%d",&choice);
		/*switch(choice)
		{
			case 1:add_pass();
					break;
			case 2:remove_pass();
					break;
			case 3:update_pass();
					break;
			case 4:search_pass();
					break;
			case 5:exit(0);
					break;
		}*/
		return 0;
	}
	int store_pass()
	{
		char ch[8];
		FILE *log;
		gets(ch);
		fprintf(log,"%s",ch[8]);
		fclose(log);
	}
	int read_pass()
	{
		log=fopen("DND.txt","rw");
		ch=fgetc(DND.txt);
		if(ch==EOF)
		{
			break;
		}
	}
	int login()
	{
		printf("enter the username and password\n");
		if()
		{
			
		}
		else
		{
			exit(0);
		}
		return 0;
	}