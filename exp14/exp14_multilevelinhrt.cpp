//PRAKHAR GUPTA
//23070123101
# include<iostream>
using namespace std;

class planets {
    public:
    string st, ju;

    void gas(){
        cout<< "The planet which are gas giants: "<<endl;
        cin>>st>>ju;
        
    }
};
class li :
public
planets{
    public:
    string et;
    void life(){
    
    cout<< " Planet with life: "<<endl;
    cin>>et;
    
}
};

class SolarSystem : public
li{
    public:
    string cm,cl;
    void comets(){
        cout<< "The home of comets: "<<endl;
        cin>>cm>>cl;
        
    }


void display(){
     cout<< st<<" & "<<ju << " are gas giants."<<endl;
  
     cout<< et <<" is the planet with life."<<endl;
  cout<< cm <<" "<< cl<<" is the home of comets"<<endl;
}
};
int main (){
    SolarSystem d;
    d.life();
    d.comets();
    d.gas();
    d.display();
}
