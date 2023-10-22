#include <iostream>
using std::string;

class AbstractEmployee {
    //Abstraction
    virutal void AskForPromotion()=0;
};

class Employee:AbstractEmployee {
    // Number of attritubes and is the blue print
    // Making It private make it encapsulation
private:
    string Name;
    string Company;
    int Age;

public:
    //Start of encapsulation
    void setName(string name) {
        Name = name; //Setter method
    }   
    string getName() {// Getter
        return Name;
    }
    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    void setAge(int age) {
        if(age>=18)
        Age = age;
    }
    int getAge() {
        return Age;
    }
        
    void IntroduceYourself() {
        std::cout<< "Name - " << Name << std::endl;
        std::cout<< "Company - " << Company << std::endl;
        std::cout<< "Age - " << Age << std::endl;
    }
    // The constucter
    Employee(string name, string company, int age) {
        
        
        Name = name;
        Company = company;
        Age = age;
        
    };
    void AskForPromotion() {
        if (Age>30)
            std::cout<<Name<<" got promoted!" << std::endl;
        else
            std::cout<<Name<<", sorry NO promotion!" << std::endl;
    }

};
//Inheritance
class Developer: Employee {
public:
    string Favprogramminglanguage;
    Developer(string name, string company, int age, string Favprogramminglanguage)
        :Employee(name, company, age)
        {
            Favprogramminglanguage=Favprogramminglanguage;
        }
};    
int main() 
{    
    // variable of type int
    Employee employee1 = Employee("John", "NoodleHouse",27);
    //employee1.IntroduceYourself();
    
    Employee employee2 = Employee("Joe", "Steak House", 31);
    //employee2.IntroduceYourself();
    Developer d;
    
    // abstraction
    //Employee1.AskForPromotion();
    //Employee2.AskForPromotion();
    
    employee1.setAge(15);
    std::cout<<employee1.getName()<<" is " <<employee1.getAge() <<"years old"<< std::endl;
    
    
    
    
}