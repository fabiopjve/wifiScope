CFLAGS=-I.

EXEC = osc_agent

$(EXEC): osc_agent.o utils.o queue.o
	$(CC) $(CFLAGS) -o $(EXEC) osc_agent.o utils.o queue.o

osc_agent.o: osc_agent.cpp
	$(CC) $(CFLAGS) -c osc_agent.cpp

utils.o: utils.cpp
	$(CC) $(CFLAGS) -c utils.cpp

queue.o: queue.cpp
	$(CC) $(CFLAGS) -c queue.cpp

clean:
	rm -f *.o osc_agent .*~

install:
	rm -f /media/charlie/disk/osc_agent
	cp -f osc_agent /media/charlie/disk
	sync
