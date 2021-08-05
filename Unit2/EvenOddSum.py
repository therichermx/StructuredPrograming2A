import sys

def alternatingSums(input):
    team1 = [input[i] for i in range(0, len(input)) if i%2!=0]
    team2 = [input[i] for i in range(0, len(input)) if i%2==0]


if __name__ == "__main__":
    print(alternatingSums([50, 60, 60, 45, 70]))
