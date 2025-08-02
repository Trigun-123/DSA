import java.util.Scanner;
class array {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int size = scanner.nextInt();

        int [] arr = new int[size];

        for(int i = 0; i < size; i++)
            arr[i] = scanner.nextInt();
        
        for(int it: arr)   
            System.out.print(it + " ");

        scanner.close();
    }
}
