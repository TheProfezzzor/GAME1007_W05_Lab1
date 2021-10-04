#include <iostream>
using namespace std;

// Init function. Sets up SDL and all subsystems.
void Init()
{
	cout << "Initializing game..." << endl;
}

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

// Clean function. De-initializes SDL.
void Clean()
{
	cout << "Cleaning game..." << endl;
}

// Run function. Contains main game loop.
int Run()
{
	bool isRunning = true;
	char input;

	Init();
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
	Clean();
	return 0;
}

// main function. Entry point in every C++ program.
int main()
{
	return Run();
}