//
// Created by Kacper Murygin on 01/04/2022.
//

#ifndef ZADANIE3_PRODUCT_H
#define ZADANIE3_PRODUCT_H
#include "producer.h"
#include "date.h"
#include "component.h"
#include <string>
#include <vector>

using namespace std;
class Product{
private:
    int volume;
    int numberLot;
    string name;
    Producer producer;
    Date expirationDate;
    vector<Component> components;

public:
    Product(int Volume, int NumberLot, string Name, vector<Component> Components);
    Product(int Volume, int NumberLot, string Name, vector<Component> Components, Date ExpirationDate, Producer Producer);
    int getVolume();
    int getNumberLot();
    string getName();
    Producer getProducer();
    Date getExpirationDate();

    void setVolume(int newVolume);
    void setNumberLot(int newNumberLot);
    void setName(string newName);
    void setProducer(Producer newProducer);
    void setExpirationDate(Date newExpirationDate);

    vector<Component> getComponents();
    Component getComponent(string name);
    bool checkIfContains(string checkedComponent);
    int getIndexOfComponent(string name);
    void addComponent(Component& newComponent);
    void modifyComponent(Component& oldComponent, Component& newComponent);
//    void removeComponent(string name);
    int numberOfComponents();
//    void printComponents();

    //wersja prefiksowa -zwraca wartość po inkrementacji
    Product& operator++();
    //wersja postfiksowa - też inkrementuje, ale zwraca wartość przed inkrementacją
    Product operator++(int);

    //wersja prefiksowa -zwraca wartość po inkrementacji
    Product& operator--();
    //wersja postfiksowa - też inkrementuje, ale zwraca wartość przed inkrementacją
    Product operator--(int);

    bool operator>(Product second_argument) const;
    bool operator<(const Product& second_argument) const;

};


#endif //ZADANIE3_PRODUCT_H
