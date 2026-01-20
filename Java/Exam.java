//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.*;

class Planet{
    private String name;
    private double mass;
    private double radius;
    public Planet(String name, double mass, double radius){
        this.name = name;
        this.mass = mass;
        this.radius = radius;
    }
    public void printInfo(){
        System.out.println("Όνομα: " + name);
        System.out.println("Μάζα: " + mass + " kg");
        System.out.println("Ακτίνα: " + radius + " km");
    }
}

class SolarSystem{
    private String systemName;
    private List<Planet> planets;
    public SolarSystem(String systemName){
        this.systemName = systemName;
        planets = new ArrayList<>();
    }
    public void addPlanet(Planet p){
        planets.add(p);
    }
    public void printPlanets(){
        for(Planet current : planets){
            current.printInfo();
        }
    }
}

public class Exam {
    public static void main(String[] args) {
        Planet Earth = new Planet("Γη", 5.97E24, 6371);
        Planet Mars = new Planet("Άρης", 6.39E23, 3389);
        SolarSystem Sol = new SolarSystem("Sol");
        Sol.addPlanet(Earth);
        Sol.addPlanet(Mars);
        Sol.printPlanets();
    }
}