#include <bits/stdc++.h>
#include "quickSort.cpp"
using namespace std;
vector<double> parseInt(string s)
{
    vector<double> v;
    string st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ' || i == s.size() - 1)
        {
            if (i == s.size() - 1)
                st += s[i];
            v.push_back(stoi(st));
            st = "";
        }
        else
        {
            st += s[i];
        }
    }
    return v;
}
int main()
{
    ifstream input("rakib.txt");        //file read
    ofstream output("output.txt");      //file write
    int tc;
    input >> tc;                        //test case
    output<<"The output is as follows:"<<endl;
    output<<"-------------------------"<<endl<<endl;
    quickSort<double> qsort; 
    while (tc--)
    {
        string s;
        while (getline(input, s))
        {
            if (s == "")
                continue;
            vector<double> v = parseInt(s);
            qsort.sort(v,0,v.size()-1);
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
                output<<v[i]<<" ";
                
            }
            cout<<endl;
            output<<endl;
        }
    }
    input.close();
    output.close();
}