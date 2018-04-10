// testing serial monitoring commands.

void processSpecificCommand(char* data, char* paramValue, Print* output) {

  switch (data[0]) {
    case 'k':
      output->println("coucou");

      break;
  }
}

void printSpecificHelp(Print * output) {
  output->println(F("(k)ode"));
}

