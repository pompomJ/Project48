#include <stdio.h>

int main()
{
	struct bank
	{
		int account;
		float balance;
	};
	
	struct bank checking;

	checking.account = 12345;
	checking.balance = 697.89;

	printf("Checking account %d has a balance of %f\n ", checking.account, checking.balance);

	return 0;

}
