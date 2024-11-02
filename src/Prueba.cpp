#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame=0;
    int frame_luna=0;

    while (true)
    {
        int x_luna=frame_luna;
        int x = frame;  // Desplazamiento en el eje x para el carro
        auto can = Canvas(300, 400);

        //Luna
        can.DrawBlockCircleFilled(x_luna,10, 10);

        // Suelo
        can.DrawBlockLine(0, 100, 300, 100);

        // Dibujar el carro en su nueva posición con x
        can.DrawBlockLine(120 + x, 50, 160 + x, 50); // Techo
        can.DrawBlockLine(160 + x, 50, 170 + x, 70);
        can.DrawBlockLine(170 + x, 70, 190 + x, 70);
        can.DrawBlockLine(190 + x, 70, 190 + x, 90);
        can.DrawBlockLine(190 + x, 90, 50 + x, 90);   // Suelo
        can.DrawBlockLine(50 + x, 90, 50 + x, 70);
        can.DrawBlockLine(50 + x, 70, 120 + x, 70);
        can.DrawBlockLine(120 + x, 70, 120 + x, 50);

        // Ventana del carro
        can.DrawBlockLine(130 + x, 55, 155 + x, 55);
        can.DrawBlockLine(155 + x, 55, 165 + x, 70);
        can.DrawBlockLine(165 + x, 70, 130 + x, 70);
        can.DrawBlockLine(130 + x, 70, 130 + x, 55);

        // Llantas del carro
        can.DrawBlockCircleFilled(160 + x, 90, 10);
        can.DrawBlockCircleFilled(80 + x, 90, 10);

    //---------------------------------------

        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element lienzo = bgcolor(Color::Green, canvas(&can));
        Render(pantalla, lienzo);
    
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.05s);
        frame++;
        frame++;

        // Reiniciar la posición del carro
        if (x > 300){
           frame = 0; 
        }

    frame_luna++;
        if (x_luna > 300)
            frame_luna = 0;
            
    }

    return 0;
}
