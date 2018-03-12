import re
from bs4 import BeautifulSoup as bs
import requests
from lxml import etree
headers = {
	'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/54.0.2840.59 Safari/537.36',
	'Content-Type': 'application/x-www-form-urlencoded',
	'Accept-Encoding': 'gzip, deflate',
	'Accept-Language': 'zh-CN,zh;q=0.8'
}
q=raw_input("Please input your user name:")
z=raw_input("Please input your correct test number(roughly):")
for k in range(1,702,1):
	em = [' ' for x in range(50)]
	em1 = [' ' for x in range(50)]
	em2 = [' ' for x in range(50)]
	em3 = [' ' for x in range(50)]
	em4 = [' ']
	url = 'https://www.patest.cn/contests/pat-b-practise/ranklist?page=' + str(k)
	resp=requests.get(url=url,headers=headers)
	resp.raise_for_status()
	resp.encoding = resp.apparent_encoding
	r = resp.text
	contentTree = etree.HTML(r, parser=etree.HTMLParser(encoding='utf-8'))
	em4 = contentTree.xpath('//*[@id="ranklist"]/tbody/tr[1]/td[4]/text()')
	print em4[0]+' The page is : '+str(k)
	m=int(em4[0])
	n=int(z)
	if(m<n+3):
		for i in range(1, 50, 1):
			em[i] = contentTree.xpath('//*[@id="ranklist"]/tbody/tr[' + str(i) + ']/td[1]/text()')
			em1[i] = contentTree.xpath('//*[@id="ranklist"]/tbody/tr[' + str(i) + ']/td[2]/a/text()')
			if(em1[i][0]==q):
				em2[i] = contentTree.xpath('//*[@id="ranklist"]/tbody/tr[' + str(i) + ']/td[4]/text()')
				em3[i] = contentTree.xpath('//*[@id="ranklist"]/tbody/tr[' + str(i) + ']/td[5]/text()')
				print 'your detail'+em[i][0] + ' ' + em1[i][0] + ' ' + em2[i][0] + ' ' + em3[i][0]
				exit()
			else if(em1[i][0]!=q):
				print em[i][0]+' '+em1[i][0]+"   It's not you"
	else:
		continue
