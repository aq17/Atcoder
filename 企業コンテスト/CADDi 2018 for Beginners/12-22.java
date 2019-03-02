import java.util.*;
public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
    int ts = n / 1000;
    int hr = (n / 100) % 10;
    int tens = (n / 10) % 10;
    int ones = n % 10;
    int p = 0;

    if(ts==2){p++;}
    if(hr==2){p++;}
    if(tens==2){p++;}
    if(ones==2){p++;}

    System.out.println(p);
	}
}
