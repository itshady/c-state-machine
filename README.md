# State Machine in C

### Adding a new State

This example follows adding a new `state d`

- Go to `state_definitions.h` and add `State* transition_d();` on line 21. Also add `STATE_D` on line 11.
- Go to `state_definitions.c` and define `transition_d()`
- Go to `myStateMachine.c` and add `{STATE_D, transition_d}` on line 11.
