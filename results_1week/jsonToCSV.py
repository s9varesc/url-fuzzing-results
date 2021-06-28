import argparse
import json
import csv

parser = argparse.ArgumentParser()
parser.add_argument("-dir")

args = parser.parse_args()
jsondir = args.dir

filenames=["allCoverages", "maxCoverages", "runDetails"]
allcov=""
maxcov=""
rundet=""
try:
	f=open(jsondir+"/"+filenames[0], "r")
	ac=f.read()
	f.close()
	allcov=json.loads(ac, strict=False)
except Exception as e:
	print("could not open and parse "+jsondir+"/"+filenames[0])	
	print(e)

try:
	f=open(jsondir+"/"+filenames[1], "r")
	mc=f.read()
	f.close()
	maxcov=json.loads(mc, strict=False)
except Exception as e:
	print("could not open and parse "+jsondir+"/"+filenames[1])	
	print(e)

try:
	f=open(jsondir+"/"+filenames[2], "r")
	rd=f.read()
	f.close()
	rundet=json.loads(rd, strict=False) 
except Exception as e:
	print("could not open and parse "+jsondir+"/"+filenames[2])	
	print(e)


	
parsers=["firefox", "chromium", "c", "cpp", "go", "java", "javascripturijs", "javascriptwhatwg-url", "php", "python", "ruby"]

fieldnames=["Run"]
fieldnames+=parsers

with open(jsondir+'coverages.csv', 'w', encoding='UTF8', newline='') as f:
	writer = csv.writer(f)
	writer.writerow(fieldnames)

	for i in range(0, len(allcov["firefox"])):
		datarow=[]
		for p in parsers:
			datarow+=[allcov[p][i]]
		data=[str(i)]
		data+=datarow
		writer.writerow(data)
	




























