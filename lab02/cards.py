# -*- coding: utf-8 -*-
"""cards.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1OsEzRhbrAQct_ixxeaYyM-ilMd6alOce
"""

while True:
    alice = input().split()
    beatriz = input().split()
    
    if(alice == beatriz == '0'):
      break

    nAlice = [int(aux) for aux in input().split()]
    nBeatriz = [int(aux1) for aux1 in input().split()]

    alice = set(nAlice)
    beatriz = set(nBeatriz)
    aux2 = beatriz

    if(len(alice) < len(beatriz)):
      aux2 = alice
      alice = beatriz

    aux2 = [aux3 for aux3 in aux2 if aux3 not in alice]
    print(len(aux2))