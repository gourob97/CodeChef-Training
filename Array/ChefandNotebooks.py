#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Dec 16 22:44:24 2020

@author: gourob
"""

test =int(input())

for i in range(test):
    flag=0
    x,y,cash,n=map(int,input().split())
    for j in range(n):
        page, price = map(int,input().split())
        if(page>=(x-y) and price <=cash):
            flag=1
            
    if flag==0:
        print("UnluckyChef")
    else:
        print("LuckyChef")
