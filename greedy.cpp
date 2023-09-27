#include <iostream>
#include <vector>
using namespace std;

/**
 * Problema de la mochila
 *  M = 15, 
 *  V = [ 10  5  15  7  6  18  3 ]  volumen
 *  P = [ 2   3  5   7  1  4   1 ]  peso
**/


void mochila(int v[7], int p[7], vector<float>& res, int m)
{

    for(int i = 0; i < 7; i++)
    {
        res.push_back(float(v[i])/float(p[i]));
        if(res.size() == 7)
        {
            for(int i = 0; i < res.size(); i++)
            {
                
            }
        }
    }
    //se podria hacer recursiva? para poder sacar todos los elementos mientras los inserta?

}



int main()
{
    int v[7] = {10, 5, 15, 7, 6, 18, 3};
    int p[7] = {2, 3, 5, 7, 1, 4, 1};
    vector<float> res;
    //vector<int> v {10, 5, 15, 7, 6, 18, 3};
    //vector<int> p {2, 3, 5, 7, 1, 4, 1};
    int m = 15;

    mochila(v,p,res,m);

}