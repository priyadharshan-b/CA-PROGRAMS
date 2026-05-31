import java.awt.*;

public class FrameDemo {
    FrameDemo() {
        Frame fm = new Frame();                              // Creating a Frame
        fm.setTitle("My First Frame");                      // Setting the Title
        Label lb = new Label("Welcome to GUI Programming"); // Creating a Label
        fm.add(lb);                                         // adding Label to the Frame
        fm.setSize(300, 300);                               // setting Frame Size
        fm.setVisible(true);                                // set Frame Visibility to true
    }

    public static void main(String args[]) {
        FrameDemo ta = new FrameDemo();
    }
}
