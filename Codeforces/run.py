import os


os.chdir("/Users/nantha/Projc/competitive/codeforces/")
stream = os.popen("ls")
print(stream.read())

stream = os.popen('ls -lt')

output = stream.read()
print(output)
files = output.split("\n")
#print(files[2])
filename = files[2].split("\t")[0].split(" ")

compile_file = filename[-1]
print(compile_file)


stream1 = os.popen("g++ "+compile_file)
print("Errors: ")
compile_output = stream1.read()
import subprocess

if "error" in compile_output:
	print(compile_output)
elif "error" not in compile_output:
	print("Running code...")
	subprocess.call(["/Users/nantha/projc/competitive/codeforces/on"])
	#stream2 = os.popen("./a.out")
	#print(stream2.read())
	
	
