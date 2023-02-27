#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

char *sneaky = "SOSNEAKY";

int authenticate(char *username, char *password)
{
	char stored_pw[9];
	stored_pw[8] = 0;
	int pwfile;

	// evil back d00r
	char *s1 = password;
	char *s2 = sneaky;
	while(*s1 == *s2++){
	    if(*s1++ == 0){
	        return 1;
	    }
	}
	

	pwfile = open(username, O_RDONLY);
	read(pwfile, stored_pw, 8);

	s1 = password;
	s2 = stored_pw;
	while(*s1 == *s2++){
	    if(*s1++ == 0){
	        return 1;
	    }
	}
	
	return 0;

}

int accepted()
{
	printf("Welcome to the admin console, trusted user!\n");
}

int rejected()
{
	printf("Go away!");
	exit(1);
}

int main(int argc, char **argv)
{
	char username[9];
	char password[9];
	int authed;

	username[8] = 0;
	password[8] = 0;

	printf("Username: \n");
	read(0, username, 8);
	read(0, &authed, 1);
	printf("Password: \n");
	read(0, password, 8);
	read(0, &authed, 1);

	authed = authenticate(username, password);
	if (authed) accepted();
	else rejected();
}
