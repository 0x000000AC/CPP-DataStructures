#include <iostream>
#include <iomanip>
#include <stack>
#include <array>

using namespace std;

int main()
{
	int array [3] = {1, 2, 3};
	int x = 3;
	f(array, x);
	
	//stack<int> s;
	//int x =3, y=19;
	
	/*
	s.push(8);
	s.push(x);
	s.push(y);
	x = s.top();
	s.pop();
	cout << x << endl;
	y = s.top();
	s.pop();
	s.push(25);
	while (!s.empty())
	{
		y = s.top();
		s.pop();
		cout << y << " " ;
	}
	*/

	/*
	s.push(6);
	s.push(x);
	s.push(y);
	s.pop();
	s.top() *= 4;
	s.push(35);
	while(!s.empty())
	{
		y = s.top();
		cout << y << " ";
		s.pop();
	}
	//cout << s.top();
	*/

	system("PAUSE");

}

void f(int arr[], int n)
{
	stack<int> stk;
	int i;

	for (i = 0; i < n; i++)
		stk.push(arr[i]);

	i = 0;

	while (!stk.empty())
	{
		arr[i] = stk.top();
		stk.pop();
		i++;
	}
}