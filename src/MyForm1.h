#pragma once
#include <array>
#include <iostream>
#include <algorithm>;
#include <vector>;
#include <string>


namespace Project35 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:

		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;

	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Yellow;
			this->button1->Location = System::Drawing::Point(113, 126);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Canada";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LimeGreen;
			this->button2->Location = System::Drawing::Point(685, 98);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Russia";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->Location = System::Drawing::Point(136, 193);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 2;
			this->button3->Text = L"USA";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(647, 229);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(61, 26);
			this->button4->TabIndex = 3;
			this->button4->Text = L"India";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button5->Location = System::Drawing::Point(695, 193);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(81, 28);
			this->button5->TabIndex = 4;
			this->button5->Text = L"China";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Lime;
			this->button6->Location = System::Drawing::Point(586, 206);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(84, 26);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Pakistan";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button7->Location = System::Drawing::Point(771, 325);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 28);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Australlia";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button8->Location = System::Drawing::Point(501, 229);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 28);
			this->button8->TabIndex = 7;
			this->button8->Text = L"SaudiaArab";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(832, 21);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 62);
			this->button9->TabIndex = 8;
			this->button9->Text = L"GO!";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
			});
			this->dataGridView1->Location = System::Drawing::Point(278, 32);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(400, 370);
			this->dataGridView1->TabIndex = 24;
			this->dataGridView1->Visible = false;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm1::dataGridView1_CellContentClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"FROM";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"TO";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"DISTANCE";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(982, 453);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"MyForm1";
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void toolTip1_Popup(System::Object^  sender, System::Windows::Forms::PopupEventArgs^  e) {
	}
	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
				 int* parent = new int[8];
				 string* array1 = new string[8];
				 string* ve1 = new string[7];
				 string* ve2 = new string[7];
				 int* we = new int[7];

				 kruskal(array1, parent, ve1, ve2, we);
	};
			 //to find parent of x;

			 int find(int x, int parent[]) {
				 if (parent[x] == x)
					 return x;
				 else
					 return find(parent[x], parent);
			 };
			 //to unite different paths

			 void unite(int x, int y, int parent[]) {
				 int findx = find(x, parent);
				 int findy = find(y, parent);
				 parent[findx] = findy;
			 };

			 int hashfunction(string y, string array1[]) {
				 char v = y[0];
				 int number = (int)v;
				 int arrayy[7];
				 int index = 6;
				 while (number > 0) {
					 arrayy[index] = number % 2;
					 number /= 2;
					 index--;
				 }
				 int num = (arrayy[4] * 4) + (arrayy[5] * 2) + (arrayy[6] * 1);

				 bool flag = true;
				 if (array1[num] == "x") {
					 array1[num] = y;
				 }
				 else {
					 for (int k = num; k < 14; k++) {
						 if (array1[k % 8] == "x" && flag == true) {
							 array1[k % 8] = y;
							 flag = false;
							 num = k % 8;
						 }
					 };
				 };
				 return num;
			 };



			 void kruskal(string array1[], int parent[], string ve1[], string ve2[], int we[]) {
				 for (int z = 0; z <= 7; z++) {
					 array1[z] = "x";
				 };
				 int a = 0;
				 int b = 0;
				 int c = 0;
				 int i;

				 //finding index of each country
				 int PI = hashfunction("Pakistan", array1);

				 int II = hashfunction("India", array1);

				 int UI = hashfunction("USA", array1);

				 int CI = hashfunction("China", array1);

				 int CaI = hashfunction("Canada", array1);

				 int SI = hashfunction("SaudiaArab", array1);

				 int AI = hashfunction("Australlia", array1);

				 int RI = hashfunction("Russia", array1);


				 for (i = 0; i < 8; i++) { //initialise all indexes to themselves. make self loops
					 parent[i] = i;
				 };
				 // initialise variables;
				 int e;
				 int v;	//e= edges, v=vertices
				 e = 28;
				 v = 8;
				 int v1;
				 v1 = 0;
				 int v2;
				 v2 = 0;
				 int w;
				 w = 0;//v1= vextex1, v2= vertex2, w=weight of edge
				 vector < pair < int, pair < int, int > >> edges;

				 // make vectors

				 edges.push_back(make_pair(3000, make_pair(PI, II)));
				 edges.push_back(make_pair(1500, make_pair(PI, RI)));
				 edges.push_back(make_pair(2000, make_pair(PI, CI)));
				 edges.push_back(make_pair(2500, make_pair(PI, UI)));
				 edges.push_back(make_pair(3000, make_pair(PI, SI)));
				 edges.push_back(make_pair(3500, make_pair(PI, AI)));
				 edges.push_back(make_pair(4000, make_pair(PI, CaI)));
				 edges.push_back(make_pair(4000, make_pair(II, RI)));
				 edges.push_back(make_pair(5000, make_pair(II, CI)));
				 edges.push_back(make_pair(1500, make_pair(II, UI)));
				 edges.push_back(make_pair(2750, make_pair(II, SI)));
				 edges.push_back(make_pair(2500, make_pair(II, AI)));
				 edges.push_back(make_pair(3000, make_pair(II, CaI)));
				 edges.push_back(make_pair(1000, make_pair(CI, RI)));
				 edges.push_back(make_pair(4000, make_pair(CI, UI)));
				 edges.push_back(make_pair(3000, make_pair(CI, SI)));
				 edges.push_back(make_pair(2750, make_pair(CI, AI)));
				 edges.push_back(make_pair(900, make_pair(CI, CaI)));
				 edges.push_back(make_pair(1100, make_pair(RI, AI)));
				 edges.push_back(make_pair(1500, make_pair(RI, CaI)));
				 edges.push_back(make_pair(2000, make_pair(RI, SI)));
				 edges.push_back(make_pair(8900, make_pair(RI, UI)));
				 edges.push_back(make_pair(5600, make_pair(UI, CaI)));
				 edges.push_back(make_pair(7900, make_pair(UI, AI)));
				 edges.push_back(make_pair(6700, make_pair(UI, SI)));
				 edges.push_back(make_pair(8800, make_pair(CaI, AI)));
				 edges.push_back(make_pair(2300, make_pair(CaI, SI)));
				 edges.push_back(make_pair(2300, make_pair(AI, SI)));

				 int totaldistance = 0, totaledges = 0, edgesindex = 0;

				 //sort edges in ascending order

				 sort(edges.begin(), edges.end());

				 while ((totaledges < v - 1) && (edgesindex < e)) {
					 v1 = edges[edgesindex].second.first;
					 v2 = edges[edgesindex].second.second;
					 w = edges[edgesindex].first;


					 if (find(v1, parent) != find(v2, parent)) {
						 unite(v1, v2, parent);
						 totaldistance += w;
						 ve1[a] = array1[v1];
						 a++;
						 ve2[b] = array1[v2];
						 b++;
						 we[c] = w;
						 c++;

						 totaledges++;
					 };
					 edgesindex++;
				 };
				 String^ str1 = gcnew String(ve1[0].c_str());
				 Console::WriteLine(str1);
				 String^ str2 = gcnew String(ve1[1].c_str());
				 Console::WriteLine(str2);
				 String^ str3 = gcnew String(ve1[2].c_str());
				 Console::WriteLine(str3);
				 String^ str4 = gcnew String(ve1[3].c_str());
				 Console::WriteLine(str4);
				 String^ str5 = gcnew String(ve1[4].c_str());
				 Console::WriteLine(str5);
				 String^ str6 = gcnew String(ve1[5].c_str());
				 Console::WriteLine(str6);
				 String^ str7 = gcnew String(ve1[6].c_str());
				 Console::WriteLine(str7);
				 String^ str8 = gcnew String(ve2[0].c_str());
				 Console::WriteLine(str8);
				 String^ str9 = gcnew String(ve2[1].c_str());
				 Console::WriteLine(str9);
				 String^ str10 = gcnew String(ve2[2].c_str());
				 Console::WriteLine(str10);
				 String^ str11 = gcnew String(ve2[3].c_str());
				 Console::WriteLine(str11);
				 String^ str12 = gcnew String(ve2[4].c_str());
				 Console::WriteLine(str12);
				 String^ str13 = gcnew String(ve2[5].c_str());
				 Console::WriteLine(str13);
				 String^ str14 = gcnew String(ve2[6].c_str());
				 Console::WriteLine(str14);

				 cli::array<String^>^row1 = gcnew  cli::array<String^>{
					 str1, str8, Convert::ToString(we[0])
				 };
				 cli::array<String^>^row2 = gcnew cli::array<String^>{
					 str2, str9, Convert::ToString(we[1])
				 };
				 cli::array<String^>^row3 = gcnew cli::array<String^>{
					 str3, str10, Convert::ToString(we[2])
				 };
				 cli::array<String^>^row4 = gcnew cli::array<String^>{
					 str4, str11, Convert::ToString(we[3])
				 };
				 cli::array<String^>^row5 = gcnew cli::array<String^>{
					 str5, str12, Convert::ToString(we[4])
				 };
				 cli::array<String^>^row6 = gcnew cli::array<String^>{
					 str6, str13, Convert::ToString(we[5])
				 };
				 cli::array<String^>^row7 = gcnew cli::array<String^>{
					 str7, str14, Convert::ToString(we[6])
				 };

				 cli::array<String^>^row8 = gcnew cli::array<String^>{
					 "", "", ""
				 };
				 cli::array<String^>^row9 = gcnew cli::array<String^>{
					 "Total Distance: ", "", Convert::ToString(totaldistance)
				 };


				 cli::array<Object^>^rows = { row1, row2, row3, row4, row5, row6, row7, row8, row9 };
				 System::Collections::IEnumerator^ myEnum = rows->GetEnumerator();
				 while (myEnum->MoveNext())
				 {
					 cli::array<String^>^rowArray = safe_cast<cli::array<String^>^>(myEnum->Current);
					 this->dataGridView1->Rows->Add(rowArray);
				 }


				 this->dataGridView1->Visible = true;


				 this->button1->Visible = false;
				 this->button2->Visible = false;
				 this->button3->Visible = false;
				 this->button4->Visible = false;
				 this->button5->Visible = false;
				 this->button6->Visible = false;
				 this->button7->Visible = false;
				 this->button8->Visible = false;
				 this->button9->Visible = false;
			 };
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
				
	}

};
};

