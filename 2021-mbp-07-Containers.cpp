#include <iostream>
#include <set>
#include <iterator>
#include <cstring>
using namespace std;

set<int>::iterator it;

bool contains(set<int> setToCheck, int valueToCheck)
{
    for (it = setToCheck.begin(); it != setToCheck.end(); ++it)
    {
        if (*it == valueToCheck)
        {
            return true;
        }
    }
}
void unionWith(set<int> setA, set<int> setB)
{
    set<int> setTemp;

    for (it = setA.begin(); it != setA.end(); ++it)
    {
        setTemp.insert(*it);
    }

    for (it = setA.begin(); it != setA.end(); ++it)
    {
        if (!contains(setTemp, *it))
        {
            setTemp.insert(*it);
        }
    }

    for (it = setTemp.begin(); it != setTemp.end(); ++it)
    {
        cout << *it << " / ";
    }
}
int main()
{
    set<int> setA = {1,2,3,4};

    set<int> setB = {1,2,5,4};

    unionWith(setA, setB);

}
