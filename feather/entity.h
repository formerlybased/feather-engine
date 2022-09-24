#ifndef ENTITY_H
#define ENTITY_H
#include "core.h"
#include "transform.h"

class Entity {
	private:
		bool active;
		SDL_Texture *sprite;
	public:
		Transform transform;

		bool isActive();

		int Enable();
		int Disable();

		int swapSprite(const char *spritePath);

		int Draw();
		int Destroy();
		int Create(const char *spritePath, int x, int y, int width, int height);

		bool Collided(Entity e);
};

#endif
