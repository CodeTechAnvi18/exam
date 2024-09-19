#include<iostream>
/*Create a class named Fruit with a data member to calculate the number of fruits in a basket.
 Create two other class named Apples and Mangoes to calculate the number 
 of apples and mangoes in the basket.
Print the number of fruits of each type and the total number of fruits in the basket.(Inheritance)*/



using namespace std;

class Fruit {
	protected:
    int count;

	public:
    Fruit(int c) : count(c) {}
    virtual int getCount() const { return count; }
	};

class Apples : public Fruit {
	
	public:
    Apples(int c) : Fruit(c) {}
};

class Mangoes : public Fruit {
	public:
    Mangoes(int c) : Fruit(c) {}
};

	void displayFruitCounts(const Apples& apples, const Mangoes& mangoes) {
    int totalFruits = apples.getCount() + mangoes.getCount();
    cout << "Number of apples: " << apples.getCount() << endl;
    cout << "Number of mangoes: " << mangoes.getCount() << endl;
    cout << "Total number of fruits: " << totalFruits << endl;
}

int main() {
    Apples a(10);
    Mangoes m(15);
    
    displayFruitCounts(a, m);

    return 0;
}
