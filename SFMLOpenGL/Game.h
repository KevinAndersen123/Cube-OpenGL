#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include <gl/GL.h>
#include <gl/GLU.h>

#include "InitialMyMatrix3.h"
#include "MyVector3.h"


using namespace std;
using namespace sf;
class Game
{
public:
	Game();
	~Game();
	void run();

	MyVector3 v1{ 1.0f, 1.0f, -1.0f };
	MyVector3 v2{ -1.0f, 1.0f, -1.0f };
	MyVector3 v3{ -1.0f, -1.0f, -1.0f };
	MyVector3 v4{ 1.0f, -1.0f, -1.0f };

	MyVector3 v5{ 1.0f, 1.0f, 1.0f };
	MyVector3 v6{ -1.0f, 1.0f, 1.0f };
	MyVector3 v7{ -1.0f, -1.0f, 1.0f };
	MyVector3 v8{ 1.0f, -1.0f, 1.0f };

	MyVector3 vectors[8];
	//MyVector3 startingVectors[8];

private:
	Window window;
	bool isRunning = false;
	void initialize();
	void update();
	void draw();
	void unload();
	void checkInput();

	GLuint index;
	Clock clock;
	Time elapsed;

	float rotationAngle = 0.0f;
};