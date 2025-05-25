# AD-mini-shell

 🐚 Mini Shell – Projet1
 
Ce projet est un mini-shell fonctionnel développé en langage C.
Il a été conçu et testé dans un environnement Ubuntu 22.04 sur machine virtuelle VMware.


⚙️ Fonctionnalités principales

Interface "REPL" (Read-Eval-Print Loop) interactive
Commande "cd" pour naviguer dans les répertoires
Commande "echo" pour afficher du texte
Commande "env" pour afficher les variables d’environnement
Commande "exit" pour quitter proprement le shell
Interface personnalisée avec couleurs ANSI


🗂️ Architecture du projet

minishell.c	  : Boucle principale du shell et logique REPL
builtin.c	    : Fonctions internes (cd, echo, etc.)
utils.c	      : Fonctions utilitaires
minishell.h	  : Déclarations des fonctions et structures


🐧 Environnement de développement

Système     : Ubuntu 22.04 LTS
Plateforme  : Machine Virtuelle VMware Workstation
Langage     : C
Compilation : gcc minishell.c builtin.c utils.c -o minishell


🎬 Démonstration

Une vidéo de démonstration enregistrée sous Ubuntu est incluse dans le dépôt.
Elle montre le fonctionnement réel du mini-shell à travers plusieurs commandes.
