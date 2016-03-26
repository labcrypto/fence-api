rm -rf gate
rm -rf transport
hot --out gate --makefile --stub --client gate.hot
hot --out transport --makefile --stub --client transport.hot
