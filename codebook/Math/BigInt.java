import java.util.*;
import java.math.*;
public class BigInt{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		String str1, str2, op;
		BigInteger n1, n2;
		while(sc.hasNext()){
			str1 = sc.next();
			op = sc.next();
			str2 = sc.next();
			n1 = new BigInteger(str1);
			n2 = new BigInteger(str2);
			switch(op.charAt(0)){
				case '+':
					System.out.println(n1.add(n2));
					break;
				case '-':
					System.out.println(n1.subtract(n2));
					break;
				case '*':
					System.out.println(n1.multiply(n2));
					break;
				case '/':
					System.out.println(n1.divide(n2));
					break;
				case '%':
					System.out.println(n1.mod(n2));
			}
		}
	}
}