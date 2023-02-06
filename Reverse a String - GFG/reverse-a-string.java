//{ Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.io.*;
import java.lang.*;

class Driver
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        
        while(t-- >0)
        {
            String str = read.readLine();
            System.out.println(new Reverse().reverseWord(str));
        }
    }
}
// } Driver Code Ends


//User function Template for Java


class Reverse
{
    // Complete the function
    // str: input string
    public static String reverseWord(String str)
    {
        int n = str.length();
        char[] ch = str.toCharArray();
        char temp;
        
        for (int i = 0, j = n - 1; i < j; i++, j--) {
                
                temp = ch[i];
                ch[i] = ch[j];
                ch[j] = temp;
            }
        return String.valueOf(ch);

    }
}