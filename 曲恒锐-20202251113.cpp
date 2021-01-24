#include<iostream>
#include<math.h>
#include<cstdio>
#include<string.h>
using namespace std;
//void q1()
//{
//	int n;
//	float sum, sum1=0, sum2=0;
//	float temp = 1.0;
//	cout << "输入一个整数" << endl;
//	cin >> n;
//	if (n > 1 && n % 2 == 0)
//	{
//		for (int i = 0; i <= n / 2; i++)
//		{
//			sum1 += 1 / temp;
//			temp += 2;
//		}
//		for (int j = 0; j <= n / 2; j++)
//		{
//			sum2 += 1 / (temp + 1);
//			temp += 2;
//		}
//		sum = sum2- sum1;
//		cout << "结果为 " << sum << endl;
//	}
//	else if (n > 1 && n % 2 != 0)
//	{
//		for (int i = 0; i <= (n + 1) / 2; i++)
//		{
//			sum1 += 1 / temp;
//			temp += 2;
//		}
//		for (int j = 0; j <= (n - 1) / 2; j++)
//		{
//			sum2 += 1 / (temp + 1);
//			temp += 2;
//		}
//		sum = sum2 - sum1;
//		cout << "结果为 " << sum << endl;
//	}
//}
//void q2()
//{
//		int i, j, z, n, k;
//		cout << "输入一个奇数 " << endl;
//		cin >> k;
//		k = k / 2 + 1;
//		for (i = 1, n = 1; i <= k; i++)
//		{
//			n = 2 * i - 1;
//			for (j = k - i; j > 0; j--)
//			{
//				cout << " ";
//			}
//			for (z = 0; z < n; z++)
//			{
//				cout << "*";
//			}
//			cout << endl;
//		}
//		n -= 2;
//		for (i = 0; i < k - 1; i++)
//		{
//			for (j = 0; j < i + 1; j++)
//			{
//				cout << " ";
//			}
//			for (z = n - 2 * i; z > 0; z--)
//			{
//				cout << "*";
//			}
//			cout << endl;
//		}
//}
//void q3()
//{
//	/*float a, b, c, d, e;
//	cout << "输入四个数字" << endl;
//	cin >> a, b, c, d;
//	if (a != 0 && b != 0 && c != 0 && d != 0)
//	{
//		e = (a / b )+( c / d);
//		cout << "结果为 " << e << endl;
//	}
//	else
//		cout << "wrong input" << endl;*/
//}
//void q4()
//{
//	char s[200];
//	char t;
//	cout << "输入字符串" << endl;
//	cin>>s;
//	for (int i = 0; i < strlen(s); i++)
//		for (int j = i; j < strlen(s); j++)
//		{
//			if (s[j] < s[i])
//			{
//				t = s[j];
//				s[j] = s[i];
//				s[i] = t;
//			}
//		}
//	cout<<s;
//	return ;
//}
//void q5()
//{
//
//}
//int main()
//{
//	while (1)
//	{
//		cout << "select question(1-5):" << endl;
//		int q;
//		cin >> q;
//		switch (q)
//		{
//		case 1:
//			q1();
//			break;
//		case 2:
//			q2();
//			break;
//		case 3:
//			q3();
//			break;
//		case 4:
//			q4();
//			break;
//		case 5:
//			q5();
//			break;
//		default:
//			cout << "wrong number" << endl;
//		}
//		getchar();
//		getchar();
//	}
//}

