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
	/// Summary for MyForm10
	/// </summary>
	public ref class MyForm10 : public System::Windows::Forms::Form
	{
	public:
		MyForm10(void)
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
		~MyForm10()
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm10::typeid));
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
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(853, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 72);
			this->button1->TabIndex = 0;
			this->button1->Text = L"GO!";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm10::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Yellow;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(201, 204);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Madina";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Yellow;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(246, 303);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 32);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Mecca";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Yellow;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(145, 474);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(109, 32);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Jeddah";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Yellow;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(627, 167);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(136, 32);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Dammam";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Yellow;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(519, 204);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(104, 32);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Riyadh";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Yellow;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(126, 91);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 32);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Jouf";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Yellow;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(680, 365);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 32);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Tabuk";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Yellow;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(291, 43);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 32);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Ar\'ar";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
			});
			this->dataGridView1->Location = System::Drawing::Point(316, 61);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(500, 400);
			this->dataGridView1->TabIndex = 9;
			this->dataGridView1->Visible = false;
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
			// MyForm10
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
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
			this->DoubleBuffered = true;
			this->MaximizeBox = false;
			this->Name = L"MyForm10";
			this->Text = L"MyForm10";
			this->Load += gcnew System::EventHandler(this, &MyForm10::MyForm10_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm10_Load(System::Object^  sender, System::EventArgs^  e) {
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
							 num = k%8;
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
				 int MI = hashfunction("Mecca", array1);

				 int MaI = hashfunction("Madinah", array1);

				 int JI = hashfunction("Jouf", array1);

				 int AI = hashfunction("Ar'ar", array1);

				 int JeI = hashfunction("Jeddah", array1);

				 int RI = hashfunction("Riyadh", array1);

				 int DI = hashfunction("Dammam", array1);

				 int TI = hashfunction("Tabuk", array1);


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

				 edges.push_back(make_pair(670, make_pair(MI, MaI)));
				 edges.push_back(make_pair(870, make_pair(MI, JI)));
				 edges.push_back(make_pair(900, make_pair(MI, RI)));
				 edges.push_back(make_pair(250, make_pair(MI, DI)));
				 edges.push_back(make_pair(260, make_pair(MI, AI)));
				 edges.push_back(make_pair(560, make_pair(MI, JeI)));
				 edges.push_back(make_pair(900, make_pair(MI, TI)));
				 edges.push_back(make_pair(800, make_pair(MaI, JI)));
				 edges.push_back(make_pair(400, make_pair(MaI, RI)));
				 edges.push_back(make_pair(550, make_pair(MaI, DI)));
				 edges.push_back(make_pair(775, make_pair(MaI, AI)));
				 edges.push_back(make_pair(850, make_pair(MaI, JeI)));
				 edges.push_back(make_pair(300, make_pair(MaI, TI)));
				 edges.push_back(make_pair(270, make_pair(JI, RI)));
				 edges.push_back(make_pair(870, make_pair(JI, DI)));
				 edges.push_back(make_pair(890, make_pair(JI, AI)));
				 edges.push_back(make_pair(235, make_pair(JI, JeI)));
				 edges.push_back(make_pair(608, make_pair(JI, TI)));
				 edges.push_back(make_pair(178, make_pair(RI, DI)));
				 edges.push_back(make_pair(190, make_pair(RI, AI)));
				 edges.push_back(make_pair(200, make_pair(RI, JeI)));
				 edges.push_back(make_pair(990, make_pair(RI, TI)));
				 edges.push_back(make_pair(760, make_pair(DI, AI)));
				 edges.push_back(make_pair(790, make_pair(DI, JeI)));
				 edges.push_back(make_pair(970, make_pair(DI, TI)));
				 edges.push_back(make_pair(880, make_pair(AI, JeI)));
				 edges.push_back(make_pair(330, make_pair(AI, TI)));
				 edges.push_back(make_pair(430, make_pair(JeI, TI)));

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
	};
}
