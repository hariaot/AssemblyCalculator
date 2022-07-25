#pragma once

namespace AssemblyCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtbSaida;
	protected:

	private: System::Windows::Forms::Button^ btnClearAll;
	private: System::Windows::Forms::Button^ btnPi;
	private: System::Windows::Forms::Button^ btn0;
	protected:








	private: System::Windows::Forms::Button^ btnSINAL;
	private: System::Windows::Forms::Button^ btnXROOTY;
	private: System::Windows::Forms::Button^ btnTAN;



	private: System::Windows::Forms::Button^ btnDECIMAL;

	private: System::Windows::Forms::Button^ btnLog;
	private: System::Windows::Forms::Button^ btnLn;
	private: System::Windows::Forms::Button^ btnMC;




	private: System::Windows::Forms::Button^ btnMODX;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btnSQRTX;




	private: System::Windows::Forms::Button^ btnCOS;


	private: System::Windows::Forms::Button^ btn5;

	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btnXPOWY;
	private: System::Windows::Forms::Button^ btnSIN;



	private: System::Windows::Forms::Button^ btn6;

	private: System::Windows::Forms::Button^ btn8;


	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btnXPOW2;
	private: System::Windows::Forms::Button^ btnEPOWX;



	private: System::Windows::Forms::Button^ btn9;

	private: System::Windows::Forms::Button^ btnFCP;

	private: System::Windows::Forms::Button^ btnABP;

	private: System::Windows::Forms::Button^ btnMS;
	private: System::Windows::Forms::Button^ btnMM;
	private: System::Windows::Forms::Button^ btnFAT;
	private: System::Windows::Forms::Button^ btnMUL;
	private: System::Windows::Forms::Button^ btnSUB;
	private: System::Windows::Forms::Button^ btnSOM;







	private: System::Windows::Forms::Button^ btn1DIVX;
	private: System::Windows::Forms::Button^ btnRESULTADO;



	private: System::Windows::Forms::Button^ btnBackSpace;

	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ btnMR;
	private: System::Windows::Forms::Button^ btnDIV;
	private: System::Windows::Forms::Button^ btn3;
