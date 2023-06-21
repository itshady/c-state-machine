// state_definitions.c

#include "state_definitions.h"
#include <unistd.h>

State* transition_a() {
    // Custom condition for transitioning from state A
    sleep(1);
    return &state_table[STATE_B].current_state;
}

State* transition_b() {
    // Custom condition for transitioning from state B
    sleep(1);

    return (2 % 2 == 0) ? &state_table[STATE_C].current_state : &state_table[STATE_A].current_state;
}

State* transition_c() {
    // Custom condition for transitioning from state C
    sleep(1);
    return NULL; // Stop the state machine
}