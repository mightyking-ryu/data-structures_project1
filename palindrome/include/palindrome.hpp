#include <string>

#include "deque.hpp"

template<typename Deque>
class Palindrome {
public:
    bool is_palindrome(const std::string&);
    void reset_deque();

private:
    Deque deque;
};

template<typename Deque>
bool Palindrome<Deque>::is_palindrome(const std::string& s1) {
    // TODO
    this->reset_deque();
    for(int i = 0; i < s1.length(); i++) {
        this->deque.push_back(s1[i]);
    }

    std::string s2 = "";
    while(!this->deque.empty()) {
        s2.push_back(this->deque.remove_back().value());
    }

    if(s1.compare(s2) == 0) {
        return true;
    } else {
        return false;
    }
}

template<typename Deque>
void Palindrome<Deque>::reset_deque() {
    while (!deque.empty())
        deque.remove_front();
}
