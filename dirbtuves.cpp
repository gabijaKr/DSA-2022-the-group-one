#include <string>
#include <fcntl.h>
#include <io.h>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <locale>
#include <stdlib.h>
#include <fstream>
#include <cmath>
#include <vector>
using namespace std;
void bubbleSort1(vector<int> &v);
int main()
{
    vector< int > v;
    v.push_back(6);
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.push_back(5);

    for (int i = 0; i < v.size(); ++i)
        cout<<v.at(i);
    cout<<endl;

    bubbleSort1(v);
    cout<<endl;

    for (int i = 0; i < v.size(); ++i)
        cout<<v.at(i);


    return 0;
}
void bubbleSort1(vector<int> &v)
{
    int sw = 0,ifss = 0;
    for (int i = 0; i < v.size()-1; ++i)
    {
        for (int j = 0; j < v.size()-1; ++j)
        {
            ifss++;
             if (v[j] > v[j+1])
             {
                 swap(v[j], v[j+1]);
                 sw++;
             }
        }
    }
    cout<<"Swaps: "<<sw<<endl<<"Ifs: "<<ifss;
}
