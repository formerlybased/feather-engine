#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>
#include "feather/components/transform.h"
#include "feather/components/sprite.h"
#include "feather/entities/entity.h"
#include "feather/entities/sharedcontext.h"
#include "feather/systems/entitymanager.h"
#include "feather/resourcemanager.h"
#include "feather/window.h"
#include "feather/game.h"

int main(int argc, char* argv[]) {

    fl::Game game(std::string("Game Window"));

	std::shared_ptr<fl::Entity> entity = std::make_shared<fl::Entity>(&game.context);

	auto transform = entity->addComponent<fl::Transform>();
	auto sprite = entity->addComponent<fl::Sprite>();
	transform->position.x = 64;
	transform->position.y = 64;

	sprite->loadTextureFromFile("./player.png");

	game.em->add(entity);

	// START GAME LOOP

    do {
		// Handle Events
		SDL_Event e;
		while (SDL_PollEvent(&e) != 0) {
			if (e.type == SDL_QUIT) {
				game.win->close();
			}
		}

        game.update();

	} while(game.win->isOpen());

    game.quit();
	return 0;
}
