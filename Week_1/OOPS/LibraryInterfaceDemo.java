public class LibraryInterfaceDemo {
    public static void main(String[] args) {
        // Kid User
        KidUsers User1 = new KidUsers(10, "Kids");
        User1.registerAccount();
        User1.requestBook();
        KidUsers User2 = new KidUsers(18, "Fiction");
        User2.registerAccount();
        User2.requestBook();

        System.out.println();

        // Adult User
        AdultUser UserA = new AdultUser(5, "Kids");
        AdultUser UserB = new AdultUser(23, "Fiction");
        UserA.registerAccount();
        UserA.requestBook();
        UserB.registerAccount();
        UserB.requestBook();
    }
}
