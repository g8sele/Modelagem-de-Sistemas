
package cadastro;

import java.awt.AWTException;
import java.awt.Robot;
import java.awt.event.KeyEvent;
import java.io.IOException;
import java.util.Scanner;

public class Cadastro {

    
    public static void main(String[] args) throws IOException, InterruptedException, AWTException {
        int login;
        int senha;
        int loginCadast;
        int senhaCadast;
        
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Olá, Bem-Vind@! ao Banco de Doramal");
        System.out.println("Vamos realizar seu Cadastro");
        System.out.println("");
        System.out.println("Crie um login de 6 digitos: ");
            loginCadast = scanner.nextInt();
        System.out.println("Crie uma senha de 4 digitos: ");
            senhaCadast = scanner.nextInt();
            
         System.out.println("Cadastro Realizado!");  
         
       try {
        Robot robot = new Robot();
        robot.setAutoDelay(1000);
        robot.keyPress(KeyEvent.VK_CONTROL);
        robot.keyPress(KeyEvent.VK_L);
        robot.keyRelease(KeyEvent.VK_CONTROL);
        robot.keyRelease(KeyEvent.VK_L);
    } catch (AWTException ex) {
    }
           
        System.out.println("Olá, Usuári@!");
        System.out.println("Digite seu login: ");
            login = scanner.nextInt();
        System.out.println("Digite sua senha: ");
            senha = scanner.nextInt();
            
        System.out.println("Aguarde...");  
        
        try {
        Robot robot = new Robot();
        robot.setAutoDelay(1000);
        robot.keyPress(KeyEvent.VK_CONTROL);
        robot.keyPress(KeyEvent.VK_L);
        robot.keyRelease(KeyEvent.VK_CONTROL);
        robot.keyRelease(KeyEvent.VK_L);
    } catch (AWTException ex) {
    }
        
        if (loginCadast != login  || senhaCadast != senha) {
            System.out.println("Senha ou Login Incorreto, tente novamente!");
        } else {
            System.out.println("Seja Bem-Vind@");
        }

    }
}
