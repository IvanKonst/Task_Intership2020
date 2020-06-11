#include <iostream>
#include <vector>
#include <algorithm>
struct Data
{
    //Vector containing all the elements
    std::vector<double> data;

    //Variable to keep the value of the median
    double median;

    //Function that adds new element to the existing vector
    void add(int a)
    {
        data.push_back(a);
    }

    //Function to print the existing vector
    void printData()
    {
        for (std::vector<double>::iterator it = data.begin(); it < data.end(); it++)
            std::cout << " "  << *it;
    }

    //Function to get the median of the existing vector after it has been sorted
    void getMedian()
    {
        std::sort(data.begin(), data.end());
        if (data.size() % 2 == 0)
        {
            median = (data[data.size() / 2] + data[data.size() / 2 - 1]) / 2;
            std::cout << std::endl << "median : " << median;
        }
        else
        {
            median = data[data.size() / 2];
            std::cout << std::endl << "median : "  << median;
        }
    }

};