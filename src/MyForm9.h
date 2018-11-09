#pragma once
#include <array>
#include <iostream>
#include <algorithm>
#include <vector>
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
	/// Summary for MyForm9
	/// </summary>
	public ref class MyForm9 : public System::Windows::Forms::Form
	{
	public:
		MyForm9(void)
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
		~MyForm9()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm9::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
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
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(820, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 65);
			this->button1->TabIndex = 0;
			this->button1->Text = L"GO!";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm9::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Lime;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(841, 157);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"NewYork";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm9::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Lime;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(158, 318);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 32);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Las vegas";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm9::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Lime;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(234, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(183, 32);
			this->label3->TabIndex = 3;
			this->label3->Text = L"SaltLake City";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm9::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Lime;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(505, 336);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(145, 32);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Oklahoma";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm9::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Lime;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(791, 352);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(104, 32);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Boston";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm9::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Lime;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(569, 412);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(121, 32);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Houston";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm9::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Lime;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(33, 118);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(122, 32);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Portland";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm9::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Lime;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(648, 73);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(91, 32);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Miami";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm9::label8_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
			});
			this->dataGridView1->Location = System::Drawing::Point(289, 39);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(450, 370);
			this->dataGridView1->TabIndex = 9;
			this->dataGridView1->Visible = false;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm9::dataGridView1_CellContentClick);
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
			// MyForm9
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(982, 453);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->Name = L"MyForm9";
			this->Text = L"MyForm9";
			this->Load += gcnew System::EventHandler(this, &MyForm9::MyForm9_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm9_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
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
				 int NI = hashfunction("NewYork", array1);

				 int PI = hashfunction("Portland", array1);

				 int OI = hashfunction("Oklahoma CIty", array1);

				 int HI = hashfunction("Houston", array1);

				 int MI = hashfunction("Miami", array1);

				 int SI = hashfunction("SaltLake City", array1);

				 int BI = hashfunction("Boston", array1);

				 int LI = hashfunction("Las Vegas", array1);


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

				 edges.push_back(make_pair(100, make_pair(NI, PI)));
				 edges.push_back(make_pair(750, make_pair(NI, HI)));
				 edges.push_back(make_pair(100, make_pair(NI, OI)));
				 edges.push_back(make_pair(450, make_pair(NI, MI)));
				 edges.push_back(make_pair(200, make_pair(NI, SI)));
				 edges.push_back(make_pair(750, make_pair(NI, BI)));
				 edges.push_back(make_pair(400, make_pair(NI, LI)));
				 edges.push_back(make_pair(1000, make_pair(PI, HI)));
				 edges.push_back(make_pair(600, make_pair(PI, OI)));
				 edges.push_back(make_pair(750, make_pair(PI, MI)));
				 edges.push_back(make_pair(175, make_pair(PI, SI)));
				 edges.push_back(make_pair(550, make_pair(PI, BI)));
				 edges.push_back(make_pair(200, make_pair(PI, LI)));
				 edges.push_back(make_pair(370, make_pair(HI, OI)));
				 edges.push_back(make_pair(190, make_pair(HI, MI)));
				 edges.push_back(make_pair(200, make_pair(HI, SI)));
				 edges.push_back(make_pair(175, make_pair(HI, BI)));
				 edges.push_back(make_pair(308, make_pair(HI, LI)));
				 edges.push_back(make_pair(178, make_pair(BI, MI)));
				 edges.push_back(make_pair(190, make_pair(BI, SI)));
				 edges.push_back(make_pair(200, make_pair(BI, LI)));
				 edges.push_back(make_pair(990, make_pair(BI, OI)));
				 edges.push_back(make_pair(760, make_pair(MI, OI)));
				 edges.push_back(make_pair(790, make_pair(MI, LI)));
				 edges.push_back(make_pair(970, make_pair(MI, SI)));
				 edges.push_back(make_pair(880, make_pair(SI, LI)));
				 edges.push_back(make_pair(330, make_pair(SI, OI)));
				 edges.push_back(make_pair(430, make_pair(LI, OI)));

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
				 this->label1->Visible = false;
				 this->label2->Visible = false;
				 this->label3->Visible = false;
				 this->label4->Visible = false;
				 this->label5->Visible = false;
				 this->label6->Visible = false;
				 this->label7->Visible = false;
				 this->label8->Visible = false;

			 };
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
};
}
