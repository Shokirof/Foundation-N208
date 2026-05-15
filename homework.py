#include <stdio.h>
#include <string.h>

void power(long number, long *two, long *three, long *four)
{
    *two = number * number;
    *three = number * number * number;
    *four = number * number * number * number;
}

int main()
{
    int tanlov;

    printf("1 ");
    printf("2 ");
    printf("3 ");
    printf("4 ");
    printf("5 ");

    scanf("%d", &tanlov);

    switch(tanlov)
    {

    case 1:
    {
        int arr[5][5];

        printf("25 ta son kiriting:\n");

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }

        printf("\nnatija:\n");

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (i == 0 || i == 4 || j == 0 || j == 4)
                {
                    printf("0 ");
                }
                else
                {
                    printf("%d ", arr[i][j]);
                }
            }

            printf("\n");
        }

        break;
    }

    case 2:
    {
        long number;
        long two, three, four;

        printf("son kiritn");
        scanf("%ld", &number);

        power(number, &two, &three, &four);

        printf("*two = %ld\n", two);
        printf("*three = %ld\n", three);
        printf("*four = %ld\n", four);

        break;
    }

    case 3:
    {
        FILE *f1 = fopen("1.txt", "r");
        FILE *f2 = fopen("output.txt", "w");

        if (f1 == NULL)
        {
            printf("1.txt topilmadi!\n");
            break;
        }

        char c;

        int plus = 0;
        int minus = 0;
        int multi = 0;
        int divi = 0;
        int bracket = 0;

        while (fscanf(f1, "%c", &c) != EOF)
        {
            if (c == '+')
                plus++;

            else if (c == '-')
                minus++;

            else if (c == '*')
                multi++;

            else if (c == '/')
                divi++;

            else if (c == '(' || c == ')')
                bracket++;
        }

        fprintf(f2, "+ amali %d ta\n", plus);
        fprintf(f2, "- amali %d ta\n", minus);
        fprintf(f2, "* amali %d ta\n", multi);
        fprintf(f2, "/ amali %d ta\n", divi);
        fprintf(f2, "() amali %d ta\n", bracket / 2);

        fclose(f1);
        fclose(f2);

        printf("natuaja output.txt ga yozildi\n");

        break;
    }

    case 4:
    {
        int arr[5][5];

        printf("25 ta son kiriting\n");

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (j > i)
                {
                    arr[i][j] = 0;
                }
            }
        }

        printf("\nchiqdi:\n");

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                printf("%d ", arr[i][j]);
            }

            printf("\n");
        }

        break;
    }

    case 5:
    {
        char str[256];

        printf("Matn kiriting:\n");

        scanf(" %[^\n]", str);

        int len = strlen(str);

        int plus = 0;

        for (int i = 0; i < len; i++)
        {
            if (str[i] == '+')
            {
                plus++;
            }
        }

        int new_len = len + plus * 2;

        str[new_len] = '\0';

        for (int i = len - 1, j = new_len - 1; i >= 0; i--)
        {
            if (str[i] == '+')
            {
                str[j--] = '+';
                str[j--] = '+';
                str[j--] = '+';
            }
            else
            {
                str[j--] = str[i];
            }
        }

        printf("\nchiqdi:\n");
        printf("%s\n", str);

        break;
    }

    default:
    {
        printf("boshiga bori"\n");
    }

    }

    return 0;
}
