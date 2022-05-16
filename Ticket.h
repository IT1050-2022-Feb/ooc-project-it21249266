//Created by IT21479250 Gunathilaka I.U.
class Ticket{
	private:
		int TID;
		float tPrice;
		int tType;
		string tDate;
	public:
		Ticket();
		void addTicketDetails (int pTID, float ptPrice, int ptType, string ptDate);
		void displayTicketDetails();
		~Ticket();
		
};