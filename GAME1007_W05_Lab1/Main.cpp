#include <iostream>
using namespace std;

// HandleEvents function. Handles events.
void HandleEvents()
{
	cout << "Handling events..." << endl;
}

// Update function. Processes assets.
void Update()
{
	cout << "Processing..." << endl;
}

// Render function. Updating the screen.
void Render()
{
	cout << "Rendering..." << endl;
}

// Run function. Contains main game loop.
int Run()
{
	bool isRunning = true;
	char input;
	while (isRunning)
	{
		HandleEvents(); // Input.
		Update(); // Processing.
		Render(); // Output.
		cout << "Do you want to quit? [y/n]: ";
		cin >> input;
		if (input == 'y')
			isRunning = false;
	}
	return 0;
}

// main function. Entry point in every C++ program.
int main()
{
	return Run();
}