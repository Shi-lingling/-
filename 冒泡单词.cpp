#include <stdio.h>
#include <string.h>

void sort_length(char (*p)[11], int n);    //ʹ������ָ��ָ���ά���� 

int main()
{
    char word[21][11];						//������20�� ������10��  Ҫ�࿪һ����Ž����� 
    char str[11];
    int i, j, n;

    i = 0; n  = 0;
    while (1)
    {
        scanf("%s", str);
        if (str[0] == '#')						//����д��str == '#'   str���ַ������׵�ַ 
            break;
        strcpy(word[i], str);
        i++;
        n++;								//n��¼�ַ����ĸ��� 
    }
    sort_length(word, n);

    return 0;
}
void sort_length(char (*p)[11], int n)
{
    int i, j;
    char temp[11];

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (strlen(p[j]) > strlen(p[j + 1]))
            {
                strcpy(temp, p[j]);
                strcpy(p[j], p[j + 1]);
                strcpy(p[j + 1], temp);
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%s ", p[i]);
}
