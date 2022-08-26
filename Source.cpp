#include <iostream>

using namespace std; 

int str_len(char a[]) // chieu dai String
{
	int i; 
	for (i = 0; a[i] != 0; i++)
	{
	}
	return i; 
}

void strCopy(char dest[], char src[]) // Copy String
{
	int i; 
	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = 0; // tranh string co ki tu IIII
}

bool strCmp(char a[], char b[]) // So sanh String
{
	int i; 
	for (i = 0; a[i] != 0 && b[i] != 0; i++)
	{
		if (a[i] != b[i]) return false; 
	}

	if (a[i] != 0) return false; 
	if (b[i] != 0) return false;

	return true; 
}

void rev(char dest[] , char src[]) // Dao nguoc String
{
	int len = str_len(src); 
	int j = 0; 
	for (int i = len - 1; i >= 0; i--)
	{
		dest[j] = src[i]; 
		j++; 
	}
	dest[j] = 0; 
}

int atoi(char a[]) // Chuoi sang so
{
	int number = 0 ; 
	char c = '9'; 
	for (int i = 0; a[i] != 0; i++)
	{
		int n = a[i] - '0'; 
		number = number * 10 + n; 

	}
	return number; 
}

void itoa(int number , char dest[]) // So sang chuoi
{
	char src[20]; 
	int i = 0; 
	while (number > 0)
	{
		int a = number % 10; 
		src[i] = a + '0'; 
		i++; 
		number /= 10; 
	}
	src[i] = 0; 
	rev(dest, src); 
}

int main()
{
	char a[20] = "Hello World";
	char b[20]; 
	strCopy(b, a); 
	cout << int('a') << endl;
	char c[20] = "Hello World"; 
	if (strCmp(a, c))
	{
		cout << "Giong nhau" <<endl; 
	}
	else {
		cout << "Khac nhau" << endl;
	}
	char d[20] ="";
	rev(d, a); 
	cout << d << endl;
	char e[20] = "123"; 
	cout << atoi(e) + 100 << endl;
	int f = 532; 
	char h[20]; 
	itoa(f,h); 
	cout << h;
	return 0; 
}