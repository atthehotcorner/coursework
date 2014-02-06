public class CasinoCashier {
  private int cash;
  private int chips;

  public CasinoCashier() {
    cash  = 1000;
    chips = 1000;
  }
  public CasinoCashier(int cash, int chips) {
    cash  = cash;
    chips = chips;
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
    System.out.println("Cash:   " + cash);
    System.out.println("Chips:  " + chips);
  }
}