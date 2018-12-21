# Binouz-bell

*"Dix-huit heure douze, l'heure de la binouze" !*

Ce script Arduino sonne les douze coups de la binouze à la douzième minute de chaque heure.

L'heure est obtenue via NTP, le script est conçu pour fonctionner sur une ESP8622 avec un servo branché en D4.

Petit projet quick & dirty au lendemain de la fête de Noël du bureau.

## Schéma électrique

Le schéma électrique est simple : un module ESP8266 et un servo (MG90s dans mon cas).

Sur ma nodemcu, j'ai branché directement le servo sur gnd, +3.3v, et D4. Ces trois broches étant côte à côte, ça me permet de n'avoir aucun câblage supplémentaire. Et le servo ne se plaint pas d'être alimenté en 3.3v.

## Modèle 3D

Le modèle 3D (Fusion 360) est téléchargeable à cette adresse : https://a360.co/2EHzeJy

## Vidéo de démo

https://youtu.be/xlLnai4AwbM