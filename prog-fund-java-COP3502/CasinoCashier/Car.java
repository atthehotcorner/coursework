public class Car {
    private String color;
    private WheelSet wheelSet;
    private int year;

    public Car() {
        this.color = "chrome";
        this.wheelSet = new WheelSet();
        this.year = 2014;
    }

   public Car(String color, WheelSet wheelSet, int year) {
        this.color = color;
        this.wheelSet = wheelSet;
        this.year = year;
    }
}
