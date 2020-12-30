#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Dec 15 11:20:53 2020

@author: gourob
"""

test = int(input())


for i in range(test):
    
    elephant,chocolates = map(int,input().split())
    choco = list(map(int,input().split()))
        
    if sum(choco) <= chocolates:
        print("Yes")
    else:
        print("No")
 