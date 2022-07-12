#include <iostream>
using namespace std;

int main()
{
	char route[1000];
	cin.getline(route, 1000, '\n');
	int vertical = 0;
	int horizontal = 0;

	for (char dir : route) {
		if (dir == '\0')break;
		switch (dir) {
		case 'E': horizontal++; break;
		case 'W': horizontal--; break;

		case 'N': vertical++; break;
		case 'S': vertical--; break;
		default: break;
		}
	}
	cout << "Shortest Path: ";
	if (vertical > 0)
		while (vertical-- > 0)
			cout << 'N';
	else
		while (vertical++ < 0)
			cout << 'S';

	if (horizontal > 0)
		while (horizontal-- > 0)
			cout << 'E';
	else
		while (horizontal++ < 0)
			cout << 'W';

	return 0;
}
