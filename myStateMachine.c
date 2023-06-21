// myStateMachine.c

#include <stdio.h>
#include "myStateMachine.h"

// State table
StateTable state_table[NUM_STATES] = {
    {STATE_A, transition_a},
    {STATE_B, transition_b},
    {STATE_C, transition_c}
};

// Print the current state
void print_current_state(State state) {
    printf("State %c\n", 'A' + state);
}

int main() {
    // Initial state
    State* current_state = &state_table[STATE_A].current_state;

    // Run the state machine until the next state is NULL
    while (current_state != NULL) {
        print_current_state(*current_state);
        current_state = state_table[*current_state].transition_check();
    }

    return 0;
}