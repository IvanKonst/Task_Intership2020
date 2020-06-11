#include <iostream>
#include <vector>
#include <algorithm>
struct Data
{
    std::vector<double> data;
    //Vector containing all the elements
    double median;
    //Variable to keep the value of the median

    void add(int a)
    {
        data.push_back(a);
    }
    //Function that adds new element to the existing vector

    void printData()
    {
        for (std::vector<double>::iterator it = data.begin(); it < data.end(); it++)
            std::cout << ' ' << *it;
    }
    //Function to print the existing vector

    void sort()
    {
        //int temp;
        std::sort(data.begin(), data.end());
        /*	for (int i = 0; i < data.size(); i++)
            {
                for (int j = i + 1; j < data.size(); j++)
                {
                    if (data[j] < data[i])
                    {
                        temp = data[i];
                        data[i] = data[j];
                        data[j] = temp;
                    }
                }
            }*/
    }
    //Sort Function

    void getMedian()
    {
        if (data.size() % 2 == 0)
        {
            median = (data[data.size() / 2] + data[data.size() / 2 - 1]) / 2;
            std::cout << " " << median;
        }
        else
        {
            median = data[data.size() / 2];
            std::cout << " " << median;
        }
    }
    //Function to get the median of the existing vector after it has been sorted

};