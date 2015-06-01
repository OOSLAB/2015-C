#include <stdio.h>
#include <string.h>

// 회원가입
void SignUp()
{
	char id[20], password[20], name[20], type[20];
	FILE *fp;
	fopen_s(&fp, "user.txt", "a");

	//화면 지우는 거
	system("cls");

	printf("[회원가입]\n");
	printf("아이디: ");
	scanf_s("%s", id, sizeof(id));
	printf("패스워드: ");
	scanf_s("%s", password, sizeof(password));
	printf("이름: ");
	scanf_s("%s", name, sizeof(name));
	printf("가입유형: ");
	scanf_s("%s", type, sizeof(type));

	//화면에 출력
	//printf("%s, %s, %s, %s\n", id, password, name, type);

	//파일에 출력
	fprintf(fp, "%s %s %s %s\n", id, password, name, type);
	fclose(fp);
}

//로그인하는 거
void SignIn()
{
	//1. 사용자에게 입력 OK
	//2. 파일에서 하나씩 읽으면서 비교
	//3. 로그인 성공, 사용자 없음

	char id[20], password[20];
	char fid[20], fpassword[20], fname[20], ftype[20];
	int noFields = 0;
	FILE *fp;
	fopen_s(&fp, "user.txt", "r");

	system("cls");

	printf("[로그인]\n");
	printf("아이디: ");
	scanf_s("%s", id, sizeof(id));
	printf("패스워드: ");
	scanf_s("%s", password, sizeof(password));

	while (noFields != EOF)
	{
		noFields = fscanf_s(fp, "%s %s %s %s",
			fid, sizeof(fid)
			,fpassword, sizeof(fpassword)
			,fname, sizeof(fname)
			,ftype, sizeof(ftype));

		if ( strcmp(id, fid) == 0 
			&& strcmp(password, fpassword) == 0)
		{
			printf("%s 님 환영ㅋㅋ\n", fname);
			fclose(fp);
			return;
		}
		strcpy_s(fid, sizeof(fid), "");
		strcpy_s(fpassword, sizeof(fpassword), "");

		//printf("%s %s %s %s\n", fid, fpassword, fname, ftype);
	}
	printf("그런 사용자 없음 ㅋㅋ\n");
	fclose(fp);
}

void main()
{
	int selectNum;

	printf("[학사관리 시스템]\n");
	printf("1. 로그인\n");
	printf("2. 회원가입\n");
	printf("0. 종료\n");
	printf("메뉴선택: ");
	scanf_s("%d", &selectNum);

	switch (selectNum)
	{
	case 1:
		SignIn();
		break;
	case 2:
		SignUp();
		break;
	case 0:
		printf("종료되었습니다.\n");
		break;
	default:
		printf("잘못된 입력입니다.^^\n");
	}
}