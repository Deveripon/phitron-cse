#include <iostream>
#include <vector>

using namespace std;


int main(){


    vector <int> v2 = {1,2,3,4,5};
    vector<int> v(v2.begin(),v2.begin()+3); //initialize vector v with first 3 elements of v2   
    v.clear(); //clear all elements from vector v
    cout << "Initial size: " << v.size() << endl;
    cout << "Maximum Size: " << v.capacity() << endl;

    cout << "Elements in vector v after clear(): " << v[0] << endl; //accessing element after clear()

    cout << v.empty() << endl; //check if vector is empty
    v.resize(5); //resize vector to hold 5 elements
    cout << "Size after resize: " << v.size() << endl;

    v.shrink_to_fit(); //shrink vector to fit its current size
    cout << "Size after shrink_to_fit: " << v.size() << endl;

    v.push_back(10); //add element to the end of vector
    v.push_back(20);
    v.push_back(30);
    cout << "new size of vector: " << v.size() << endl;
    v.reserve(10); //reserve space for 10 elements
    cout << "Capacity after reserve: " << v.capacity() << endl;


    v.pop_back(); //remove last element
    cout << "Size after pop_back: " << v.size() << endl;

    v.insert(v.begin()+4, 4); //insert element at the beginning
    v.erase(v.begin() + 4); // erase the inserted element;
   cout << "last element: " << v.back() << endl; //access last element
   cout << "first element: " << v.front() << endl; //access last element
   

 replace(v.begin(), v.end(),0,101); //replace all 0s with 101

    auto it  = find(v.begin(),v.end(),20); //find element 29 in vector

    
cout << (it != v.end() ? "Element Found": "Element Not Found") << endl;



    for (int item : v)
    {
        cout << item << " ";
    }

    return 0;
}
