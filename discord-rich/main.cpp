#include <iostream>
#include "Discord.h"

Discord* g_Discord;

using namespace std;

int main()
{
	g_Discord->Initialize();
	g_Discord->Update();
	cout << "Discord Rich Presence est� funcionando!\n";

	system("PAUSE");
}
