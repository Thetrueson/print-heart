#include<stdio.h>
#include<windows.h>
int main(void)
{
	char a[37][81];
	int i, j;
	for (i = 0; i < 37; i++)
	{
		for (j = 0; j < 81; j++)
		{
			a[i][j] = ' ';
		}
	}
	int w;//Öá
	int z;//ÖÐÖµ
	for (i = 10,w = 41; i < 37;i++)
	{
		for (j = 40, z = 0; z < w;z++)
		{
			a[i][j - z] = '0';
			a[i][j + z] = '0';
		}
		w = w - 2;
	}
	for (i = 10, w = 41; i >= 0; i--, w--)
	{
		for (j = 40, z = 0; z < w; z++)
		{
			a[i][j - z] = '0';
			a[i][j + z] = '0';
		}
	}
	for (i = 0, w = 9; i < 12; i++, w--)
	{
		for (j = 40, z = 0; z < w; z++)
		{
			a[i][j - z] = ' ';
			a[i][j + z] = ' ';
		}
	}
	for (i = 0,j = 9; i < 10; i++)
	{
		for (;;)
		{
			a[i][j] = '0';
			j--;
			break;
		}
	}
	for (i = 0,j = 71; i < 10; i++)
	{
		for (;;)
		{
			a[i][j] = '0';
			j++;
			break;
		}
	}
	for (i = 0, j = 8; i < 9; i++)
	{
		for (;;)
		{
			a[i][j] = '0';
			j--;
			break;
		}
	}
	for (i = 0, j = 72; i < 9; i++)
	{
		for (;;)
		{
			a[i][j] = '0';
			j++;
			break;
		}
	}
	for (i = 0; i < 81; i++)
	{
		a[0][i] = ' ';
	}
	for (i = 0; i < 81; i++)
	{
		a[1][i] = ' ';
	}
	for (i = 2; i < 31; i++)
	{
		for (j = 0; j < 81; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
		Sleep(50);
	}
	Sleep(1000);
	system("cls");
	printf("ÎÒÏ²»¶Äã£¡");
	return 0;
}