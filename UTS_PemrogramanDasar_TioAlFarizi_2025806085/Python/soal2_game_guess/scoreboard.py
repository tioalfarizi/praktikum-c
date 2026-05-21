import json

FILE_NAME = "scores.json"

def load_scores():

    try:
        with open(FILE_NAME, "r") as file:
            return json.load(file)

    except:
        return []

def save_score(player, score):

    scores = load_scores()

    scores.append({
        "player": player,
        "score": score
    })

    with open(FILE_NAME, "w") as file:
        json.dump(scores, file, indent=4)

def show_top_scores():

    scores = load_scores()

    scores.sort(key=lambda x: x["score"], reverse=True)

    print("\n=== TOP 5 SCORE ===")

    for i, data in enumerate(scores[:5], start=1):

        print(f"{i}. {data['player']} - {data['score']} pts")