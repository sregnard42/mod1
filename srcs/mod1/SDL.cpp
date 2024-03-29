/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SDL.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sregnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 12:04:15 by sregnard          #+#    #+#             */
/*   Updated: 2019/10/25 12:04:16 by sregnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mod1.h"

void display_window(int width, int height)
{
	//The window we'll be rendering to
	SDL_Window *window = NULL;

	//The surface contained by the window
	SDL_Surface *screenSurface = NULL;

	//Initialize SDL
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
	}
	else
	{
		//Create window
		window = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED,
								  SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);
		if (window == NULL)
		{
			printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
		}
		else
		{
			printf("Window created!\n");
			//Get window surface
			screenSurface = SDL_GetWindowSurface(window);

			//Fill the surface white
			SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));

			//Update the surface
			SDL_UpdateWindowSurface(window);

			SDL_Event e;
			bool quit = false;
			while (!quit)
			{
				while (SDL_PollEvent(&e))
				{
					if (e.type == SDL_QUIT)
					{
						quit = true;
					}
					if (e.type == SDL_KEYDOWN)
					{
						quit = true;
					}
					if (e.type == SDL_MOUSEBUTTONDOWN)
					{
						quit = true;
					}
				}
			}
		}
	}
	//Destroy window
	SDL_DestroyWindow(window);

	//Quit SDL subsystems
	SDL_Quit();
}
