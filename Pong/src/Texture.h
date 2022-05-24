#pragma once
#include "SDL_image.h"
#include "Graphics.h"
#include "Entity.h"
#include <iostream>

class Texture : public Entity
{
public:

	SDL_Texture* loadTexture(const char* fileName);

	void renderTexture(int dstW, int dstH);
	void renderClippedTexture(int srcX, int srcY, int srcW, int srcH, int dstX, int dstY, int dstW, int dstH);



	Graphics* getGraphics() { return hGraphics; }
	SDL_Texture* getTexture() { return hTexture; }
	SDL_Rect* getDestRect() { return &hDestRect; }
	

	Texture(Vector2 startingPos = Vector2(0.0f, 0.0f));
	~Texture();
private:

	SDL_Surface* hSurface;
	SDL_Texture* hTexture;
	Graphics* hGraphics;

	SDL_Rect hSrcRect, hDestRect;

	
};