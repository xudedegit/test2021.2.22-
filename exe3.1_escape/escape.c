#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void escape(char s[], char t[])
{
	int i, j;
	for (i = j = 0; t[i] != '\0'; i++)
	{
		//���ַ���t���Ƹ��ַ���s������ת���ַ�ת����\n \t��
		switch (t[i])
		{
		case '\n':
			s[j++] = '\\';
			s[j++] = 'n';
			break;
		case '\t':
			s[j++] = '\\';
			s[j++] = 't';
			break;
		default:
			s[j++] = t[i];
			break;
		}
		

	}s[j] = '\0';
}

int main()
{
	char s[10] = { 0 };
	escape(s, "abc	def");
	printf("%s\n", s);
}