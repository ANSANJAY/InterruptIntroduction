Triggering Methods
=====================================

Each interrupt signal input is designed to be triggered by either a logical signal level or a particular signal edge (level transition).

Level Triggered:
----------------

	Interrupt is requested by holding the interrupt signal at its particular (high or low) active logic level.
	Level triggered interrupts happen as long as the interrupt line is held at active level

	As long as the line is active, you get interrupt, when you serve the interrupt and return, if the interrupt line is still active, you get the interrupt again immediately.

	Level-triggered inputs allow multiple devices to share a common interrupt signal via wired-OR connections. 

Edge Triggered:
---------------

	Interrupt is requested by a level transition on the interrupt line.
		Falling Edge (high to low)
		Rising Edge  (Low to High) 
	
	These interrupts are issued per transition and not repeated. 
	e.g. in networking when the packet queue goes from empty to non-empty
	This makes it critical to never miss an edge triggered interrupt, because failure to handle one interrupt may result in no further interrupts from happening
	
