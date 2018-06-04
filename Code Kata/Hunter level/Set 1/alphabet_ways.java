import java.util.*;
import java.lang.*;
import java.io.*;

class WaysOfAlphabet {
    public static void main(String[] args) {         
    Scanner in = new Scanner(System.in);
    String s = in.next();
    int n = s.length();
    int i,j;
    int count=1;
    for(i=0;i<n;i++){
       for(j=1;j<=(n-i);j++){
           String a = s.substring(i,i+j);
           Integer m = Integer.valueOf(a);
           if(m>9 && m<27){
               count+=1;
           }
       } 
    }
        System.out.println(count);
}
}
