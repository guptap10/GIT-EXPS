//PRAKHAR GUPTA
//23070123101
# include<iostream>
using namespace std;

class Galaxy {
    public:
    string gy,wy,gr,cr;
    void gl(){
        cout<<" Which Galaxy: "<<endl;
        cin>>gy>>wy;
        

    }
    void display(){
        cout<< "Galaxy: "<< gy<<" "<<wy<<endl;
        cout << "Group: "<<gr<<" "<<cr<<endl;

    }
};

class Earth: public Galaxy{
    public:
   
    void gp(){
        cout<< "Which Group: "<<endl;
        cin>>gr>>cr;
        cout << "Group: "<<gr<<" "<<cr<<endl;
    }
};
class NGC: public Galaxy{
       public:
    
    void go(){
        cout<< "Which Group: "<<endl;
        cin>>gr>>cr;
        
    }

};

int main(){
    Earth d;
    NGC c;
    d.gl();
    d.gp();
    d.display();

    c.gl();
    c.go();
    c.display();
    return 0;

}
