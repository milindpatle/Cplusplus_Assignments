#include <iostream>
using namespace std;

class student
{
private:
    int adminno;
    char cname[20];
    float eng, math, science;
    float total;

    float ctotal()
    {
        return(eng + math + science);

        
    }

public:
    void Takedata()
    {

        cout << "Enter the value of adminno "<<endl;
        cin >> adminno;
        cout << "Enter the vlaue of cname "<<endl;
        cin >> cname;
        cout << "Enter the value of subjects:"<<endl;

        cin >> eng >> math >> science;
        total=ctotal();
    }
    
    void Showdata()
    {
        cout << adminno << endl;
        cout << cname << endl;
        cout << "Total Value :"<< total<< endl;
    }
};
int main()
{
    student ss;
    cout << "Enter the details : "<<endl;
    ss.Takedata();
    ss.Showdata();
    
}