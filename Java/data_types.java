
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
	
    public static void main(String[] args) {
        int i = 4;
        double d = 4.0;
        String s = "HackerRank ";
		
        Scanner scan = new Scanner(System.in);

        /* Declare second integer, double, and String variables. */
        int entero;
        double doble;
        String frase;

        /* Read and save an integer, double, and String to your variables.*/
        /*System.out.print(i);
        System.out.print(System.lineSeparator());
        System.out.print(d);
        System.out.print(System.lineSeparator());
        System.out.print(s);
        System.out.print(System.lineSeparator());*/
        
        entero = scan.nextInt();
        doble = scan.nextDouble();
        scan.nextLine();
        frase = scan.nextLine();
        
        // Note: If you have trouble reading the entire String, please go back and       review the Tutorial closely.

        /* Print the sum of both integer variables on a new line. */
        System.out.print(entero + i);
        System.out.print(System.lineSeparator());
        
        /* Print the sum of the double variables on a new line. */
        System.out.print(d + doble);
        System.out.print(System.lineSeparator());
		
        /* Concatenate and print the String variables on a new line; 
        	the 's' variable above should be printed first. */
        System.out.print(s + frase);
        System.out.print(System.lineSeparator());

        scan.close();
