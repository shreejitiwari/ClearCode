#include <iostream>

    // Class template for a generic Pair
    template <typename T1, typename T2>
    class Pair {
    public:
        Pair(T1 first, T2 second) : first(first), second(second) {}
    
        void display() {
            std::cout << "(" << first << ", " << second << ")" << std::endl;
        }
    
    private:
        T1 first;
        T2 second;
    };
    
    int main() {
        // Creating objects of Pair class with different types
        Pair<int, double> pair1(10, 3.14);
        Pair<char, std::string> pair2('A', "Hello");
    
        // Displaying the pairs
        pair1.display();
        pair2.display();
    
        return 0;
    }