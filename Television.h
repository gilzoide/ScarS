#pragma once
#include <GL/glew.h>

#include "GameObject.h"
#include "VertexBufferObject.h"
#include "FrameBuffer.h"

class Television : public GameObject {

public:
	Television();

	void draw(bool shadow = false) override;
	void update() override;
	void create();

	void startDrawing();
	void stopDrawing();

private:

	unsigned int vao;
	VertexBufferObject vbo;
	FrameBuffer frameBuffer;
	
};