/*Program to perform Hexadecimal operations*/
import java.io.*; 

class HexOperations
{
	public static void main(String arg[]) throws IOException
	{
		BufferedReader br= new BufferedReader(new InputStreamReader(System.in));

		String a,b;
		System.out.println("Enter two Hexadecimal numbers to view their Addition and multiplication");
		a= br.readLine();
		b= br.readLine();
		int aDec = Integer.parseInt(a, 16);
		int bDec = Integer.parseInt(b, 16);
		int add= aDec + bDec;
		int mul= aDec * bDec;
		a = Integer.toHexString(add);
		b = Integer.toHexString(mul);
	
		System.out.println("Addition and Multiplication of the given two Hexadecimal numbers is " +a+ " and " +b+ "respectively");
	}
}
