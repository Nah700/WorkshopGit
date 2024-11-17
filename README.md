# Partie 3 : Fonctionnalités Avancées de Git

⚠️ **ATTENTION** : Cette section contient des commandes puissantes qui peuvent modifier l'historique de votre projet. Utilisez-les avec précaution, particulièrement sur des branches partagées.

## Gestion avancée des commits

### Revenir à un ancien commit

1. **Visualiser l'historique des commits**
   ```bash
   # Voir l'historique avec les hashes des commits
   git log

   # Version plus compacte
   git log --oneline

   # Version graphique
   git log --graph --oneline --decorate
   ```

2. **Méthodes pour revenir en arrière**

   a. **Créer un nouveau commit qui annule les changements (sûr)**
   ```bash
   git revert <hash-du-commit>
   ```

   b. **Reset doux (conserve les modifications en staged)**
   ```bash
   git reset --soft <hash-du-commit>
   ```

   c. **Reset mixte (conserve les modifications non staged)**
   ```bash
   git reset --mixed <hash-du-commit>
   ```

   d. **Reset dur (⚠️ DANGER : supprime toutes les modifications)**
   ```bash
   git reset --hard <hash-du-commit>
   ```

### Utilisation de git push --force

⚠️ **TRÈS IMPORTANT** : Cette commande réécrit l'historique distant. À utiliser avec extrême précaution.

```bash
# Version dangereuse (à éviter)
git push --force

# Version sécurisée (recommandée)
git push --force-with-lease
```

**Quand utiliser force push ?**
- Après avoir réécrit l'historique local (rebase, reset)
- Sur une branche personnelle uniquement
- Jamais sur main/master ou des branches partagées

## Gestion avancée des stash

### Navigation dans les stash
```bash
# Lister tous les stash
git stash list

# Voir le contenu détaillé d'un stash
git stash show -p stash@{n}

# Créer un stash avec un message descriptif
git stash save "Message descriptif"
```

### Application sélective des stash
```bash
# Appliquer un stash spécifique sans le supprimer
git stash apply stash@{n}

# Appliquer et supprimer un stash spécifique
git stash pop stash@{n}

# Appliquer partiellement un stash
git stash show -p stash@{n} | git apply -3

# Créer une branche à partir d'un stash
git stash branch nom-nouvelle-branche stash@{n}
```

### Nettoyage des stash
```bash
# Supprimer un stash spécifique
git stash drop stash@{n}

# Supprimer tous les stash
git stash clear
```

## Utilisation avancée de git reset

### Les trois modes de reset
```bash
# --soft : garde les modifications en staged
git reset --soft HEAD~1  # Annule le dernier commit

# --mixed (défaut) : garde les modifications non staged
git reset HEAD~1  # Équivalent à git reset --mixed HEAD~1

# --hard : supprime toutes les modifications
git reset --hard HEAD~1  # ⚠️ DANGER : supprime définitivement les modifications
```

### Reset de fichiers spécifiques
```bash
# Unstage un fichier spécifique
git reset HEAD <fichier>

# Revenir à une version précédente d'un fichier
git reset <hash-commit> <fichier>
```

## Commandes avancées utiles

### Cherry-pick (appliquer un commit spécifique)
```bash
# Appliquer un commit spécifique
git cherry-pick <hash-commit>

# Cherry-pick sans commit
git cherry-pick -n <hash-commit>
```

### Reflog (historique des actions)
```bash
# Voir l'historique complet des actions
git reflog

# Revenir à un état précédent avec reflog
git reset --hard HEAD@{n}
```

### Nettoyage du repository
```bash
# Supprimer les fichiers non trackés
git clean -n  # Dry run (simulation)
git clean -f  # Force la suppression

# Supprimer les branches locales fusionnées
git branch --merged | grep -v "\*" | xargs -n 1 git branch -d
```

## Bonnes pratiques avancées

1. **Avant de modifier l'historique**
   - Créer une branche de sauvegarde
   - Vérifier si la branche est partagée
   - Communiquer avec l'équipe si nécessaire

2. **Utilisation de force push**
   - Toujours utiliser --force-with-lease
   - Vérifier deux fois la branche cible
   - Avoir un moyen de restaurer l'état précédent

3. **Gestion des stash**
   - Utiliser des messages descriptifs
   - Nettoyer régulièrement les vieux stash
   - Préférer les branches pour les modifications importantes

4. **Reset et revert**
   - Préférer revert pour les branches partagées
   - Utiliser reset uniquement sur des branches locales
   - Toujours commencer par un reset --soft ou --mixed

## En cas de catastrophe

1. **Si vous avez perdu des commits**
   ```bash
   # Vérifier le reflog
   git reflog

   # Récupérer les commits perdus
   git reset --hard HEAD@{n}
   ```

2. **Si vous avez fait un mauvais force push**
   - Vérifier le reflog local
   - Contacter rapidement l'équipe
   - Utiliser les sauvegardes si disponibles

3. **Si vous avez un mauvais reset --hard**
   ```bash
   # Les fichiers peuvent être dans les objets git
   git fsck --full

   # Chercher dans le reflog
   git reflog
   ```

## Points clés à retenir

- Toujours avoir une sauvegarde avant les opérations dangereuses
- Préférer les méthodes sûres (revert) aux méthodes dangereuses (reset --hard)
- Utiliser --force-with-lease au lieu de --force
- Maintenir des messages clairs dans les stash
- Vérifier deux fois avant d'exécuter des commandes irréversibles
- Le reflog est votre filet de sécurité