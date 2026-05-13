#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<time.h>
#include<stdbool.h>
int  addnumber(int x, int y)
{
	int x1=x;
	while(x1>0)
	{
		y=y*10;
		x1=x1/10;
	}
	 return x1+y;
}
	bool chek(char satr[])
{
	int n=strlen(satr);
	for(int i=0;i<n;i++)
	{
		if(satr[i]>='a' && satr[i]<='z'|| satr[i]>'A' && satr[i]<'Z')
			return true;
		else
			return false;
	}
}
	void power(long number,long *two,long *three,long *four)
	{
		*two=number*number;
		*three=number*number*number;
		*four=(*two)*(*two);
	}
		void power_down(long n,long  *root)
	{
		int i=0;
		while(i*i<=n)
		{
			i++;
		}
		*root=i-1;
}
int main()
{
	system("clear");
	srand(time(0));
	int variant,misol;
	printf("1,2,3 ta variantladan birini tanlang\n");
	printf("1 chi variant\n ");
	printf("2 chi variant\n ");
	printf("3 chi variant\n ");
	printf("  >>\n");
	scanf("%d" ,&variant);
	switch(variant)
	{
		case 1:
		printf("siz birinchi variantni tanladingiz\n");
		printf("bu variantta 3,4,5 chi misollar bor birini tanlang\n");
		printf(" >>> \n");
		scanf("%d" ,&misol);
			switch(misol)
			{
				case 3:
					printf("siz 3 chi misolni tanladingiz\n");
					int x,y;
					printf("x va y ni kiriting");
					scanf("%d%d" ,&x,&y);
					int res=addnumber(x,y);
					printf("result=%d " ,res);
					break;
					case 4:
					printf("siz 4 chi misoldasiz\n");
					int n;
					printf(" n >> ");
					scanf("%d" ,&n);
					int ms[n][n];
					for(int i=0;i<n;i++)
					{
						for(int j=0;j<n;j++)
						{
							scanf("%d" ,&ms[i][j]);
						}
					}
						for(int i=0;i<n;i++)
						{
							for(int j=0;j<n;j++)
							{
								if(i+j==n-1 || i==j)
								ms[i][j]=0;
							}
						}
						for(int i=0;i<n;i++)
						{
							for(int j=0;j<n;j++)
							{
								printf("%d " ,ms[i][j]);
							}
								printf("\n\n");
						}
							break;
					case 5:
						printf("siz 5 chi misoldasiz\n");
						char satr[100];
						printf("satrni kiriting >> ");
						scanf("%[^\n]%*c",satr);
						for(int i=0;satr[i]!='\0';i++)
						{
							if(chek(satr))
							printf("*");
							else
							printf("%c" ,satr[i]);
						}
						break;
						default:
						printf("bunday misol yuq\n");
						}
							break;
				case 2:
				printf("siz 2 chi variantasiz \n");
				printf("3,4,5,6 misollardan birini tanlang\n");
				scanf("%d" ,&misol);
				switch(misol)
				{
					case 3:
						printf("3 chi misolni tanladingiz\n");
						char son[100];
						printf("sonni kiriting\n");
						scanf("%s" ,&son);
						int n=strlen(son);
						int count=0;
						for(int i=0;i<n;i++)
						{
							if(isdigit(son[i]) == 0 && son[i] !='.')
							{
							printf("NULL\n");
							return 0;
							}
							if(son[i] == '.')
							count++;
						}
						if(count>=2)
						puts("NULL");
						else if(count == 1)
						puts("kasr");
						else
						puts("butun");
						break;
					case 4:
					printf("siz 4 chi misoldasiz\n");
					    int n;
					scanf("%d" ,&n);
 				         int ms[n][n];
          				for(int i=0;i<n;i++)
          				{
                			 for(int j=0;j<n;j++)
                			 {
                		         scanf("%d" ,&ms[i][j]);
              				   }
         printf("\n");
         }
         for(int i=0;i<n;i++)
         {
                 for(int j=0;j<n;j++)
                 {
                                 printf("%4d" ,ms[i][j]);
                         }
         printf("\n\n");
                 }
         for(int i=0;i<n;i++)
         {
                 for(int j=0;j<n;j++)
                 {
                         if(i == 0 || i == n-1 ||j == 0 || j == n-1)
                         ms[i][j]=0;
                 }
         }
                 printf("\n");
                 for(int i=0;i<n;i++)
                 {
                         for(int j=0;j<n;j++)
                         {
                                 printf("%4d" ,ms[i][j]);
                         }
                 printf("\n");
         }
		break;



		case 5:
			printf("siz 5 chi misoldasiz\n");
			long int son,ikki,uch,turt;
			printf("sonni kiriting\n");
			scanf("%ld" ,&son);
			power(son,&ikki,&uch,&turt);
			printf("%ld\n" ,ikki);
			printf("%ld\n" ,uch);
			printf("%ld\n" ,turt);
			break;



			case 6:
			printf("siz 6 chi misoldasiz \n");
			char ifoda[100];
			int plus=0,kup=0,bul=0,qavs=0;
			FILE *f=fopen("if.txt","r");
			if(f == NULL)
			{
				puts("hatolik");
				return 0;
			}
			while(1)
			{
				int n=fscanf(f,"%[^\n]%*c" ,ifoda);
				if(n!=1)
				{
					break;
				}
				for(int i=0;i<strlen(ifoda);i++)
				{
					if(ifoda(i) == '+')
					plus++;
					else if(ifoda(i) == '*')
					kup++;
					else if(ifoda[i] == '/')
					bul++;
					else if(ifoda[i] == '(')
					qavs++;
				}
				}
				fclose(f);
				FILE *m=fopen("out.txt","w");
				if(m ==NULL)
				{
					puts("hatolik");
					return 0;
				}
				fprintf(m,"plus=%d" ,plus);
				fprintf(m,"kup=%d" ,kup);
				fprintf(m,"bul=%d" ,bul);
				fprintf(m,"qavs=%d" ,qavs);
				fclose(m);
				default:
				printf("bunday misol yuq\n");
				}
				break;
				case 3:
					printf("siz 3 chi variantasiz\n");
					printf("bu yerda 4,5,6 chi misollar bor bittasini tanlang\n");
					printf(" >> ");
					scanf("%d" ,&misol);
					switch(misol)
					{
						case 4:
							printf("siz 4 chi misoldasiz \n");
							int n=5;
							int ms[n][n];
							for(int i=0;i<n;i++)
							{
								for(int j=0;j<n;j++)
								{
									scanf("%d" ,&ms[i][j]);
								}
							}
							for(int i=0;i<n;i++)
							{
								for(int j=0;j<n;j++)
								{
									if(j>i)
									ms[i][j]=0;
								}
							}
							for(int i=0;i<n;i++)
							{
								for(int j=0;j<n;j++)
								{
									printf("%d " ,ms[i][j]);
								}
							printf("\n\n");
							}
							break;
					case 5:
					printf("siz 5 chi misoldasiz ");
					int n,
					int *root;
					printf(" n >> ");
					scanf("%d" ,&n);
					power_down(n,&root);
					printf("root=%d\n" ,root);
					break;
					case 6:
						printf("siz 6 chi misolda siz");
						char matn[100];
						FILE *f=fopen("string.txt","r");
						FILE *m=fopen("result.txt","w");
						if(f ==NULL || m==NULL)
						{
							puts("hatolik");
							return 0;
						}
						char rev[100];
						while(1)
						{
							int n=fscanf(f,"%[^\n]%*c" ,matn);
							if(n!=1)
							{
								break;
							}
							int k=strlen(matn);
							for(int i=0;i<k;i++)
							{
								rev[i]=matn[n-i-1];

							}
								rev[n]='\0';
								if(strcmp(matn,rev)==0);
								fprintf(m,"palindrom\n");
								else
								fprintf(m,"palindrom emas");
								fclose(f);
								fclose(m);
							}
								default:
								printf("bunday misol mavjud emas\n");
							}
								break;
}
			return 0;
}
