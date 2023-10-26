#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <climits>
#include <math.h>
using namespace std;

int makeBeautiful(string str) {
    int count=0;
	for (int i = 0; i < str.size()-1; )
    {
        cout << "i: " << i << endl;
        cout << "str[i+1] = " << str[i+1] << " str[i] = " << str[i] << " str[i]+pow(-1,str[i]) = " << (str[i]+pow(-1,(int)str[i])) << endl;
        cout << "if evaluates to: " << (str[i+1]!=(str[i]+pow(-1,str[i]))) << endl;
        if (str[i+1]!=(str[i]+pow(-1,(int)str[i])))
        {
            str[i+1]=(str[i]+pow(-1,str[i]));
            cout << "changed str[i+1]" << endl;
            cout << "new str: " << str << endl;
            i++;
            count++;
        } else {
            i++;
        }
        cout << "loop ended. i: " << i << " count: " << count << endl;
    }
   return count;
}

class Runner
{
    int t;
    vector<string> str;

public:
    void takeInput()
    {
        cin >> t;
        for (int c = 0; c < t; c++)
        {
            string temp;
            cin >> temp;
            str.push_back(temp);
        }
    }

    void execute()
    {
        vector<string> strCopy = str;
        for (int i = 0; i < t; i++)
        {
            int ans = makeBeautiful(strCopy[i]);
        }
    }

    void executeAndPrintOutput()
    {
        for (int i = 0; i < t; i++)
        {
            int ans = makeBeautiful(str[i]);
            cout << ans << "\n";
        }
    }
};

int main()
{
   
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();

    return 0;
}