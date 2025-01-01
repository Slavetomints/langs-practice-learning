public class toDoList {
    public static void main(String[] args) throws Exception {
                        title();
                        menu();
                        goodbye();
    }

    public static void title() {
        System.out.println("\r\n" + //
                        "\r\n" + //
                        " _____           ____          _     _     _   \r\n" + //
                        "|_   _|__       |  _ \\  ___   | |   (_)___| |_ \r\n" + //
                        "  | |/ _ \\ _____| | | |/ _ \\  | |   | / __| __|\r\n" + //
                        "  | | (_) |_____| |_| | (_) | | |___| \\__ \\ |_ \r\n" + //
                        "  |_|\\___/      |____/ \\___/  |_____|_|___/\\__|  v0.1.0\r\n" + //
                        "\r\n" + //
                        "");
    }
    public static void menu() {
        System.out.println("Please make a selection:");
        System.out.println("========================");
        System.out.println("1 - Add Item to List");
        System.out.println("2 - ");
    }

    public static void goodbye() {

    }
}
