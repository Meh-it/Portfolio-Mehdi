# 📁 Portfolio Projets - Mehdi CHARGUI

- **Nom et Prénom :** Mehdi CHARGUI
- **Formation / Filière :** DSP Développement et exploitation de parcs informatiques (DevOps) - Cnam Paris
- **Localisation :** 93000 Bobigny
- **Recherche de stage :** Stage du 01 mars au 23 avril 2027 (modulable)
- **LinkedIn :** https://www.linkedin.com/in/mehdi-chargui-it/

---
——-
## ❌ Projet 2 : Jeu du Morpion en C 

### 📌 Situation
Devoir pratique académique au Cnam dans le cours d'Algorithmique et Programmation en C visant à développer un jeu de Morpion interactif à deux joueurs dans le terminal.

### 🎯 Tâche
Concevoir un jeu à deux joueurs sur une grille 3x3 avec choix du symbole ('X' ou 'O'), alternance des tours, validation stricte des coordonnées et détection des victoires ou matchs nuls, **sans utiliser de tableaux multidimensionnels**.

### ⚙️ Action
- **Modélisation de la grille :** Utilisation de 9 variables de type `char` (`case11` à `case33`) initialisées avec le caractère `'-'`.
- **Entrées / Sorties terminal :** Utilisation des fonctions `printf()` pour l'affichage structuré de la grille et `scanf()` pour la lecture des coups.
- **Logique et Structures Conditionnelles (`if / else` & Opérateurs logiques) :**
  - Validation du symbole choisi par le joueur 1 ('X' ou 'O') et rejet de toute autre saisie.
  - Contrôle de la validité du coup (vérification que les coordonnées sont entre 1 et 3 et que la case est libre `'-'`).
  - Implémentation des tests de victoire sur les 8 alignements possibles (3 lignes, 3 colonnes, 2 diagonales).
  - Gestion du cas de match nul lorsque les 9 cases sont occupées sans alignement gagnant.

### 📊 Résultat
- Prototype fonctionnel respectant l'ensemble des contraintes algorithmiques fixées par l'enseignant.
- Validation des cas de test : refus des coups invalides et détection précise du vainqueur ou de l'égalité.

### 🔗 Preuve
- Code source : `morpion.c`

## 🎬 Projet : Application de Sondage et Système de Vote (Films)

### 📌 Situation
Projet académique réalisé en 2026 au Cnam (Paris) dans le cadre de la formation DSP DevOps pour concevoir une application console interactive de vote pour une sélection de 5 films.

### 🎯 Tâche
Développer un programme fiable en C permettant de collecter des votes, d'empêcher les erreurs de saisie utilisateur et d'afficher le décompte final des résultats.

### ⚙️ Action
- Structuration du programme en langage C sous VS Code avec compilation GCC.
- Implémentation d'un menu textuel avec contrôle des conditions (`if/else`).
- Automatisation du décompte des voix par des boucles itératives (`for`).
- Maintien de l'application active avec une boucle de contrôle (`while`).

### 📊 Résultat
- Programme 100 % fonctionnel et exécutable directement dans le terminal.
- Test réussi sans plantage lors des saisies incorrectes.

### 🔗 Preuve
- Code source disponible dans ce dépôt : `sondage.c`

---

## 🛠️ Compétences & Outils
- **Langages :** C, Bash, Python
- **Environnements :** Linux, Windows, Terminal
- **Outils :** VS Code, GCC, Git / GitHub
——-
