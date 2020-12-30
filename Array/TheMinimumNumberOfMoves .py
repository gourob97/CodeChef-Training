#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Dec 17 14:11:02 2020

@author: gourob
"""

test = int(input())

for t in range(test):
    
    n=int(input()) 
    w= input()
    wage=[int(i) for i in w.split()]
    
    step= sum(wage) - (n* min(wage))
    print(step)
    