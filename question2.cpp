#include<iostream>
using namespace std;

class Batsman{
    private:
    int bcode;
    char bname[20];
    int innings;
    int notout;
    int runs;
    float batavg;

  float calcavg(){
    batavg = runs/(innings-notout);
    return 0;

    }

    public:
    int readdata(){
       
        if(bcode>999 || bcode<10000){
        cout<<"Enter the bcode : "<<endl;
         cin>>bcode;
        
        }
        cout<<"Enter the name "<<endl;
        cin>>bname;
        cout<<"Enter the innings"<<endl;
        cin>>innings;
        cout<<"Enter the notout"<<endl;
        cin>>notout;
        cout<<"Enter the runs"<<endl;
        cin>>runs;
        


    }
    int displaydata(){
        cout<<"Bcode : "<<bcode<<endl;
        cout<<"Name : "<<bname<<endl;
        cout<<"innings : "<<innings<<endl;
        cout<<"notout : "<<notout<<endl;
        cout<<"runs : " <<runs<<endl;
        cout<<"Average vakue of batsman : "<<calcavg()<<endl;
    }

};
int main(){
    Batsman b;
    b.readdata();
    b.displaydata();
}