import java.awt.*;

public class Button_not_clicking {
    public static void main(String[] args) {
        // Set headless mode
        // System.setProperty("java.awt.headless", "true");

        // Create an instance of the frame with the label
        Frame f = new Frame("Button Example");

        // Create an instance of the button with a label
        Button b = new Button("I won't work");

        // Set the position for the button in the frame
        b.setBounds(50, 100, 80, 30);

        // Add the button to the frame
        f.add(b);

        // Set size, layout, and visibility of the frame
        f.setSize(400, 400);
        f.setLayout(null);
        f.setVisible(true);
    }
}
