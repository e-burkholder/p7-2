#include <iostream>

using namespace std;

bool all_the_same(int x, int y, int a) {
	if (x == y && y == a)
		return true;
	else
		return false;
}

bool all_different(int x, int y, int a) {
	if (x != y && y != a)
		return true;
	else
		return false;
}

bool sorted(int x, int y, int a) {
	if (x <= y && y <= a)
		return true;
	else
		return false;
}


int main() {
	int x, y, a;
	bool same, diff, sort;

	do {
		cout << "Enter three numbers or Q to quit: ";
		cin >> x >> y >> a;
		if (cin.fail())
			break;
		same = all_the_same(x, y, a);
		diff = all_different(x, y, a);
		sort = sorted(x, y, a);
		if (same == true)
			cout << "Numbers are all the same.\n";
		else
			cout << "Numbers are not all the same.\n";
		
		if (diff == true)
			cout << "Numbers are all different\n";
		else
			cout << "Numbers are not all different\n";
		
		if (sort == true)
			cout << "Numbers are sorted.\n";
		else
			cout << "Numbers are not all sorted.\n";

	} while (!cin.fail());

	return 0;
}
