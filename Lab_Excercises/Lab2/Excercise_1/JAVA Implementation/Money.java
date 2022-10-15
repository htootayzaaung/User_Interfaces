public class Money
{
  private int euros, cents;

  public Money(int e, int c)
  {
    euros = e;
    cents = c;
  }

  public int getEuros()
  {
    return euros;
  }

  public int getCents()
  {
    return cents;
  }

  public String toString()
  {
    return "EUR" + euros + "." + cents;
  }

  public Money addMoreMoney(Money other)
  {
    return new Money(euros + other.euros, cents + other.cents);
  }

  public void printMoney()
  {
    System.out.printf("m1 = £" + euros + "." + cents + "\n");
  }

  public static void main(String [] args)
  {
    Money m1 = new Money(2, 50);
    m1.printMoney();

    Money m2 = new Money(0, 50);
    m2.printMoney();

    Money m3 = m1.addMoreMoney(m2);
    m3.printMoney();
  }
}
