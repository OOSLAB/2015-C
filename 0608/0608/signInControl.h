#include <stdio.h>
#include <string.h>
#include "user.h"

struct User getUser(char *id, char *password) {
	int noFields = 0;
	FILE *fp;
	struct User user;

	fopen_s(&fp, "user.txt", "r");
	while (noFields != EOF) {
		noFields = read(&user, fp);
		if (strcmp(id, user.id) == 0 && strcmp(password, user.password) == 0) {
			fclose(fp);
			return user;
		}
	}
	fclose(fp);
}
