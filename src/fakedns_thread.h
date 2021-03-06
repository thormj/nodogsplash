/* Public interface to fakedns thread
*/

#ifndef fakedns_thread_h
#define fakedsn_thread_h

//Pthread start argument structure
typedef struct
{
	ushort port;
	int targetaddr[4];
} FDNSARGS;

//Thread Entry:
void* thread_fakedns(void* args);

#endif