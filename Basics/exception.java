class exception {
    public static void main(String[] args) {
        try {
            int num1 = 10;
            int num2 = 10;
            int num3 = num1 / num2;
            System.out.println(num3);
        } 
        catch (Exception ex) {
            System.out.println(ex);
        }
        finally {
            System.out.println("done");
        }
    }
}
