#include <iostream>
#include <vector>

class VectorFiller {
public:
    VectorFiller(int size) : size(size) {}

    std::vector<int> zVector() {
        std::vector<int> result;
        result.reserve(size);

        for (int i = 1; i <= size; ++i) {
            result.push_back(i * i); // 1 4 9 
        }

        return result;
    }

    void printVector(const std::vector<int>& vec) {
        for (int num : vec) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

private:
    int size;
};

int main() {
    int vectorSize = 10;
    VectorFiller vectorFiller(vectorSize);
    std::vector<int> filledVector = vectorFiller.zVector();
    vectorFiller.printVector(filledVector);
    return 0;
}
