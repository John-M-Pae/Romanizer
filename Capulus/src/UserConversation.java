import java.util.Scanner;

public class UserConversation {
    private Scanner converse;

    public UserConversation() {
        this.converse = new Scanner(System.in);
    }

    public int askUserForValue(){
        System.out.println("Please provide your value: ");
        int value = this.converse.nextInt();

        return value;
    }

    public void tellUserResult(String message){
        System.out.println(message);
    }
}
