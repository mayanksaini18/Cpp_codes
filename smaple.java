import java.math.BigInteger;

public class BigIntegerDemo {
    public static void main(String[] args) {
        BigInteger a = new BigInteger("123456789012345678901234567890");
        BigInteger b = new BigInteger("987654321098765432109876543210");

        BigInteger sum = a.add(b);
        BigInteger product = a.multiply(b);
        BigInteger difference = b.subtract(a);
        BigInteger gcd = a.gcd(b);

        System.out.println("Sum: " + sum);
        System.out.println("Product: " + product);
        System.out.println("Difference: " + difference);
        System.out.println("GCD: " + gcd);
    }
}
