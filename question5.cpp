#include<iostream>
using namespace std;

 class BOOK{
    private:
    int Book_No;
    char Booktitle[20];
    float Price;
    
    float TOTAL_COST(int i){
       int total =i*Price;
       return total;


    }
    public:

    int INPUT(){
        cout<<"Enter the Book Number : "<<endl;
        cin>>Book_No;
        cout<<"Enter the Booktitle : "<<endl;
        cin>>Booktitle;
        cout<<"Enter the Price : "<<endl;
        cin>>Price;

    }   
    void PURCHASE(){
        cout<<"Book NUmber : "<<Book_No<<endl;
        cout<<"BookTitle :"<<Booktitle<<endl;
        cout<<"Price : "<<TOTAL_COST(Book_No)<<endl;


    }


 };
 int main(){
    BOOK b;
    b.INPUT();
    b.PURCHASE();
    return 0;
 }