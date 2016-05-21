import subprocess

class NoTerminal:
    f = ""
    o = ""
    def main(self):
        f = raw_input("Enter file names: ")
        o = raw_input("Enter output names: ")
        self.callShell(f, o)

    def callShell(self, files, output):
        subprocess.call("g++ -std=c++11 " + files + " -o " + output, shell=True)

nt = NoTerminal()
nt.main()
