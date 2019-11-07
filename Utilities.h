//
// Created by tiago on 24/10/2019.
//

#ifndef AEDA_TEAM_MANAGER_UTILITIES_H
#define AEDA_TEAM_MANAGER_UTILITIES_H

#pragma once
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//Search Algorithms

//Sequential Search
template <class Comparable>
int sequentialSearch(const vector<Comparable> &v, Comparable x)
{
    for (unsigned int i = 0; i < v.size(); i++)
        if (v[i] == x)
            return i;   // encontrou
    return -1;     // não encontrou
}

//Binary Search
template <class T>
int BinarySearch(const vector<T> &v, T x)
{
    int left = 0, right = v.size() - 1;
    while (left <= right)
    {
        int middle = (left + right) / 2;
        if (v[middle] < x)
            left = middle + 1;
        else if (x < v[middle])
            right= middle - 1;
        else
        return middle; // encontrou
    }
    return -1; // não encontrou
}


//Ordering Algorithms

//Insertion Sort
template <class Comparable>
void insertionSort(vector<Comparable> &v)
{
	for (unsigned int p = 1; p < v.size(); p++)
	{
		Comparable tmp = v[p];
		int j;
		for (j = p; j > 0 && tmp < v[j - 1]; j--)
			v[j] = v[j - 1];
		v[j] = tmp;
	}
}

template <class Comparable>
void quickSort(vector<Comparable> &v, int left, int right) {
    if (right - left <= 10) // se vetor pequeno
        insertionSort(v, left, right);
    else {
        Comparable x = median3(v, left, right); // x é o pivot
        int i = left;
        int j = right - 1; // passo de partição
        for (;;) {
            while (v[++i] < x);
            while (x < v[--j]);
            if (i < j)
                swap(v[i], v[j]);
            else break;
        }
        swap(v[i], v[right - 1]); //repoe pivot
        quickSort(v, left, i - 1);
        quickSort(v, i + 1, right);
    }
}
//Vector Operations

template< typename T >
typename std::vector<T>::iterator
insert_sorted( std::vector<T> & vec, T const& item ){
    return vec.insert(
               std::upper_bound( vec.begin(), vec.end(), item)
               ,item
               );

}




//String Manipulators

void trimRight(std::string &s);

void trimLeft(std::string &s);

void trim(std::string &s);

vector<int> separateCharacterInt(string s, char ch);

bool stringIsNumber(string number);

vector<string> separateCharacterStr(string s, char ch);


#endif //AEDA_TEAM_MANAGER_UTILITIES_H
