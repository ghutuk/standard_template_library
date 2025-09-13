#include<iostream>
#include<forward_list> 
using namespace std ;

int main(void) { 

    // creating an object 
    forward_list<int> sll = {1,2,3,4,5,6,7} ;
   // printing the linked list using implicit iterator 
    for(auto x : sll) {
        cout <<x << " " ;
    }
    cout << endl ;
    // iterator 
    forward_list<int>::iterator it ;
    for(it = sll.begin() ; it!= sll.end() ; it++) {
        cout << *it << " " ;
    }
    cout << endl ;
    // changing value using iterator
    for(it = sll.begin() ; it!= sll.end() ; it++) {
        *it = *it*10 ;
    } 

    //printing after changing the value 
    for(it = sll.begin() ; it!= sll.end() ; it++) {
        cout << *it << " " ;
    }
    cout << endl ;
    // const iterator 
    forward_list<int> :: const_iterator cit ;
    for(cit = sll.cbegin() ; cit != sll.cend() ; cit++) {
        cout <<*cit << " " ;
    }
    cout << endl ;
    
    // one extra output : 0
    for(cit = sll.before_begin(); cit != sll.end() ; cit++) {
        cout << *cit << " " ;
    }
    cout << endl ;

    // methods of forward list 
    cout << sll.empty() << endl ; // if(sll.begin() ==  sll.end()) -> sll is empty 
    cout << sll.front() << endl ;
    sll.push_front(450) ;
    cout << sll.front() << endl ;
    cout << "Deleting the first element" << endl ;
    sll.erase_after(sll.begin()) ;
    for(auto x  : sll) {
        cout << x  << " " ;
    } 
    cout << endl ;
    auto x = sll.begin() ;
    ++x ;
    ++x ;
    ++x ;
    sll.erase_after(x , sll.end()) ;
    cout << "After deleting some element list is " << endl ;
    for(auto x : sll) {
        cout << x << " " ;
    }
    cout << endl ;

    cout << "After inserting one element the list is  " << endl ;
    sll.insert_after(sll.begin() , 10) ;
    for(auto x : sll) {
        cout << x << " " ;
    }
    cout << endl ;
    cout << "Inserting the element at last of list " << endl ;
    sll.insert_after(sll.before_begin(), {11,22,33,44,55}) ;
    for(auto x : sll) {
        cout << x << " " ;
    }
    cout << endl ;
    sll.insert_after(sll.before_begin() , 5 , -2323) ; // insert -2323 five times 
    // begin() : after one element 
    // before_begin() : before the first element 
    for(auto x : sll) {
        cout << x << " " ;
    }
    cout << endl ;
    cout << "Inserting a value at last" << endl ;
    sll.insert_after(sll.before_begin() , sll.begin() , sll.end()) ;
    for(auto x : sll) {
        cout << x << " ";
    }
    cout << endl ;

    for(int i=0 ; i<5 ; i++) {
        sll.erase_after(sll.begin()) ;
    }
    
    cout << "After deleting five elements the list is : "<< endl ;
    for(auto x : sll) {
        cout << x << " ";
    }
    cout << endl ;

    sll.assign({1,2,3,4,5,6,7}) ;
    for(auto x :  sll) {
        cout << x<< " " ;
    }
    cout << endl ;
    forward_list<int> ll = sll ;
    sll.assign(5 , 23) ;// insert five times 23 after deleting the old values
    for(auto x : sll) {
        cout << x << " ";
    }
    cout << endl ;

    sll.assign(ll.begin() , ll.end()) ;
    for(auto x : sll) {
        cout << x << " ";
    }
    cout << endl ;

    //sll.clear() ;// erasing all the elements
    cout << "The status of sll list is : " << sll.empty() << endl ;
    cout<< "The max size of sll list is " << sll.max_size() << endl ;
    sll.merge(ll) ;
    cout << "Mergin list ll into sll" << endl ;
    for(auto x : sll) {
        cout << x  << " " ;
    }
    cout << endl ;
    // creating a lambda function to check for even 
    auto is_even = [](int x) {return x%2 == 0;} ; 
    // removing only even number from sll 
    sll.remove_if(is_even) ;
    cout << "After removing only even numbers form list , sll is : " << endl ;
   
    for(auto x :  sll) {
        cout << x <<  " ";
    }
    cout << endl ;

    // lambda function to check for odd 
    auto is_odd = [](int x) {return x%2!= 0 ;} ;
    sll.remove_if(is_odd) ;
    // for(auto x :  sll) {
    //     cout << x <<  " ";
    // }
    // cout << endl ;
    cout << sll.empty() << endl ; 
    sll.clear() ;// erasing all the elements
    auto z = sll.get_allocator() ;
    cout << endl;
    return 0 ;
}

// new thing : how to pass a function as an argument in cpp 
//function<void(args)> 
// syntax : function<return_type(args)> &identifierr 
// <> is mandatory 