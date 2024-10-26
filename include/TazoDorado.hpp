class  TazoDorado
{
private:
     bool flotando;

public:
     TazoDorado() {
        //Cuando se inicializa, flotando es falso. Referenciamos la ubicacion actual
        this->flotando=false;
     }

     void Inicializar() {
        this->flotando=false;
     }
    ~ TazoDorado() {
    }

    void Flotar(){
            this->flotando=true;
        }

     bool Flotando(){
          return this->flotando;
     }
};