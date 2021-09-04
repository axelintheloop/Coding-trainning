import java.io.*;
import java.util.*;
import java.util.Scanner;  // Import the Scanner class

//https://www.hackerrank.com/challenges/30-hello-world/problem

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        
        //Create the scanner object
        Scanner sc = new Scanner(System.in);     
        
        //String a = sc.next();
        
        //String declaration
        String a = "";
        
        //Multiline scan with Java
        a += sc.nextLine();
        
        System.out.print("Hello, World."); 
        
        //This is the same as /n
        System.out.print(System.lineSeparator());
        
        sc.close();
        System.out.print(a);
    }
}
