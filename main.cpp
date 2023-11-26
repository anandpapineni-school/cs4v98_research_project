#include "Renderer.h"

int main() {
	Renderer m_renderer;
	glDisable(GL_CULL_FACE);
	m_renderer.run();
	return EXIT_SUCCESS;
}