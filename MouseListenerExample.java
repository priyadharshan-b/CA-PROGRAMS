import java.awt.*;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;

public class MouseListenerExample implements MouseListener {
    // create two labels lbl1 and lbl2
    Label lbl1, lbl2;
    // create a frame frame
    Frame fr;
    // create a string s
    String s;

    MouseListenerExample() {
        fr = new Frame("Java Mouse Listener Example");
        lbl1 = new Label("Demo for the Mouse Event", Label.CENTER);
        lbl2 = new Label();
        // set the layout of frame as FlowLayout
        fr.setLayout(new FlowLayout());
        // add label 1 to frame
        fr.add(lbl1);
        // add label 2 to frame
        fr.add(lbl2);
        // Register the created class MouseListenerExample with MouseListener
        fr.addMouseListener(this);
        // set the size of frame where width is 250 and height is 250
        fr.setSize(250, 250);
        // set the visibility of frame as true
        fr.setVisible(true);
    }

    // implementation of mouseClicked method
    public void mouseClicked(MouseEvent ev) {
        lbl2.setText("Mouse Button Clicked");
        fr.setVisible(true);
    }

    // implementation of mouseEntered method
    public void mouseEntered(MouseEvent ev) {
        lbl2.setText("Mouse has entered the area of window");
        fr.setVisible(true);
    }

    // implementation of mouseExited method
    public void mouseExited(MouseEvent ev) {
        lbl2.setText("Mouse has left the area of window");
        fr.setVisible(true);
    }

    // implementation of mousePressed method
    public void mousePressed(MouseEvent ev) {
        lbl2.setText("Mouse button is being pressed");
        fr.setVisible(true);
    }

    // implementation of mouseReleased method
    public void mouseReleased(MouseEvent ev) {
        lbl2.setText(" Mouse Released");
        fr.setVisible(true);
    }

    // main method
    public static void main(String args[]) {
        new MouseListenerExample();
    }
}
