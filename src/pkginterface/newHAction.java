/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkginterface;

import java.awt.event.ActionEvent;
import javax.swing.AbstractAction;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JLabel;

/**
 *
 * @author Eléana
 */
public class newHAction extends AbstractAction{
    
    private Fenetre fenetre;
    
    public newHAction (Fenetre fenetre)
    {
        super("Nouvelle Partie");
        this.fenetre = fenetre;
    }
    
    public newHAction (Fenetre fenetre, String name)
    {
        super(name);
        this.fenetre = fenetre;
    }
    
    public void actionPerformed(ActionEvent e)
    {
        this.fenetre.panel = new Deck(0);
        this.fenetre.panel.add(this.fenetre.buttons.menu("crea partie"));
        this.fenetre.setContentPane(this.fenetre.panel);
        this.fenetre.setVisible(true);
    }
}
