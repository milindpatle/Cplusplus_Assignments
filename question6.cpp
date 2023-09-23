#include<iostream>
using namespace std;

class Report
{
    private:
        int adno;
        char name[20];
        float marks[5];
        int total;
        int average;
        float GETAVG(){
            for(int i=0; i<5; i++){
                total = total+ marks[i];
            }
            average = total/5;
            return average;
        }
        
    public:
        void READINFO(){
            
            while(true){
            cout<<"Enter adno: ";
            cin>>adno;
            if(adno>999 && adno<10000){
                break;
            }
            }
            cout<<"Enter the name: "<<endl;
            cin>>name;
            cout<<"Enter five elements : "<<endl;
            for(int i=0; i<5; i++){
                cin>>marks[i];
            }
            GETAVG();
        }
        void DISPLAYINFO(){
            cout<<"The value of adno: "<<adno<<endl;
            cout<<"The value of name: "<<name<<endl;
            for(int i=0; i<5; i++){
                cout<<"The value of "<<i+1<<marks[i]<<endl;
            }
        }

};
int main(){
    Report r;
    r.READINFO();
    r.DISPLAYINFO();
    return 0;
}