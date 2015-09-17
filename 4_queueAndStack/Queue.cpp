#include <iostream>
#include <iomanip>
#include <queue>

using namespace std;

int main()
{
	queue<int> q;
	int x =3, y=5;

	q.push(8);
	q.push(x);
	q.push(y);
	q.pop();
	y = q.front();
	q.pop();
	q.push(y);
	q.push(25);
	while (!q.empty())
	{
		y = q.front();
		q.pop();
		cout << y << " ";
	}

	
	/*
	s.push(8);
	s.push(x);
	s.push(y);
	x = s.front();
	s.pop();
	cout << x << endl;
	y = s.front();
	s.pop();
	s.push(25);
	while (!s.empty())
	{
		y = s.front();
		s.pop();
		cout << y << " " ;
	} */

	system("PAUSE");

}