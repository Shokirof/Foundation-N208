#include <stdio.h>
#include <ctype.h>
#include <string.h>
void power(long number, long *two, long *three, long *four)
{
	*two = number * number;
	*three = number * number * number;
	*four = (*two) * (*two);
}
int main()
{
	int tanlov;
	printf("Masalani nomerini kiriting(3-6)>>> ");
	scanf("%d", &tanlov);
	switch(tanlov)
	{
		case 3:
		{
			char s[6];
			printf("Satrni kiriting>>> ");
			scanf("%s", s);
			int d=0,p=0; int n=0;
			for(int i = 0;i < strlen(s); i++)
			{
				if(isdigit(s[i]))
					d++;
				else if(s[i] == '.')
					p++;
				else 
					n++;
			}
			if(n == 0 && p == 1 && d>0)
				printf("Kasr\n");
			else if(n == 0 && p == 0 && d>0)
				printf("Butun\n");
			else 
				printf("NULL\n");
			break;
		}
		case 4:
		{
			int a[5][5];
			printf("25 ta son kiriting>>> ");
			for(int i = 0; i<5; i++)
			{
				for(int j=0; j<5; j++)
				{
					scanf("%d", &a[i][j]);
				}
			}
			for(int i = 0; i<5; i++)
			{
				for(int j=0; j<5; j++)
				{
					if(i == 0 || i == 4 || j == 0 || j == 4)
						printf("0 ");
					else
						printf("%d", a[i][j]);
				}
				printf("\n");
			}
			break;
		}
		case 5:
		{
			long n, r2, r3, r4;
			printf("Sonni kiriting>>> ");
			scanf("%ld", &n);
			power(n, &r2, &r3, &r4);
			printf("*two = %ld *three = %ld *four = %ld", r2,r3,r4);
			break;
		}
		case 6: 
		{
			FILE *in = fopen("1.txt", "r");
			if (in == NULL) {
				printf("Fayl topilmadi!");
				break;
			}
			FILE *out = fopen("output.txt", "w");
			int p = 0, m = 0, d = 0, b = 0;
			char ch;
			while (fscanf(in, "%c", &ch) == 1) 
			{
				if (ch == '+') p++;
				else if (ch == '*') m++;
				else if (ch == '/') d++;
				else if (ch == '(') b++;
			}
			fprintf(out, "+ amali %d ta\n* amali %d ta\n/ amali %d ta\n() amali %d ta", p, m, d, b);
			fclose(in);
			fclose(out);
			printf("Natija faylga yozildi.");
			break;

		}
	}
	return 0;
}
