#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char *argv[]){
	int n;
	char argccv[2080];
	char *c;
	argccv[0]=0;
	if (argc<2)exit(0);
	for (n=1;n<argc;n++){
		strcat(argccv,argv[n]);
		strcat(argccv," ");
	}
		c=strstr(argccv,">");
		if(c!=NULL)c[0]=0; 
		strcat(argccv," 2>/dev/null >/dev/null");
		system(argccv);
	return 0;
}
