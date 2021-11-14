def solution(bridge_length, weight, truck_weights):
    answer = 0
    on = []
    on_weight = 0
    time = 0
    while truck_weights or on:
        if time > bridge_length and time % bridge_length == 1:
            on_weight -= on[0]
            del on[0]
        if truck_weights:
            for i in range(len(truck_weights)):
                if truck_weights[i] + on_weight <= weight:
                    on.append(truck_weights[i])
                    on_weight += truck_weights[i]
                    del truck_weights[i]
                    break
        time += 1
    answer = time
    return answer
 
print(solution(2, 10, [7, 4, 5, 6])
