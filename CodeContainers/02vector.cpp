#include<iostream>
#include<vector> 
using namespace std ;
int main(void) {
    cout << "Learning Vector for CPlusPlus.com" << endl ;

    // creating a vector object 
    vector<int> items {1,2,3,4,5,6} ;  
    
    cout << "Accessing the elements using for loop " << endl ;
    // access the elements of items 
    for(int i=0 ; i<items.size() ; i++) {
        cout << items[i] << " " ;
    }
    cout << endl ;

    // implicit iterator 
    cout << "Accessing the elements using implicit iterator " << endl ;
    for(auto x : items) {
        cout << x << " " ;
    }
    cout << endl ; 

    // using iterator 
    cout << "Accessing the elements using iterator " << endl ;
    vector<int> :: iterator it ;
    for(it = items.begin() ; it != items.end() ; it++) {
        cout << *it << " " ;
    }
    cout << endl ;

    // reverse iterator
    cout << "Accessing the elements using reverse iterator" << endl ;

    vector<int> :: reverse_iterator rit ;
    for(rit = items.rbegin() ; rit!= items.rend() ; rit++) {
        cout << *rit << " " ;
    }
    cout << endl ;

    cout << items.at(4) <<endl ;
    try {
        cout << items.at(9)<<endl ;
    }catch(out_of_range err) {
        cout << err.what() << endl ;
        // cout << "Index out of range " << endl ;
    }
    cout << items.back()<<endl ;
    cout << items.capacity() << endl ;
    cout << items.empty() << endl ;
    cout << items.front() << endl  ; 
    cout << items.size() << endl ;
    items.resize(50) ;
    cout << items.capacity() << endl ;
    cout << items.size() << endl ;
    items.insert(items.begin() +23 , {20,30,40,50,60})  ; 

    // printing the elements 
    for(auto x : items) {
        cout << x << " " ;
    }
    cout << endl ;

    items.insert(items.begin()+7 , 5 , 111) ;
    for(auto x : items) {
        cout << x << " " ;
    }
    cout << endl ;

    items.shrink_to_fit() ;
    
    for(auto x : items) {
        cout << x << " " ;
    }
    cout << endl ;

    items.resize(12) ;
    for(auto x : items) {
        cout << x << " " ;
    }
    cout << endl ;
    vector<int> nums = {101,102,103,104,105,106} ;
    items.insert(items.begin()+12 , nums.begin() , nums.end()); 

    for(auto x : items) {
        cout << x << " " ;
    }
    cout << endl ;

    items.insert(items.begin() , 45);

    for(auto x : items) {
        cout << x << " " ;
    }
    cout << endl ;
    const int x = 1234 ;
    items.insert(items.end() -6 ,x) ; // x is const int 
    for(auto x : items) {
        cout << x << " " ;
    }
    cout << endl ;

    items.erase(items.begin() , items.begin()+4) ;

    for(auto x : items) {
        cout << x << " " ;
    }
    cout << endl ;

    items.erase(items.begin()) ;
    for(auto x : items) {
        cout << x << " " ;
    }
    cout << endl ;

    items.erase(items.end() -9);
    for(auto x : items) {
        cout << x << " " ;
    }
    cout << endl ;

    // old content ko hata ke new content ko rakh de rha hain 

    items.assign({-1,-2,-3,-4,-5}) ; 
    for(auto x : items) {
        cout << x << " " ;
    }
    cout << endl ;

    items.assign(5 , 101) ;
    for(auto x : items) {
        cout << x << " " ;
    }
    cout << endl ;

    items.assign(nums.begin() , nums.end());
    for(auto x : items) {
        cout << x << " " ;
    }
    cout << endl ;

    
    for(auto x : nums) {
        cout << x << " " ;
    }
    cout << endl ;
    items.push_back(-11001) ;

    cout << items.back() <<endl;
    items.pop_back() ;
    cout << items.back() << endl ;
    nums.assign({-1,-2,-3,-4,-5,-6,-8});
    nums.swap(items) ;
    cout << "Elements of items array :" << endl ;
    for(auto x : items) {
        cout << x << " " ;
    }
    cout << endl ;

    cout << "Elements of nums array : "<< endl ;
    for(auto x : nums) {
        cout << x << " " ;
    }
    cout << endl ;
    nums.clear() ;
     return 0 ;
      
}