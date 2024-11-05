/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

// Virus Hierarchy
class Virus {
public:
    virtual int GetMortalityRate() = 0;
};

class CovidVirus : public Virus {
public:
    int GetMortalityRate() override {
        return 2;
    }
};

class HivVirus : public Virus {
public:
    int GetMortalityRate() override {
        return 50;
    }
};

class BirdFlue : public Virus {
public:
    int GetMortalityRate() override {
        return 60;
    }
};

// Engine Hierarchy
class Engine {
public:
    virtual float GetEfficiency() = 0;
};

class InternalCombustionEngine : public Engine {
public:
    float GetEfficiency() override {
        return 30.0;
    }
};

class ExternalCombustionEngine : public Engine {
public:
    float GetEfficiency() override {
        return 25.0;
    }
};

class PetrolEngine : public InternalCombustionEngine {
public:
    float GetEfficiency() override {
        return 33.0; 
    }
};

class DieselEngine : public InternalCombustionEngine {
public:
    float GetEfficiency() override {
        return 35.0; 
    }
};

class SteamEngine : public ExternalCombustionEngine {
public:
    float GetEfficiency() override {
        return 20.0;
    }
};

// Main function
int main() {
    // Viruses
    Virus* covid = new CovidVirus();
    Virus* hiv = new HivVirus();
    Virus* birdFlu = new BirdFlue();

    // mortality rates
    std::cout << "CovidVirus Mortality Rate: " << covid->GetMortalityRate() << "%\n";
    std::cout << "HivVirus Mortality Rate: " << hiv->GetMortalityRate() << "%\n";
    std::cout << "BirdFlue Mortality Rate: " << birdFlu->GetMortalityRate() << "%\n\n";

    // Engine instances
    Engine* petrolEngine = new PetrolEngine();
    Engine* dieselEngine = new DieselEngine();
    Engine* steamEngine = new SteamEngine();

    // Engine efficiencies
    std::cout << "Petrol Engine Efficiency: " << petrolEngine->GetEfficiency() << "%\n";
    std::cout << "Diesel Engine Efficiency: " << dieselEngine->GetEfficiency() << "%\n";
    std::cout << "Steam Engine Efficiency: " << steamEngine->GetEfficiency() << "%\n";

    // Clean up
    delete covid;
    delete hiv;
    delete birdFlu;
    delete petrolEngine;
    delete dieselEngine;
    delete steamEngine;

    return 0;
}
