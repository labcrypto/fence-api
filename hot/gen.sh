rm -rf gate
rm -rf transport
hot --out gate --cc --makefile --stub --client gate.hot
hot --out transport --cc --makefile --stub --client transport.hot
hot --out gate-java --java gate.hot
