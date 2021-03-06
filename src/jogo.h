
#ifndef JOGO_H
#define JOGO_H
#include<SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include"pecas.h"
#include"instrucoes.h"
#include"recordes.h"
#include<stdio.h>
#include <iostream>

class Jogo
{
    public:
       // void Tabuleiro(int width, int height);
		void RunGame(sf::RenderWindow &window , int *b);
		Jogo(float width , float height);
		int Pause(sf::RenderWindow &window);
        ~Jogo();


    private:
		Pecas pe;
		sf::Music music_game;
		Recordes rec;
		sf::Clock clock;
		sf::Font font;
		sf::Texture background_texture;
		sf::Sprite background_sprite;
		sf::Texture gameover_texture;
		sf::Sprite gameover_sprite;
		sf::Text score;
		sf::Text temporizador_text;
		int pontos;

};

#endif // JOGO_H
