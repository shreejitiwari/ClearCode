# -*- coding: utf-8 -*-
"""
Created on Wed Jun  9 01:16:10 2021

@author: Shreeji
"""

'''YouTube Video Downloader'''


from pytube import YouTube
link = input('Enter the link : ')
YouTube(link).streams.get_highest_resolution().download(output_path=('E:\Videos'))
