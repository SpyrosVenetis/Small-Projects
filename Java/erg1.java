import java.util.*;

class Animal{
    private String species;
    private String name;
    private int age;
    public Animal(String species, String name, int age){
        this.species = species;
        this.name = name;
        this.age = age;
    }
    public void printInfo(){
        System.out.println("Είδος: " + species);
        System.out.println("Όνομα: " + name);
        System.out.println("Ηλικία: " + age);
    }
    
}

class Shelter{
    private String name;
    private List<Animal> animals;
    public Shelter(String name){
        this.name = name;
        animals = new ArrayList<>();
    }
    public void addAnimal(Animal a){
        animals.add(a);
    }
    public void printAllAnimals(){
        for(Animal i : animals){
            i.printInfo();
        }
    }
}

public class erg1 {
    public static void main(String[] args) {
        Animal a = new Animal("Σκύλος", "Ρεξ", 3);
        Animal b = new Animal("Γάτα", "Λούνα", 1);
        Shelter c = new Shelter("Shelter");
        c.addAnimal(a);
        c.addAnimal(b);
        c.printAllAnimals();
    }
}