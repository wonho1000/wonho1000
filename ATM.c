#include <stdio.h>

void main()
{
	int money = 10000;
	int store;
	int bye;
	int menu;
	int password;
	while(1){
	printf("일조 은행 ATM입니다\n");
	printf("1.입금\n2.출금\n3.조회\n4.종료\n눌러주세요\n");
	scanf("%d", &menu);  // 메뉴를 입력받는다. 
	if(menu == 1){
		printf("입금을 선택하셨습니다.\n");
		printf("입금하실 금액을 입력해주세요.\n");
		scanf("%d", &store);
		money += store; //금액을 입력받는다. 
		printf("현재 잔액은 %d원 입니다.\n", money);
	}else if(menu == 2){
		printf("출금을 선택하셨습니다.\n비밀번호를 입력해주세요\n");
		scanf("%d", &password);
		if(password == 1234){
			printf("확인되었습니다.\n");
			printf("출금하실 금액을 입력해주세요.\n");
			scanf("%d", &bye);
			if(money < bye){
				printf("잔액이 부족합니다.\n");
			}else{
				money -= bye;
			printf("현재 잔액은 %d원 입니다.\n", money);
			}
		}else{
			printf("비밀번호를 확인해주세요.\n");
		}
   
	}else if(menu == 3){
		printf("조회를 선택하셨습니다.\n비밀번호를 입력해주세요\n");
		scanf("%d", &password);
		if(password == 1234){
			printf("확인되었습니다.\n");
			printf("현재 잔액은 %d원 입니다.\n", money);
		}else{
			printf("비밀번호를 확인해주세요.\n");
		}
	}else if(menu == 4){
		printf("종료를 선택하셨습니다.\n프로그램이 종료됩니다.\n");
		break;
		}
	menu++;
	}//end of while
}//end of main