private: System::Windows::Forms::Label^ lbHistorico;





	protected:

	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtbSaida = (gcnew System::Windows::Forms::TextBox());
			this->btnClearAll = (gcnew System::Windows::Forms::Button());
			this->btnPi = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnSINAL = (gcnew System::Windows::Forms::Button());
			this->btnXROOTY = (gcnew System::Windows::Forms::Button());
			this->btnTAN = (gcnew System::Windows::Forms::Button());
			this->btnDECIMAL = (gcnew System::Windows::Forms::Button());
			this->btnLog = (gcnew System::Windows::Forms::Button());
			this->btnLn = (gcnew System::Windows::Forms::Button());
			this->btnMC = (gcnew System::Windows::Forms::Button());
			this->btnMR = (gcnew System::Windows::Forms::Button());
			this->btnMODX = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btnSQRTX = (gcnew System::Windows::Forms::Button());
			this->btnCOS = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btnXPOWY = (gcnew System::Windows::Forms::Button());
			this->btnSIN = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btnXPOW2 = (gcnew System::Windows::Forms::Button());
			this->btnEPOWX = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnFCP = (gcnew System::Windows::Forms::Button());
			this->btnABP = (gcnew System::Windows::Forms::Button());
			this->btnMS = (gcnew System::Windows::Forms::Button());
			this->btnMM = (gcnew System::Windows::Forms::Button());
			this->btnFAT = (gcnew System::Windows::Forms::Button());
			this->btnDIV = (gcnew System::Windows::Forms::Button());
			this->btnMUL = (gcnew System::Windows::Forms::Button());
			this->btnSUB = (gcnew System::Windows::Forms::Button());
			this->btnSOM = (gcnew System::Windows::Forms::Button());
			this->btn1DIVX = (gcnew System::Windows::Forms::Button());
			this->btnRESULTADO = (gcnew System::Windows::Forms::Button());
			this->btnBackSpace = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->lbHistorico = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtbSaida
			// 
			this->txtbSaida->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtbSaida->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtbSaida->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->txtbSaida->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->txtbSaida->Location = System::Drawing::Point(42, 81);
			this->txtbSaida->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtbSaida->Name = L"txtbSaida";
			this->txtbSaida->ReadOnly = true;
			this->txtbSaida->Size = System::Drawing::Size(566, 64);
			this->txtbSaida->TabIndex = 36;
			this->txtbSaida->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnClearAll
			// 
			this->btnClearAll->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnClearAll->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnClearAll->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClearAll->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnClearAll->Location = System::Drawing::Point(424, 185);
			this->btnClearAll->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnClearAll->Name = L"btnClearAll";
			this->btnClearAll->Size = System::Drawing::Size(87, 52);
			this->btnClearAll->TabIndex = 2;
			this->btnClearAll->Text = L"CE";
			this->btnClearAll->UseVisualStyleBackColor = false;
			// 
			// btnPi
			// 
			this->btnPi->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnPi->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnPi->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPi->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnPi->Location = System::Drawing::Point(328, 185);
			this->btnPi->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnPi->Name = L"btnPi";
			this->btnPi->Size = System::Drawing::Size(87, 52);
			this->btnPi->TabIndex = 6;
			this->btnPi->Text = L"π";
			this->btnPi->UseVisualStyleBackColor = false;
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->btn0->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn0->Location = System::Drawing::Point(328, 554);
			this->btn0->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(87, 52);
			this->btn0->TabIndex = 11;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &MainWindow::btn0_Click);
			// 
			// btnSINAL
			// 
			this->btnSINAL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->btnSINAL->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnSINAL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSINAL->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnSINAL->Location = System::Drawing::Point(232, 554);
			this->btnSINAL->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnSINAL->Name = L"btnSINAL";
			this->btnSINAL->Size = System::Drawing::Size(87, 52);
			this->btnSINAL->TabIndex = 10;
			this->btnSINAL->Text = L"+/-";
			this->btnSINAL->UseVisualStyleBackColor = false;
			// 
			// btnXROOTY
			// 
			this->btnXROOTY->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnXROOTY->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnXROOTY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnXROOTY->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnXROOTY->Location = System::Drawing::Point(136, 554);
			this->btnXROOTY->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnXROOTY->Name = L"btnXROOTY";
			this->btnXROOTY->Size = System::Drawing::Size(87, 52);
			this->btnXROOTY->TabIndex = 9;
			this->btnXROOTY->Text = L"x^(1/y)";
			this->btnXROOTY->UseVisualStyleBackColor = false;
			// 
			// btnTAN
			// 
			this->btnTAN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnTAN->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnTAN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTAN->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnTAN->Location = System::Drawing::Point(40, 554);
			this->btnTAN->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnTAN->Name = L"btnTAN";
			this->btnTAN->Size = System::Drawing::Size(87, 52);
			this->btnTAN->TabIndex = 8;
			this->btnTAN->Text = L"tan";
			this->btnTAN->UseVisualStyleBackColor = false;
			// 
			// btnDECIMAL
			// 
			this->btnDECIMAL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->btnDECIMAL->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnDECIMAL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDECIMAL->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnDECIMAL->Location = System::Drawing::Point(424, 554);
			this->btnDECIMAL->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnDECIMAL->Name = L"btnDECIMAL";
			this->btnDECIMAL->Size = System::Drawing::Size(87, 52);
			this->btnDECIMAL->TabIndex = 7;
			this->btnDECIMAL->Text = L".";
			this->btnDECIMAL->UseVisualStyleBackColor = false;
			// 
			// btnLog
			// 
			this->btnLog->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnLog->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnLog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLog->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnLog->Location = System::Drawing::Point(328, 246);
			this->btnLog->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnLog->Name = L"btnLog";
			this->btnLog->Size = System::Drawing::Size(87, 52);
			this->btnLog->TabIndex = 16;
			this->btnLog->Text = L"log";
			this->btnLog->UseVisualStyleBackColor = false;
			// 
			// btnLn
			// 
			this->btnLn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnLn->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnLn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnLn->Location = System::Drawing::Point(232, 246);
			this->btnLn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnLn->Name = L"btnLn";
			this->btnLn->Size = System::Drawing::Size(87, 52);
			this->btnLn->TabIndex = 15;
			this->btnLn->Text = L"ln";
			this->btnLn->UseVisualStyleBackColor = false;
			// 
			// btnMC
			// 
			this->btnMC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnMC->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnMC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMC->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnMC->Location = System::Drawing::Point(136, 246);
			this->btnMC->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnMC->Name = L"btnMC";
			this->btnMC->Size = System::Drawing::Size(87, 52);
			this->btnMC->TabIndex = 14;
			this->btnMC->Text = L"MC";
			this->btnMC->UseVisualStyleBackColor = false;
			// 
			// btnMR
			// 
			this->btnMR->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnMR->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnMR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMR->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnMR->Location = System::Drawing::Point(40, 246);
			this->btnMR->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnMR->Name = L"btnMR";
			this->btnMR->Size = System::Drawing::Size(87, 52);
			this->btnMR->TabIndex = 13;
			this->btnMR->Text = L"MR";
			this->btnMR->UseVisualStyleBackColor = false;
			// 
			// btnMODX
			// 
			this->btnMODX->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnMODX->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnMODX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMODX->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnMODX->Location = System::Drawing::Point(424, 246);
			this->btnMODX->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnMODX->Name = L"btnMODX";
			this->btnMODX->Size = System::Drawing::Size(87, 52);
			this->btnMODX->TabIndex = 12;
			this->btnMODX->Text = L"|x|";
			this->btnMODX->UseVisualStyleBackColor = false;
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->btn2->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn2->Location = System::Drawing::Point(328, 492);
			this->btn2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(87, 52);
			this->btn2->TabIndex = 21;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &MainWindow::btn2_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->btn1->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn1->Location = System::Drawing::Point(232, 492);
			this->btn1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(87, 52);
			this->btn1->TabIndex = 20;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &MainWindow::btn1_Click);
			// 
			// btnSQRTX
			// 
			this->btnSQRTX->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnSQRTX->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnSQRTX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSQRTX->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnSQRTX->Location = System::Drawing::Point(136, 492);
			this->btnSQRTX->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnSQRTX->Name = L"btnSQRTX";
			this->btnSQRTX->Size = System::Drawing::Size(87, 52);
			this->btnSQRTX->TabIndex = 19;
			this->btnSQRTX->Text = L"√x";
			this->btnSQRTX->UseVisualStyleBackColor = false;
			// 
			// btnCOS
			// 
			this->btnCOS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnCOS->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnCOS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCOS->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnCOS->Location = System::Drawing::Point(40, 492);
			this->btnCOS->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnCOS->Name = L"btnCOS";
			this->btnCOS->Size = System::Drawing::Size(87, 52);
			this->btnCOS->TabIndex = 18;
			this->btnCOS->Text = L"cos";
			this->btnCOS->UseVisualStyleBackColor = false;
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->btn3->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn3->Location = System::Drawing::Point(424, 492);
			this->btn3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(87, 52);
			this->btn3->TabIndex = 17;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &MainWindow::btn3_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->btn5->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn5->Location = System::Drawing::Point(328, 431);
			this->btn5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(87, 52);
			this->btn5->TabIndex = 26;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &MainWindow::btn5_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->btn4->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn4->Location = System::Drawing::Point(232, 431);
			this->btn4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(87, 52);
			this->btn4->TabIndex = 25;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &MainWindow::btn4_Click);
			// 
			// btnXPOWY
			// 
			this->btnXPOWY->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnXPOWY->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnXPOWY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnXPOWY->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnXPOWY->Location = System::Drawing::Point(136, 431);
			this->btnXPOWY->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnXPOWY->Name = L"btnXPOWY";
			this->btnXPOWY->Size = System::Drawing::Size(87, 52);
			this->btnXPOWY->TabIndex = 24;
			this->btnXPOWY->Text = L"x^y";
			this->btnXPOWY->UseVisualStyleBackColor = false;
			// 
			// btnSIN
			// 
			this->btnSIN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnSIN->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnSIN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSIN->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnSIN->Location = System::Drawing::Point(40, 431);
			this->btnSIN->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnSIN->Name = L"btnSIN";
			this->btnSIN->Size = System::Drawing::Size(87, 52);
			this->btnSIN->TabIndex = 23;
			this->btnSIN->Text = L"sin";
			this->btnSIN->UseVisualStyleBackColor = false;
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->btn6->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn6->Location = System::Drawing::Point(424, 431);
			this->btn6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(87, 52);
			this->btn6->TabIndex = 22;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &MainWindow::btn6_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->btn8->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn8->Location = System::Drawing::Point(328, 369);
			this->btn8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(87, 52);
			this->btn8->TabIndex = 31;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &MainWindow::btn8_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->btn7->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn7->Location = System::Drawing::Point(232, 369);
			this->btn7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(87, 52);
			this->btn7->TabIndex = 30;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &MainWindow::btn7_Click);
			// 
			// btnXPOW2
			// 
			this->btnXPOW2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnXPOW2->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnXPOW2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnXPOW2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnXPOW2->Location = System::Drawing::Point(136, 369);
			this->btnXPOW2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnXPOW2->Name = L"btnXPOW2";
			this->btnXPOW2->Size = System::Drawing::Size(87, 52);
			this->btnXPOW2->TabIndex = 29;
			this->btnXPOW2->Text = L"x^2";
			this->btnXPOW2->UseVisualStyleBackColor = false;
			// 
			// btnEPOWX
			// 
			this->btnEPOWX->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnEPOWX->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnEPOWX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEPOWX->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnEPOWX->Location = System::Drawing::Point(40, 369);
			this->btnEPOWX->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnEPOWX->Name = L"btnEPOWX";
			this->btnEPOWX->Size = System::Drawing::Size(87, 52);
			this->btnEPOWX->TabIndex = 28;
			this->btnEPOWX->Text = L"e^x";
			this->btnEPOWX->UseVisualStyleBackColor = false;
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->btn9->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn9->Location = System::Drawing::Point(424, 369);
			this->btn9->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(87, 52);
			this->btn9->TabIndex = 27;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &MainWindow::btn9_Click);
			// 
			// btnFCP
			// 
			this->btnFCP->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnFCP->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnFCP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFCP->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnFCP->Location = System::Drawing::Point(327, 308);
			this->btnFCP->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnFCP->Name = L"btnFCP";
			this->btnFCP->Size = System::Drawing::Size(87, 52);
			this->btnFCP->TabIndex = 36;
			this->btnFCP->Text = L")";
			this->btnFCP->UseVisualStyleBackColor = false;
			// 
			// btnABP
			// 
			this->btnABP->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnABP->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnABP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnABP->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnABP->Location = System::Drawing::Point(231, 308);
			this->btnABP->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnABP->Name = L"btnABP";
			this->btnABP->Size = System::Drawing::Size(87, 52);
			this->btnABP->TabIndex = 35;
			this->btnABP->Text = L"(";
			this->btnABP->UseVisualStyleBackColor = false;
			// 
			// btnMS
			// 
			this->btnMS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnMS->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnMS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMS->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnMS->Location = System::Drawing::Point(135, 308);
			this->btnMS->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnMS->Name = L"btnMS";
			this->btnMS->Size = System::Drawing::Size(87, 52);
			this->btnMS->TabIndex = 34;
			this->btnMS->Text = L"MS";
			this->btnMS->UseVisualStyleBackColor = false;
			// 
			// btnMM
			// 
			this->btnMM->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnMM->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnMM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMM->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnMM->Location = System::Drawing::Point(39, 308);
			this->btnMM->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnMM->Name = L"btnMM";
			this->btnMM->Size = System::Drawing::Size(87, 52);
			this->btnMM->TabIndex = 33;
			this->btnMM->Text = L"M+";
			this->btnMM->UseVisualStyleBackColor = false;
			// 
			// btnFAT
			// 
			this->btnFAT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnFAT->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnFAT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFAT->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnFAT->Location = System::Drawing::Point(423, 308);
			this->btnFAT->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnFAT->Name = L"btnFAT";
			this->btnFAT->Size = System::Drawing::Size(87, 52);
			this->btnFAT->TabIndex = 32;
			this->btnFAT->Text = L"n!";
			this->btnFAT->UseVisualStyleBackColor = false;
			// 
			// btnDIV
			// 
			this->btnDIV->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnDIV->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnDIV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDIV->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnDIV->Location = System::Drawing::Point(519, 308);
			this->btnDIV->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnDIV->Name = L"btnDIV";
			this->btnDIV->Size = System::Drawing::Size(87, 52);
			this->btnDIV->TabIndex = 43;
			this->btnDIV->Text = L"/";
			this->btnDIV->UseVisualStyleBackColor = false;
			// 
			// btnMUL
			// 
			this->btnMUL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnMUL->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnMUL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMUL->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnMUL->Location = System::Drawing::Point(520, 369);
			this->btnMUL->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnMUL->Name = L"btnMUL";
			this->btnMUL->Size = System::Drawing::Size(87, 52);
			this->btnMUL->TabIndex = 42;
			this->btnMUL->Text = L"X";
			this->btnMUL->UseVisualStyleBackColor = false;
			// 
			// btnSUB
			// 
			this->btnSUB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnSUB->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnSUB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSUB->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnSUB->Location = System::Drawing::Point(520, 431);
			this->btnSUB->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnSUB->Name = L"btnSUB";
			this->btnSUB->Size = System::Drawing::Size(87, 52);
			this->btnSUB->TabIndex = 41;
			this->btnSUB->Text = L"-";
			this->btnSUB->UseVisualStyleBackColor = false;
			// 
			// btnSOM
			// 
			this->btnSOM->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnSOM->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnSOM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSOM->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnSOM->Location = System::Drawing::Point(520, 492);
			this->btnSOM->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnSOM->Name = L"btnSOM";
			this->btnSOM->Size = System::Drawing::Size(87, 52);
			this->btnSOM->TabIndex = 40;
			this->btnSOM->Text = L"+";
			this->btnSOM->UseVisualStyleBackColor = false;
			// 
			// btn1DIVX
			// 
			this->btn1DIVX->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn1DIVX->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn1DIVX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1DIVX->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn1DIVX->Location = System::Drawing::Point(520, 246);
			this->btn1DIVX->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn1DIVX->Name = L"btn1DIVX";
			this->btn1DIVX->Size = System::Drawing::Size(87, 52);
			this->btn1DIVX->TabIndex = 39;
			this->btn1DIVX->Text = L"1/x";
			this->btn1DIVX->UseVisualStyleBackColor = false;
			// 
			// btnRESULTADO
			// 
			this->btnRESULTADO->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnRESULTADO->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnRESULTADO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRESULTADO->ForeColor = System::Drawing::SystemColors::GrayText;
			this->btnRESULTADO->Location = System::Drawing::Point(520, 554);
			this->btnRESULTADO->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnRESULTADO->Name = L"btnRESULTADO";
			this->btnRESULTADO->Size = System::Drawing::Size(87, 52);
			this->btnRESULTADO->TabIndex = 38;
			this->btnRESULTADO->Text = L"=";
			this->btnRESULTADO->UseVisualStyleBackColor = false;
			// 
			// btnBackSpace
			// 
			this->btnBackSpace->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnBackSpace->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnBackSpace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBackSpace->ForeColor = System::Drawing::SystemColors::GrayText;
			this->btnBackSpace->Location = System::Drawing::Point(520, 185);
			this->btnBackSpace->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnBackSpace->Name = L"btnBackSpace";
			this->btnBackSpace->Size = System::Drawing::Size(87, 52);
			this->btnBackSpace->TabIndex = 37;
			this->btnBackSpace->Text = L"C";
			this->btnBackSpace->UseVisualStyleBackColor = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->radioButton1->Location = System::Drawing::Point(40, 197);
			this->radioButton1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(89, 26);
			this->radioButton1->TabIndex = 44;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Graus";
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->radioButton2->Location = System::Drawing::Point(147, 197);
			this->radioButton2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(71, 26);
			this->radioButton2->TabIndex = 45;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Rad";
			this->radioButton2->UseVisualStyleBackColor = false;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::radioButton2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->checkBox1->Location = System::Drawing::Point(232, 197);
			this->checkBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(62, 26);
			this->checkBox1->TabIndex = 46;
			this->checkBox1->Text = L"Inv";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::checkBox1_CheckedChanged);
			// 
			// lbHistorico
			// 
			this->lbHistorico->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lbHistorico->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbHistorico->Location = System::Drawing::Point(39, 52);
			this->lbHistorico->Name = L"lbHistorico";
			this->lbHistorico->Size = System::Drawing::Size(569, 27);
			this->lbHistorico->TabIndex = 47;
			this->lbHistorico->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(646, 654);
			this->Controls->Add(this->lbHistorico);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->btnDIV);
			this->Controls->Add(this->btnMUL);
			this->Controls->Add(this->btnSUB);
			this->Controls->Add(this->btnSOM);
			this->Controls->Add(this->btn1DIVX);
			this->Controls->Add(this->btnRESULTADO);
			this->Controls->Add(this->btnBackSpace);
			this->Controls->Add(this->btnFCP);
			this->Controls->Add(this->btnABP);
			this->Controls->Add(this->btnMS);
			this->Controls->Add(this->btnMM);
			this->Controls->Add(this->btnFAT);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnXPOW2);
			this->Controls->Add(this->btnEPOWX);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btnXPOWY);
			this->Controls->Add(this->btnSIN);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btnSQRTX);
			this->Controls->Add(this->btnCOS);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btnLog);
			this->Controls->Add(this->btnLn);
			this->Controls->Add(this->btnMC);
			this->Controls->Add(this->btnMR);
			this->Controls->Add(this->btnMODX);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btnSINAL);
			this->Controls->Add(this->btnXROOTY);
			this->Controls->Add(this->btnTAN);
			this->Controls->Add(this->btnDECIMAL);
			this->Controls->Add(this->btnPi);
			this->Controls->Add(this->btnClearAll);
			this->Controls->Add(this->txtbSaida);
			this->MaximizeBox = false;
			this->Name = L"MainWindow";
			this->Text = L"MainWindow";
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	// Botoes Numerais
	private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtbSaida->Text += "9";
		
	}
	private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtbSaida->Text += "8";
	}
	private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtbSaida->Text += "7";
	}
	private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtbSaida->Text += "6";
	}
	private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtbSaida->Text += "5";
	}
	private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtbSaida->Text += "4";
	}
	private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtbSaida->Text += "3";
	}
	private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtbSaida->Text += "2";
	}
	private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtbSaida->Text += "1";
	}
	private: System::Void btn0_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtbSaida->Text += "0";
	}


private: System::Void MainWindow_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void saida_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}

};
}
