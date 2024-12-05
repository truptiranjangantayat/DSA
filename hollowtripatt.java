import java.util.Scanner;

public class hollowtripatt {

    public static void main(String[] args) {

    //      1   
    //     2 2  
    //    3   3
    //   4444444
        Scanner sc = new Scanner(System.in);
		System.out.println("enter n:");
		int n = sc.nextInt();

		for(int i=1;i<=n; i++){
			for(int j=1;j<=2*n-1;j++){
				if(i+j==n+1 || j-i==n-1 || i==n){
					System.out.print(i);
				}
				else{
					System.out.print(" ");
				}
			}
			System.out.println();
		}
        sc.close();
    }
}