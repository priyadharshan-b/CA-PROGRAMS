import java.awt.*;
import java.awt.event.*;

public class KeysDemo extends Frame implements KeyListener {
    Label lbl;

    KeysDemo() {
        addKeyListener(this);
        requestFocus();
        lbl = new Label();
        lbl.setBounds(100, 100, 200, 40);
        lbl.setFont(new Font("Calibri", Font.BOLD, 16));
        add(lbl);
        setSize(400, 400);
        setLayout(null);
        setVisible(true);
    }

    public void keyPressed(KeyEvent e) {
        if (e.getKeyChar() == 'M' || e.getKeyChar() == 'm')
            lbl.setText("GOOD MORNING");
        else if (e.getKeyChar() == 'A' || e.getKeyChar() == 'a')
            lbl.setText("GOOD AFTERNOON");
        else if (e.getKeyChar() == 'E' || e.getKeyChar() == 'e')
            lbl.setText("GOOD EVENING");
        else if (e.getKeyChar() == 'N' || e.getKeyChar() == 'n')
            lbl.setText("GOOD NIGHT");
    }

    public void keyReleased(KeyEvent e) {
    }

    public void keyTyped(KeyEvent e) {
    }

    public static void main(String[] args) {
        new KeysDemo();
    }
}
