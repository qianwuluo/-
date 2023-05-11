#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//��ӡ����
PrintArray(int* a, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		printf("%d ", *(a + i));

	}
	printf("\n");
}

//��������
void InsertSort(int* a, int n) 
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				end--;
			}
			else {
				break;
			}
		}
		a[end + 1] = tmp;
	}
	
	


}
//ϣ������:ֱ�Ӳ�����������ϵ��Ż�
//1.�Ƚ���Ԥ�����ڽ��в�������
void ShellSort(int* a, int n)
{
	int gap=n;
	while (gap > 1)
	{
		gap /= 2;
		for (int i = 0; i <= n - gap; i++)
		{
			int end = i;

			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > tmp)
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else {
					break;
				}
			}
			a[end + gap] = tmp;

		}
	}
	
	
}


void TestInsert()
{
	int a[] = { 3,5,2,7,8,6,1,9,4,0 };
	InsertSort(a, sizeof(a) / sizeof(a[0]));
	PrintArray(a, sizeof(a) / sizeof(a[0]));
}

void TestShell()
{
	int a[] = { 3,5,2,7,8,6,1,9,4,0 };
	InsertSort(a, sizeof(a) / sizeof(a[0]));
	PrintArray(a, sizeof(a) / sizeof(a[0]));
}
int main(void)
{
	
	//TestInsert();
	TestShell();

	return 0;
}