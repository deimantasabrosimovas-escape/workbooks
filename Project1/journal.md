Problem 1


C
D
E
F
H
I
J
K

I left out A as LapsRemaining didnt need to edit the values of fuel and burn rate, it only needed to calculate the amount of laps remaining.

I left out B as BurnOneLap needs to edit the fuel value, it doesnt have an "&" to indicate it will access and can edit the original value.

I left out G as the problem didnt mention that we needed to make fuel

there was only 3 to leave out but work book says 4?

Problem 2:

A: 10 10

B: 25 25

C: 99 99 99

D: 99 99 7

E: 99

F: 199

G: 3

C does not refer to other or alias, alias is another name for downforce, this line copies the value 99 from other into downforce.

Line G makes it so that downforce cannot be modified through view. But, it does not make the original variable constant. View only can refer to that same variable, reading view after gives the updated value 3.

Problem 3:

It says, the tyre pressure is adjusted, the CarSetup must not be changed, the journal confirms that setup should be const&. And, tyrePressure belongs to setup, so you cannot permanently change that as its const&.

Problem 4:

Swap did not work because first and second were copies It gave warning C4172:

Fastest receives copies called lapA and lapB. It returns a reference to one of these local copies. The copies stop existing when the function finishes, so the returned reference is left pointing to an object that no longer exists.

For this problem, I would use return an integer by value. An integer is very inexpensive to copy, like it doesnt use many resources, and the caller only needs the fastest time so, it does not need permission to modify one of the drivers’ variables.

Problem 5;

int TotalDownforce(const CarSetup& setup);
void ResetSetup(CarSetup& setup);
float AverageLapTime(float lapOne, float lapTwo);
void RecordLap(float& fastestSoFar, float thisLap);
int GearFor(const CarSetup& setup, int speed);
bool IsLegal(const CarSetup& setup);

TotalDownforce This copies the whole CarSetup even though the function only needs to read it. Using const& avoids copying the setup and prevents the function from changing it.

ResetSetup the reference allows the function to reset the original setup.

AverageLapTime 

RecordLap the reference lets the function update the caller’s fastest lap.

GearFor the CarSetup is copied unnecessarily. it should be using const&

IsLegal, Unable to do their jobs

Problem 6

Problem 6:

	1. lap time by value

A lap time would probably be a float, which is small and inexpensive to copy. The function only needs to read it.

	2. CarSetup that is only read by const&

CarSetup contains several values, so using const& avoids copying the whole setup. Const also stops the function from changing it.

	3. CarSetup that Is adjusted by &

The function needs access to the original CarSetup so that the caller can see the changes.

	4. Lap counter that Is incremented by &

The function needs to increment the caller's original counter rather than changing a copy.

	5. Single character for a tyre compound by value

A char is a very small value and Is inexpensive to copy. The function only needs to read it.

	6. CarSetup that is copied, changed locally and returned - by value

The function needs its own copy, so i would pass the CarSetup by value. It can change this copy and return it without changing the caller's original setup.

	7. bool saying whether it is raining by value

A bool is a very small value and is inexpensive to copy. The function only needs to read it.

The first option is passing by value, passing by the value automatically creates the local copy that the function needs. The function can modify setup and return it. This is short and clearly shows that the caller's original setup will not be changed.

The second option is passing by const& rhis avoids copying the setup when the function is called. this also makes it more resource efficient

I would use the pass by value because the function needs to make a copy anyway. It is simpler and allows the function to directly modify its local copy before returning it.

Stretch:

1. The loop works, but it creates a copy of each CarSetup.
2. Changing the header to const& gives an error, The error says that setup.frontWing cannot be changed because it is being accessed through a const object. The const reference lets the loop read the original setup without copying it, but does not let the loop change it.
3. Changing the header to a normal reference does not compile, rhe values inside the braces form an initializer list. The elements of an initializer list are const, so they cannot be connected to a normal reference that would allow them to be changed.
4. carSetup will be 24 bytes, The by-value loop would copy roughly 7.2 MB every second. as 5,000 × 24 × 60 = 7,200,000 bytes per second
5. choose how every loop variable should be passed.

I should not automatically write the type by value. I should ask whether the loop needs to read, change or copy each object. I should normally start with const& when the loop only needs to read larger objects, and only use a value when I deliberately need a copy.