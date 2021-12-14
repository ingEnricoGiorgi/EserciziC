public abstrac class Azione () (
    private:
    String nome;
    public:
    Azione(String s){nome=s;} 
    abstract String dettagli();
    //void esegui
    void debug(){
    std::cout << "il mio nome è"<< nome <<"\n"<<dettagli();
    };   
 )

 class Tweet : Azione(){
     private: //variabili
     String messaggio;

     public: //metodi
     Tweet(String s, String m){ super(s); messaggio=m;}
     void setMessaggio(string m ) {messaggio=m;}
     String dettagli(){return messaggio;}
 }