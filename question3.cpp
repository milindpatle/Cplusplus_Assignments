#include <iostream>
using namespace std;

class Test
{
private:
    int TestCode;
    string Description;
    int NoCandidates;
    
    int total;

    int CALCNTR()
    {
        total = NoCandidates / 100 + 1;
        return total;
    }

public:
    int SCHEDULE()
    {

        cout << "Enter the TestCode : " << TestCode << endl;
        cin >> TestCode;
        cout << "Enter the Description : " << Description << endl;
        cin >> Description;
        cout << "Enter the NoCandidate : " << NoCandidates << endl;
        cin >> NoCandidates;
        // cout << "Enter the CenssterReqd : " << CenterReqd << endl;
        // cin >> CenterReqd;
    }
    int DISPTEST()
    {
        cout << "TestCode : " << TestCode << endl;
        cout << "Description : " << Description << endl;
        cout << "NoCandidate : " << NoCandidates << endl;
      //  cout << "CenterReqd : " << CenterReqd << endl;
        cout << "Calculated Center : " << CALCNTR() << endl;
    }
};
int main()
{
    Test t;
    t.SCHEDULE();
    t.DISPTEST();
}