#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <string>

using namespace std;

    class Character {
    public:
        int predkosc;
        int sila;
	    string nazwa;
		int poz_x;
        int poz_y;


    };
    class Postac : Character {
    public:
        int celnosc;
        int wytrzymalosc;
        int udzwig;
        int glod;
        int woda;
        int zycie;

        int ogrod;
        int sen;


    };


    class Zombie : Character {
    public:

        void szukaj(){}

    };
    class Przedmiot {
    public:
        string nazwa;
        int waga;

        void uzyj() {
           
        }
        Przedmiot() {
            
        }


        ~Przedmiot() {
           
        }



    };

    class Jedzenie : public Przedmiot {
    public:
        int kalorie;
        int trwalosc;

        void zjedz() {
            cout << "Zjedzono " << this->nazwa << endl;
        }
        ~Jedzenie() {

        }
    };
    class Bron : public Przedmiot {
    public:
        int obrazenia;
        int zasieg;


        ~Bron() {

        }
    };


    int main()
    {
        sf::SoundBuffer pistol_shot("sound_effect/pistol_shot.mp3");
		int i = 0;
        sf::Sound sound(pistol_shot); sound.play(); i++; 
      
		cout << "Pistol shot sound loaded successfully!" << endl;

        sf::RenderWindow window(sf::VideoMode({ 200, 200 }), "Zombie Survival");
        sf::CircleShape shape(100.f);
        shape.setFillColor(sf::Color::Green);
       

        while (window.isOpen())
        {
            while (const std::optional event = window.pollEvent())
            {
                if (event->is<sf::Event::Closed>())
                    window.close();
            }

            window.clear();
            window.draw(shape);
            window.display();
        }
    }