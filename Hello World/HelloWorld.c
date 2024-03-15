#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
FILE*file;
char*message ="HELLO WORLD";
char read_message[100];

file =fopen("hello_world.txt","w");
fwrite(message,sizeof(char),strlen(message),file);
fclose(file);

file=fopen("hello_world.txt","r");
fread(read_message,sizeof(char),strlen(message),file);
fclose(file);

printf("%s\n",read_message);
return 0;
}
