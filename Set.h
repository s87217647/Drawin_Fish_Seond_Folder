//
// Created by Swift Sheng on 10/2/20.
//

#ifndef A01_SET_H
#define A01_SET_H
using namespace std;

#include <cstddef>
#include <vector>
#include <ostream>


template<typename  T>
class Set {
private:
    vector <T> *_master_ptr;
    vector<size_t> _elems; //List of indices into this->master
    size_t _sum;
public:
    Set(vector<T> *_mast_ptr = nullptr) : _master_ptr(_mast_ptr), _sum(0){}
    const vector<T> *get_master_ptr() const {return _master_ptr;}
    const size_t size() const{return _elems.size();}
    const size_t  get_sum() const{return _sum;}
    bool add_elem(size_t n) { // n is index in master
        if(valid(n)){
            _elems.push_back(n);
            _sum = _sum + _master_ptr->at(n);
            return true;
        }

        return false;

    }
    bool add_all_elems() {

        for(unsigned int i = 0; i < _master_ptr->size() ; i++){
            if(!add_elem(i))
                return false;
        }

        return true;

    }
    bool valid(size_t n ){
//      Bound check
        if( n < 0 || n >= _master_ptr->size())
            return false;

//        repetition
        for(size_t x : _elems){
            if(x == n)
                return false;
        }

        return true;

    }

    Set<T> find_biggest_subset_le(size_t target){
        vector<Set<T>> allAnswers;
        allAnswers.push_back(Set<T>());

        //outter loop, loop through every possible elem
//        for()
        for (auto i = allAnswers.begin(); i != allAnswers.end(); ++i){
            cout << "I don't do shit " << endl;
        }


        return nullptr;
    }

    friend ostream &operator<<(ostream& os, const Set<T> &set){
        const vector<T> *mast_ptr = set.get_master_ptr();
        os << "{\n";
        for(size_t index: set._elems)
            os << " " << mast_ptr->at(index) << "\n";
        return os << "}";
    }

    friend class Tests;

};


#endif //A01_SET_H
