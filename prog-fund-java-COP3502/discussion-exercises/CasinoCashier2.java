public class CasinoCashier2 {
  private int cash;
  private int chips;

  public CasinoCashier() {
    this.cash  = 1000;
    this.chips = 1000;
  }
  public CasinoCashier(int cash, int chips) {
    this.cash  = cash;
    this.chips = chips;
  }
  public int exchangeCashIntoChips(int cash) {
    int tempChips = cash;
    this.cash  = this.cash  + cash;
    this.chips = this.chips - tempChips;
    return tempChips;
  }
  public int exchangeChipsIntoCash(int chips) {
    int tempCash = chips;
    this.cash  = this.cash  - tempCash;
    this.chips = this.chips + chips;
    return tempCash;
  }
  public int getCash() {
    return cash;
  }
  public int getChips() {
    return chips;
  }
  public void setCash(int cash) {
    this.cash = cash;
  }
  public void setChips(int chips) {
    this.chips = chips;
  }
  public void printInfo() {
    System.out.println("This casino has $" + cash + " in cash, and " + chips + " in chips.");
 
    // If I double my profit, I will have $(x*2)
    System.out.println("If I double my profit, I will have $" + 2*cash + ".");
  }
}