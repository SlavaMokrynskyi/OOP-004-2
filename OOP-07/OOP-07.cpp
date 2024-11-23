#include <iostream>

using namespace std;

class Overcoat
{
    string type;
    float price;
public:
    Overcoat(): type("none"), price(0) {}
    Overcoat(string type, float price) : type(type), price(price) {}
    bool operator==(const Overcoat& other)const
    {
        return this->type == other.type;
    }
    Overcoat& operator=(const Overcoat& other)
    {
        this->type = other.type;
        this->price = other.price;
        return *this;
    }
    bool operator>(const Overcoat& other)
    {
        return price > other.price;
    }
};

class Flat
{
    int square;
    float price;
public:
    Flat() :square(0), price(0) {}
    Flat(int square, float price) : square(square), price(price) {}
    bool operator==(const Flat& other)const
    {
        return this->square == other.square;
    }
    Flat& operator=(const Flat& other)
    {
        this->square = other.square;
        this->price = other.price;
        return *this;
    }
    bool operator>(const Flat& other)
    {
        return price > other.price;
    }
};

int main()
{
    
}