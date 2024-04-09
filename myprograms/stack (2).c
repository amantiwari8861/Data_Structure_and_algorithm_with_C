POP()
{
	if(top==-1)
	{
		printf("stack is empty deletion is not possible");
	}
	else
	{ 
        temp = top;  
        top = top->link; 
        temp->link = NULL; 
        free(temp);
		top--;
	}
}