// state_definitions.h

#ifndef STATE_DEFINITIONS_H
#define STATE_DEFINITIONS_H

// State enumeration
typedef enum {
    STATE_A,
    STATE_B,
    STATE_C,
    NUM_STATES
} State;

// Function pointer type for transition checks
typedef State* (*TransitionCheck)();

// Transition check functions
State* transition_a();
State* transition_b();
State* transition_c();

// State table struct
typedef struct {
    State current_state;
    TransitionCheck transition_check;
} StateTable;

// State table declaration
extern StateTable state_table[NUM_STATES];

#endif // STATE_DEFINITIONS_H