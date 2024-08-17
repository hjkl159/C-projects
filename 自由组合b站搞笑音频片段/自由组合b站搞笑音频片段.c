#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main()
{
	long long aa, ab;
	scanf("%lld", &aa);
	ab = aa;
	int i;
	//i是位数
	for (i = 1; ab >= 10; i++)
	{
		ab /= 10;
	}
	ab = aa;
	// 存放音频的路径
	char *str1 = "D:/codes_draft/bilibili_audio/";
	for (int j = i; j >= 1; j--)
	{
		char *str2;
		long long ac = 1;
		for (int k = j - 1; k >= 1; k--)
		{
			ac *= 10;
		}
		switch (ab / ac)
		{
		case 1:
			sprintf(str2, "%s%s", str1, "1.mp3");
			system(str2);
			Sleep(1100);
			break;
		case 2:
			sprintf(str2, "%s%s", str1, "2.mp3");
			system(str2);
			Sleep(200);
			break;
		case 3:
			sprintf(str2, "%s%s", str1, "3.mp3");
			system(str2);
			Sleep(700);
			break;
		case 4:
			sprintf(str2, "%s%s", str1, "4.mp3");
			system(str2);
			Sleep(700);
			break;
		case 5:
			sprintf(str2, "%s%s", str1, "5.mp3");
			system(str2);
			Sleep(1000);
			break;
		case 6:
			sprintf(str2, "%s%s", str1, "6.mp3");
			system(str2);
			Sleep(1700);
			break;
		case 7:
			sprintf(str2, "%s%s", str1, "7.mp3");
			system(str2);
			Sleep(1500);
			break;
		case 8:
			sprintf(str2, "%s%s", str1, "8.mp3");
			system(str2);
			Sleep(600);
			break;
		case 9:
			sprintf(str2, "%s%s", str1, "9.mp3");
			system(str2);
			Sleep(700);
			break;
		}
		ab %= ac;
	}
	return 0;
}


