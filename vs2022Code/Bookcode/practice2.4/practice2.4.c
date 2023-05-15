#include<stdio.h>
int main(void)
{
	jolly();
	jolly();
	jolly();
	deny();  //2.4

	printf("Brazil,Russia£¬India,China\n");
	br();
	ic();    //2.5


	return 0;
}
jolly(void)
{
	printf("For he's a jolly good fellow!\n");

}
deny(void)
{
	printf("Which nobody can deny!\n");

}
br(void)
{
	printf("Brazil,Russia\n");

}
ic(void)
{
	printf("India,China\n");
}