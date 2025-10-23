import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.awt.geom.*;

public class AnimatedSorry extends JPanel implements ActionListener {
    private float alpha = 0f;
    private boolean fadingIn = true;
    private final Timer timer;
    private final String[] messages = {
            "Sorrrrrry Picchi",
            "Sorrrry Prettttty Little Babyyy",
            "Sorrrry My Cutest Angel",
            "Sorrrry Sweetest Princess",
            
    };
    private int messageIndex = 0;
    private int frameCounter = 0;
    private float hue = 0f;

    public AnimatedSorry() {
        setPreferredSize(new Dimension(1100, 450));
        setBackground(new Color(15, 15, 30));
        timer = new Timer(40, this);
        timer.start();
    }

    protected void paintComponent(Graphics g) {
        super.paintComponent(g);
        Graphics2D g2 = (Graphics2D) g.create();
        g2.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);

        int w = getWidth();
        int h = getHeight();
        String text = messages[messageIndex];

        Font font = new Font("Segoe Script", Font.BOLD, 80);
        g2.setFont(font);
        FontMetrics fm = g2.getFontMetrics();
        int textWidth = fm.stringWidth(text);
        int textHeight = fm.getAscent();

        float x = (w - textWidth) / 2f;
        float y = (h + textHeight) / 2f - 40;

        GradientPaint gp = new GradientPaint(
                0, 0,
                Color.getHSBColor(hue, 0.9f, 1f),
                w, h,
                Color.getHSBColor((hue + 0.5f) % 1f, 0.9f, 1f),
                true
        );

        g2.setPaint(gp);
        g2.setComposite(AlphaComposite.getInstance(AlphaComposite.SRC_OVER, alpha));
        g2.drawString(text, (int) x, (int) y);

        g2.setComposite(AlphaComposite.getInstance(AlphaComposite.SRC_OVER, alpha * 0.25f));
        g2.setPaint(new RadialGradientPaint(
                new Point2D.Float(w/2f, h/2f),
                Math.max(w,h)/2f,
                new float[]{0f,1f},
                new Color[]{new Color(255,255,255,150), new Color(0,0,0,0)}
        ));
        g2.fill(new Ellipse2D.Float(w/2f - 300, h/2f - 180, 600, 360));

        g2.dispose();
    }

    public void actionPerformed(ActionEvent e) {
        if (fadingIn) {
            alpha += 0.03f;
            if (alpha >= 1f) {
                alpha = 1f;
                frameCounter++;
                if (frameCounter > 30) {
                    fadingIn = false;
                    frameCounter = 0;
                }
            }
        } else {
            alpha -= 0.03f;
            if (alpha <= 0f) {
                alpha = 0f;
                fadingIn = true;
                messageIndex = (messageIndex + 1) % messages.length;
            }
        }
        hue += 0.004f;
        if (hue > 1f) hue = 0f;

        repaint();
    }

    public static void main(String[] args) {
        try { UIManager.setLookAndFeel(UIManager.getSystemLookAndFeelClassName()); } catch (Exception ignored) {}
        JFrame f = new JFrame("Animated Sorry");
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.getContentPane().add(new AnimatedSorry());
        f.pack();
        f.setLocationRelativeTo(null);
        f.setVisible(true);
    }
}
