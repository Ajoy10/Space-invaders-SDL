#pragma once
#include "SDL.h"
#include "SDL_image.h"

static class TextureManager
{
public:
	static SDL_Texture* LoadTexture(const char* filename, SDL_Renderer* renderer);
};
