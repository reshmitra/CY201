#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
  
int main(void)	{
//	Use	a	struct to	force	local	variable	memory	ordering
struct {
char buff[5];
char pass;
}	localinfo;

localinfo.pass =	0;

printf("\n	Enter the	password	:	\n");

gets(localinfo.buff);	//Get the password from	the	user
printf("%d",strcmp(localinfo.buff,	"byte"));
if(strcmp(localinfo.buff, "byte")){	//	Check	the	password
	//printf("%d",strcmp(localinfo.buff,	"byte"));
	printf ("\n	Wrong Password	\n");
}
else {
	printf ("\n	Correct Password	\n");
	localinfo.pass = 1;	// Set a flag denoting correct pass
}
if(localinfo.pass){ /*	Now	give root or admin rights to user*/
	printf ("\n	Root privileges given to the user \n");
}
return	0;
}