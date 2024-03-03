/*
Raylib example file.
This is an example main file for a simple raylib project.
Use this as a starting point or replace it with your code.

For a C++ project simply rename the file to .cpp and run premake 

*/

#include "raylib.h"

int main()
{
	const int screenWidth = 800;
	const int screenHeight = 450;
	// set up the window
	InitWindow(screenWidth, screenHeight, "Hello Raylib");

	Vector2 ballPosition = {(float)screenWidth / 2, (float)screenHeight / 2};

	SetTargetFPS(60);
	
	// game loop
	while (!WindowShouldClose())
	{

		if (IsKeyDown(KEY_RIGHT)) ballPosition.x += 2.0f;
		if (IsKeyDown(KEY_LEFT)) ballPosition.x -= 2.0f;
		if (IsKeyDown(KEY_UP)) ballPosition.y -= 2.0f;
		if (IsKeyDown(KEY_DOWN)) ballPosition.y += 2.0f;

		// drawing
		BeginDrawing();

		ClearBackground(BLACK);

		DrawText("Hello Raylib", 200, 200, 20, WHITE);

		Vector2 mousePosition = GetMousePosition();

		DrawCircle(mousePosition.x, mousePosition.y, 20.f, RED);

		DrawCircleV(ballPosition, 20.f, BLUE);
		
		EndDrawing();
	}

	// cleanup
	CloseWindow();
	return 0;
}