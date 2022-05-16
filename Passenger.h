//Created by IT21479250 Gunathilaka I.U.
#define SIZE 3
class Passenger{
	private:
		int PID;
		string name;
		string email;
		Payment *paymt;
		Ticket *tikt[SIZE];
	public:
		Passenger();
		void setDetails(int pPID, string pname, string pemail);
		void displayPaymentDetails(Payment *pPaymt);
		void getPDetails();
		void bookTicket();
		~Passenger();
}; 