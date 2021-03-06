#pragma once
#include "GUIParams.h"
#include <glm/glm.hpp>

struct Input {

	static const float SCREEN_ROTATE_RATE;
	static const float SCREEN_PAN_RATE;
	static const float SCREEN_SCROLL_RATE;

	enum Pressed { UP, DOWN };

	Input();
	static Input& getInstance();
	static Input* m_instance;

	Pressed left_mouse, right_mouse, mid_mouse;
	glm::vec2 last_mouse, mouse;
	bool last_mouse_valid;
	bool running, lastFrame;

	glm::vec2 updateMousePos(glm::vec2 mouse);
	glm::vec2 getMouseDiff();
	void reset();

	unsigned int hlIndex;
	int frameCount;

	int startMovingFrame;
	bool moving;
};