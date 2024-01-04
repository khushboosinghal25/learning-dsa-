import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class leftRotationGUI extends JFrame implements ActionListener {

    private JLabel label1, label2;
    private JTextField inputField, outputField;
    private JButton rotateButton;
    
    public leftRotationGUI() {
        super("left Rotation GUI");
        
        // Create GUI components
        label1 = new JLabel("Enter array elements (separated by comma): ");
        inputField = new JTextField(20);
        label2 = new JLabel("Array after left rotation: ");
        outputField = new JTextField(20);
        outputField.setEditable(false);
        rotateButton = new JButton("Rotate");
        rotateButton.addActionListener(this);
        
        // Add components to GUI
        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(3, 2));
        panel.add(label1);
        panel.add(inputField);
        panel.add(label2);
        panel.add(outputField);
        panel.add(new JLabel());
        panel.add(rotateButton);
        add(panel);
        
        // Set GUI properties
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(400, 150);
        setLocationRelativeTo(null);
        setVisible(true);
    }
    
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == rotateButton) {
            String input = inputField.getText();
            String[] inputArr = input.split(",");
            int[] arr = new int[inputArr.length];
            for (int i = 0; i < inputArr.length; i++) {
                arr[i] = Integer.parseInt(inputArr[i]);
            }
            rotateLeft(arr);
            String output = "";
            for (int i = 0; i < arr.length; i++) {
                output += arr[i] + ",";
            }
            output = output.substring(0, output.length() - 1);
            outputField.setText(output);
        }
    }
    
    private void rotateLeft(int[] arr) {
        int temp = arr[0];
        for (int i = 0; i < arr.length - 1; i++) {
            arr[i] = arr[i+1];
        }
        arr[arr.length - 1] = temp;
    }
    
    public static void main(String[] args) {
        new leftRotationGUI();
    }
}
