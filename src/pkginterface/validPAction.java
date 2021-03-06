/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkginterface;

import java.awt.event.ActionEvent;
import javax.swing.AbstractAction;
import javax.swing.Box;
import javax.swing.JLabel;
import javax.swing.JTextArea;

/**
 *
 * @author Eléana
 */
public class validPAction extends AbstractAction{
    
    private Fenetre fenetre;
    private String source;
    
    public validPAction (Fenetre fenetre, String source)
    {
        super("Valider");
        this.fenetre = fenetre;
        this.source = source;
    }
    
    public void actionPerformed(ActionEvent e)
    {
        String pseudo = this.fenetre.buttons.getPseudo().getText();
        String mail = this.fenetre.buttons.getMail().getText();
        String yearOfBirth = (String)this.fenetre.buttons.getYear().getSelectedItem();
        Player newPlayer = new Player('b', pseudo, mail, Integer.parseInt(yearOfBirth));
        Player.add(newPlayer);
        if (source.equals("newH"))
        {
            this.fenetre.panel = new Deck(0);
            this.fenetre.panel.add(this.fenetre.buttons.menu("crea partie"));
            this.fenetre.setContentPane(this.fenetre.panel);
            this.fenetre.setVisible(true);
        }
        if (source.equals("players"))
        {
            this.fenetre.panel = new Deck(0);
            Box playersList = Box.createVerticalBox();
            playersList.add(new JLabel("Joueurs Enregistrés"));
            if (Player.getNumberOfPlayers() != 0)
            {
                Player[] players = Player.getAllPlayers();
                for (int numPlayer = 0; numPlayer < Player.getNumberOfPlayers(); ++numPlayer)
                    playersList.add(new JTextArea(Integer.toString(numPlayer +  1)
                            + " : pseudo : " + players[numPlayer].getPseudo()
                            + "\n"
                            + "mail : " + players[numPlayer].getMail()
                            + "\n"));
            }
            playersList.add(this.fenetre.buttons.menu("joueurs"));
            this.fenetre.panel.add(playersList);
            this.fenetre.setContentPane(this.fenetre.panel);
            this.fenetre.setVisible(true);
        }
    }
    
}
