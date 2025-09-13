#include<iostream> 
#include<array>
using namespace std ; 

int main(void) { 
    array<int ,10> items ;
    cout << items.empty() << endl ;
    try {
        cout << items.at(11) << endl ;
    }
    catch(...) {
        cout << "Out of bound index error!" ;
    }

    items.fill(-100) ;
    cout << "Element of array are : "<< endl ;
    for(auto x : items) {
        cout << x << " " ;
    }
    cout << endl ;

    items[0] = 120 ;
    items[9] = 203 ;
    cout << "First Element is : " << items.front() << endl ;
    cout << "Last element is : " << items.back() << endl ;
    cout << "Array empty status : " << items.empty( ) << endl ;
    cout << "Maximum size is : " <<items.max_size() << endl ;

    // accessing element using iterator 
    array<int,5                                                                                                                                                                                                    > ::iterator it ;
    for(it = items.begin() ; it != items.end() ; it++) {
        cout << *it << " " ;
    }
    cout << endl ;

    // reverse iterator 
    array<int ,10 > :: reverse_iterator rit ;
    for(rit = items.rbegin() ; rit !=items.rend() ; rit++) {
        cout<< *rit<< " " ;
    }
    cout << endl ;

    // const iterator : read only iterator  
    array<int , 10> :: const_iterator cit ;
    for(cit = items.cbegin() ; cit!=items.cend() ; cit++) {
        cout <<*cit << endl ;
    }

    // const reverse iterator 
    array<int,10> :: const_reverse_iterator crit ;
    for(crit = items.crbegin() ; crit != items.crend() ; crit++) {
        cout << *crit << " " ;
    }
    cout << endl ;

    // end() to begin() ;
    cout << "Iterating from end to begin() " << endl ;
    array<int,10> :: iterator i ;
    for(i = items.end()-1 ; i >= items.begin() ; i-- ) {
        cout << *i << " " ;
    }
    cout << endl ;


    cout << "Some of the functions of the array class" << endl ;
    cout<< items.size() << endl ;
    cout << items[4] << endl ;
    cout << "data() : " << items.data() << endl ; // return the address of first element of array
    
    array<int ,10> nums {1,2,3,4,5} ;

    items.swap(nums) ;

    cout << "Element of nums array are : "<< endl ;
    for(auto x : nums) {
        cout << x <<  " " ;
    }
    cout << endl ;

    cout << "Elements of items array are : " << endl ;
    for (auto x : items) {
        cout <<x << " " ;
    }
    cout << endl ;

    // lexographical comparison of elements 
    cout << (nums < items) << endl ;
    cout << (nums <= items )<< endl ;
    cout << (items<nums) << endl ;
    cout << (items<=nums) << endl ;
    cout << (nums > items) << endl ;
    cout << (nums>=items) << endl ;
    cout <<(items > nums) << endl ;
    cout << (items >= nums) << endl ;
    cout << (nums == items ) << endl ;
    cout << (nums!= items) << endl ;
    cout << "Array Class is Over !" << endl ;
    cout << "Source :  CPlusPlus.com" << endl ;
    return 0 ;
}






