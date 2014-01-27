#include <iostream>
#include <cstring>

char* tmp_name(void) {
	static char name[30];
	static int sequence = 0;

	++sequence;

	strcpy(name, "tmp");

	name[3] = static_cast<char>(sequence + '0');
	name[4] = '\0';

	return name;
}

int main(void)
{
	char name1[100];
	char name2[100];

	strncpy(name1, tmp_name(), sizeof(name1));
	strncpy(name2, tmp_name(), sizeof(name2));

	std::cout << "Name: " << name1 << '\n';
	std::cout << "Name: " << name2 << '\n';
	return 0;
}
