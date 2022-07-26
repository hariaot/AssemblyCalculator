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

	protected:




	protected:





















































































private: System::Windows::Forms::Label^ lbHistorico;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::DomainUpDown^ domainUpDown1;
private: System::Windows::Forms::CheckBox^ boxInverter;

private: System::Windows::Forms::Button^ btnDIV;
private: System::Windows::Forms::Button^ btnMUL;
private: System::Windows::Forms::Button^ btnSUB;
private: System::Windows::Forms::Button^ btnSOM;
private: System::Windows::Forms::Button^ btn1DIVX;
private: System::Windows::Forms::Button^ btnRESULTADO;
private: System::Windows::Forms::Button^ btnBackSpace;
private: System::Windows::Forms::Button^ btnFCP;
private: System::Windows::Forms::Button^ btnABP;
private: System::Windows::Forms::Button^ btnFAT;
private: System::Windows::Forms::Button^ btn8;
private: System::Windows::Forms::Button^ btn7;
private: System::Windows::Forms::Button^ btnXPOW2;
private: System::Windows::Forms::Button^ btnEPOWX;
private: System::Windows::Forms::Button^ btn9;
private: System::Windows::Forms::Button^ btn5;
private: System::Windows::Forms::Button^ btn4;
private: System::Windows::Forms::Button^ btnXPOWY;
private: System::Windows::Forms::Button^ btnSIN;
private: System::Windows::Forms::Button^ btn6;
private: System::Windows::Forms::Button^ btn2;
private: System::Windows::Forms::Button^ btn1;
private: System::Windows::Forms::Button^ btnSQRTX;
private: System::Windows::Forms::Button^ btnCOS;
private: System::Windows::Forms::Button^ btn3;
private: System::Windows::Forms::Button^ btnLog;
private: System::Windows::Forms::Button^ btnLn;
private: System::Windows::Forms::Button^ btn0;
private: System::Windows::Forms::Button^ btnSINAL;
private: System::Windows::Forms::Button^ btnXROOTY;
private: System::Windows::Forms::Button^ btnTAN;
private: System::Windows::Forms::Button^ btnDECIMAL;
private: System::Windows::Forms::Button^ btnPi;
private: System::Windows::Forms::Button^ btnClearAll;
private: System::Windows::Forms::TextBox^ txtbSaida;
private: System::Windows::Forms::Label^ titulo;















































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
            this->lbHistorico = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
            this->boxInverter = (gcnew System::Windows::Forms::CheckBox());
            this->btnDIV = (gcnew System::Windows::Forms::Button());
            this->btnMUL = (gcnew System::Windows::Forms::Button());
            this->btnSUB = (gcnew System::Windows::Forms::Button());
            this->btnSOM = (gcnew System::Windows::Forms::Button());
            this->btn1DIVX = (gcnew System::Windows::Forms::Button());
            this->btnRESULTADO = (gcnew System::Windows::Forms::Button());
            this->btnBackSpace = (gcnew System::Windows::Forms::Button());
            this->btnFCP = (gcnew System::Windows::Forms::Button());
            this->btnABP = (gcnew System::Windows::Forms::Button());
            this->btnFAT = (gcnew System::Windows::Forms::Button());
            this->btn8 = (gcnew System::Windows::Forms::Button());
            this->btn7 = (gcnew System::Windows::Forms::Button());
            this->btnXPOW2 = (gcnew System::Windows::Forms::Button());
            this->btnEPOWX = (gcnew System::Windows::Forms::Button());
            this->btn9 = (gcnew System::Windows::Forms::Button());
            this->btn5 = (gcnew System::Windows::Forms::Button());
            this->btn4 = (gcnew System::Windows::Forms::Button());
            this->btnXPOWY = (gcnew System::Windows::Forms::Button());
            this->btnSIN = (gcnew System::Windows::Forms::Button());
            this->btn6 = (gcnew System::Windows::Forms::Button());
            this->btn2 = (gcnew System::Windows::Forms::Button());
            this->btn1 = (gcnew System::Windows::Forms::Button());
            this->btnSQRTX = (gcnew System::Windows::Forms::Button());
            this->btnCOS = (gcnew System::Windows::Forms::Button());
            this->btn3 = (gcnew System::Windows::Forms::Button());
            this->btnLog = (gcnew System::Windows::Forms::Button());
            this->btnLn = (gcnew System::Windows::Forms::Button());
            this->btn0 = (gcnew System::Windows::Forms::Button());
            this->btnSINAL = (gcnew System::Windows::Forms::Button());
            this->btnXROOTY = (gcnew System::Windows::Forms::Button());
            this->btnTAN = (gcnew System::Windows::Forms::Button());
            this->btnDECIMAL = (gcnew System::Windows::Forms::Button());
            this->btnPi = (gcnew System::Windows::Forms::Button());
            this->btnClearAll = (gcnew System::Windows::Forms::Button());
            this->txtbSaida = (gcnew System::Windows::Forms::TextBox());
            this->titulo = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // lbHistorico
            // 
            this->lbHistorico->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->lbHistorico->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbHistorico->ForeColor = System::Drawing::SystemColors::ButtonShadow;
            this->lbHistorico->Location = System::Drawing::Point(25, 53);
            this->lbHistorico->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->lbHistorico->Name = L"lbHistorico";
            this->lbHistorico->Size = System::Drawing::Size(379, 18);
            this->lbHistorico->TabIndex = 47;
            this->lbHistorico->TextAlign = System::Drawing::ContentAlignment::TopRight;
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
                static_cast<System::Int32>(static_cast<System::Byte>(44)));
            this->button1->FlatAppearance->BorderSize = 0;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->button1->Location = System::Drawing::Point(385, 0);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(46, 31);
            this->button1->TabIndex = 86;
            this->button1->Text = L"x";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
            // 
            // domainUpDown1
            // 
            this->domainUpDown1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
                static_cast<System::Int32>(static_cast<System::Byte>(44)));
            this->domainUpDown1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->domainUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->domainUpDown1->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->domainUpDown1->Items->Add(L"Graus");
            this->domainUpDown1->Items->Add(L"Radianos");
            this->domainUpDown1->Location = System::Drawing::Point(29, 150);
            this->domainUpDown1->Name = L"domainUpDown1";
            this->domainUpDown1->ReadOnly = true;
            this->domainUpDown1->Size = System::Drawing::Size(96, 17);
            this->domainUpDown1->TabIndex = 85;
            this->domainUpDown1->Tag = L"";
            this->domainUpDown1->Text = L"Graus";
            this->domainUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->domainUpDown1->UpDownAlign = System::Windows::Forms::LeftRightAlignment::Left;
            // 
            // boxInverter
            // 
            this->boxInverter->AutoSize = true;
            this->boxInverter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->boxInverter->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->boxInverter->Location = System::Drawing::Point(132, 150);
            this->boxInverter->Name = L"boxInverter";
            this->boxInverter->Size = System::Drawing::Size(41, 19);
            this->boxInverter->TabIndex = 84;
            this->boxInverter->Text = L"Inv";
            this->boxInverter->UseVisualStyleBackColor = true;
            this->boxInverter->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::boxInverter_CheckedChanged);
            // 
            // btnDIV
            // 
            this->btnDIV->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)));
            this->btnDIV->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btnDIV->FlatAppearance->BorderSize = 0;
            this->btnDIV->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnDIV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnDIV->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btnDIV->Location = System::Drawing::Point(281, 211);
            this->btnDIV->Name = L"btnDIV";
            this->btnDIV->Size = System::Drawing::Size(58, 34);
            this->btnDIV->TabIndex = 83;
            this->btnDIV->Text = L"/";
            this->btnDIV->UseVisualStyleBackColor = false;
            // 
            // btnMUL
            // 
            this->btnMUL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)));
            this->btnMUL->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btnMUL->FlatAppearance->BorderSize = 0;
            this->btnMUL->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnMUL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnMUL->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btnMUL->Location = System::Drawing::Point(282, 251);
            this->btnMUL->Name = L"btnMUL";
            this->btnMUL->Size = System::Drawing::Size(58, 34);
            this->btnMUL->TabIndex = 82;
            this->btnMUL->Text = L"X";
            this->btnMUL->UseVisualStyleBackColor = false;
            // 
            // btnSUB
            // 
            this->btnSUB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)));
            this->btnSUB->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btnSUB->FlatAppearance->BorderSize = 0;
            this->btnSUB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnSUB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnSUB->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btnSUB->Location = System::Drawing::Point(282, 291);
            this->btnSUB->Name = L"btnSUB";
            this->btnSUB->Size = System::Drawing::Size(58, 34);
            this->btnSUB->TabIndex = 81;
            this->btnSUB->Text = L"-";
            this->btnSUB->UseVisualStyleBackColor = false;
            // 
            // btnSOM
            // 
            this->btnSOM->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)));
            this->btnSOM->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btnSOM->FlatAppearance->BorderSize = 0;
            this->btnSOM->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnSOM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnSOM->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btnSOM->Location = System::Drawing::Point(282, 331);
            this->btnSOM->Name = L"btnSOM";
            this->btnSOM->Size = System::Drawing::Size(58, 34);
            this->btnSOM->TabIndex = 80;
            this->btnSOM->Text = L"+";
            this->btnSOM->UseVisualStyleBackColor = false;
            // 
            // btn1DIVX
            // 
            this->btn1DIVX->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)));
            this->btn1DIVX->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btn1DIVX->FlatAppearance->BorderSize = 0;
            this->btn1DIVX->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn1DIVX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn1DIVX->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btn1DIVX->Location = System::Drawing::Point(27, 291);
            this->btn1DIVX->Name = L"btn1DIVX";
            this->btn1DIVX->Size = System::Drawing::Size(58, 34);
            this->btn1DIVX->TabIndex = 79;
            this->btn1DIVX->Text = L"1/x";
            this->btn1DIVX->UseVisualStyleBackColor = false;
            // 
            // btnRESULTADO
            // 
            this->btnRESULTADO->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->btnRESULTADO->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btnRESULTADO->FlatAppearance->BorderSize = 0;
            this->btnRESULTADO->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnRESULTADO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnRESULTADO->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btnRESULTADO->Location = System::Drawing::Point(281, 371);
            this->btnRESULTADO->Name = L"btnRESULTADO";
            this->btnRESULTADO->Size = System::Drawing::Size(123, 34);
            this->btnRESULTADO->TabIndex = 78;
            this->btnRESULTADO->Text = L"=";
            this->btnRESULTADO->UseVisualStyleBackColor = false;
            this->btnRESULTADO->Click += gcnew System::EventHandler(this, &MainWindow::btnRESULTADO_Click);
            // 
            // btnBackSpace
            // 
            this->btnBackSpace->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)));
            this->btnBackSpace->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btnBackSpace->FlatAppearance->BorderSize = 0;
            this->btnBackSpace->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnBackSpace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnBackSpace->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btnBackSpace->Location = System::Drawing::Point(282, 171);
            this->btnBackSpace->Name = L"btnBackSpace";
            this->btnBackSpace->Size = System::Drawing::Size(121, 34);
            this->btnBackSpace->TabIndex = 77;
            this->btnBackSpace->Text = L"C";
            this->btnBackSpace->UseVisualStyleBackColor = false;
            this->btnBackSpace->Click += gcnew System::EventHandler(this, &MainWindow::btnBackSpace_Click);
            // 
            // btnFCP
            // 
            this->btnFCP->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)));
            this->btnFCP->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btnFCP->FlatAppearance->BorderSize = 0;
            this->btnFCP->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnFCP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnFCP->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btnFCP->Location = System::Drawing::Point(217, 211);
            this->btnFCP->Name = L"btnFCP";
            this->btnFCP->Size = System::Drawing::Size(58, 34);
            this->btnFCP->TabIndex = 76;
            this->btnFCP->Text = L")";
            this->btnFCP->UseVisualStyleBackColor = false;
            // 
            // btnABP
            // 
            this->btnABP->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)));
            this->btnABP->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btnABP->FlatAppearance->BorderSize = 0;
            this->btnABP->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnABP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnABP->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btnABP->Location = System::Drawing::Point(153, 211);
            this->btnABP->Name = L"btnABP";
            this->btnABP->Size = System::Drawing::Size(58, 34);
            this->btnABP->TabIndex = 75;
            this->btnABP->Text = L"(";
            this->btnABP->UseVisualStyleBackColor = false;
            // 
            // btnFAT
            // 
            this->btnFAT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)));
            this->btnFAT->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btnFAT->FlatAppearance->BorderSize = 0;
            this->btnFAT->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnFAT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnFAT->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btnFAT->Location = System::Drawing::Point(345, 211);
            this->btnFAT->Name = L"btnFAT";
            this->btnFAT->Size = System::Drawing::Size(58, 34);
            this->btnFAT->TabIndex = 74;
            this->btnFAT->Text = L"n!";
            this->btnFAT->UseVisualStyleBackColor = false;
            // 
            // btn8
            // 
            this->btn8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
                static_cast<System::Int32>(static_cast<System::Byte>(14)));
            this->btn8->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btn8->FlatAppearance->BorderSize = 0;
            this->btn8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn8->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btn8->Location = System::Drawing::Point(153, 251);
            this->btn8->Name = L"btn8";
            this->btn8->Size = System::Drawing::Size(58, 34);
            this->btn8->TabIndex = 73;
            this->btn8->Text = L"8";
            this->btn8->UseVisualStyleBackColor = false;
            this->btn8->Click += gcnew System::EventHandler(this, &MainWindow::btn8_Click);
            // 
            // btn7
            // 
            this->btn7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
                static_cast<System::Int32>(static_cast<System::Byte>(14)));
            this->btn7->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btn7->FlatAppearance->BorderSize = 0;
            this->btn7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn7->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btn7->Location = System::Drawing::Point(89, 251);
            this->btn7->Name = L"btn7";
            this->btn7->Size = System::Drawing::Size(58, 34);
            this->btn7->TabIndex = 72;
            this->btn7->Text = L"7";
            this->btn7->UseVisualStyleBackColor = false;
            this->btn7->Click += gcnew System::EventHandler(this, &MainWindow::btn7_Click);
            // 
            // btnXPOW2
            // 
            this->btnXPOW2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)));
            this->btnXPOW2->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->btnXPOW2->FlatAppearance->BorderSize = 0;
            this->btnXPOW2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnXPOW2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnXPOW2->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btnXPOW2->Location = System::Drawing::Point(28, 171);
            this->btnXPOW2->Name = L"btnXPOW2";
            this->btnXPOW2->Size = System::Drawing::Size(58, 34);
            this->btnXPOW2->TabIndex = 71;
            this->btnXPOW2->Text = L"x^2";
            this->btnXPOW2->UseVisualStyleBackColor = false;
            // 
            // btnEPOWX
            // 
            this->btnEPOWX->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)));
            this->btnEPOWX->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btnEPOWX->FlatAppearance->BorderSize = 0;
            this->btnEPOWX->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnEPOWX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnEPOWX->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btnEPOWX->Location = System::Drawing::Point(89, 171);
            this->btnEPOWX->Name = L"btnEPOWX";
            this->btnEPOWX->Size = System::Drawing::Size(58, 34);
            this->btnEPOWX->TabIndex = 70;
            this->btnEPOWX->Text = L"e^x";
            this->btnEPOWX->UseVisualStyleBackColor = false;
            // 
            // btn9
            // 
            this->btn9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
                static_cast<System::Int32>(static_cast<System::Byte>(14)));
            this->btn9->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btn9->FlatAppearance->BorderSize = 0;
            this->btn9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn9->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btn9->Location = System::Drawing::Point(217, 251);
            this->btn9->Name = L"btn9";
            this->btn9->Size = System::Drawing::Size(58, 34);
            this->btn9->TabIndex = 69;
            this->btn9->Text = L"9";
            this->btn9->UseVisualStyleBackColor = false;
            this->btn9->Click += gcnew System::EventHandler(this, &MainWindow::btn9_Click);
            // 
            // btn5
            // 
            this->btn5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
                static_cast<System::Int32>(static_cast<System::Byte>(14)));
            this->btn5->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btn5->FlatAppearance->BorderSize = 0;
            this->btn5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn5->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btn5->Location = System::Drawing::Point(153, 291);
            this->btn5->Name = L"btn5";
            this->btn5->Size = System::Drawing::Size(58, 34);
            this->btn5->TabIndex = 68;
            this->btn5->Text = L"5";
            this->btn5->UseVisualStyleBackColor = false;
            this->btn5->Click += gcnew System::EventHandler(this, &MainWindow::btn5_Click);
            // 
            // btn4
            // 
            this->btn4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
                static_cast<System::Int32>(static_cast<System::Byte>(14)));
            this->btn4->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btn4->FlatAppearance->BorderSize = 0;
            this->btn4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn4->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btn4->Location = System::Drawing::Point(89, 291);
            this->btn4->Name = L"btn4";
            this->btn4->Size = System::Drawing::Size(58, 34);
            this->btn4->TabIndex = 67;
            this->btn4->Text = L"4";
            this->btn4->UseVisualStyleBackColor = false;
            this->btn4->Click += gcnew System::EventHandler(this, &MainWindow::btn4_Click);
            // 
            // btnXPOWY
            // 
            this->btnXPOWY->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)));
            this->btnXPOWY->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btnXPOWY->FlatAppearance->BorderSize = 0;
            this->btnXPOWY->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnXPOWY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnXPOWY->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btnXPOWY->Location = System::Drawing::Point(89, 211);
            this->btnXPOWY->Name = L"btnXPOWY";
            this->btnXPOWY->Size = System::Drawing::Size(58, 34);
            this->btnXPOWY->TabIndex = 66;
            this->btnXPOWY->Text = L"x^y";
            this->btnXPOWY->UseVisualStyleBackColor = false;
            // 
            // btnSIN
            // 
            this->btnSIN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)));
            this->btnSIN->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btnSIN->FlatAppearance->BorderSize = 0;
            this->btnSIN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnSIN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnSIN->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btnSIN->Location = System::Drawing::Point(346, 251);
            this->btnSIN->Name = L"btnSIN";
            this->btnSIN->Size = System::Drawing::Size(58, 34);
            this->btnSIN->TabIndex = 65;
            this->btnSIN->Text = L"sin";
            this->btnSIN->UseVisualStyleBackColor = false;
            // 
            // btn6
            // 
            this->btn6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
                static_cast<System::Int32>(static_cast<System::Byte>(14)));
            this->btn6->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btn6->FlatAppearance->BorderSize = 0;
            this->btn6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn6->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btn6->Location = System::Drawing::Point(217, 291);
            this->btn6->Name = L"btn6";
            this->btn6->Size = System::Drawing::Size(58, 34);
            this->btn6->TabIndex = 64;
            this->btn6->Text = L"6";
            this->btn6->UseVisualStyleBackColor = false;
            this->btn6->Click += gcnew System::EventHandler(this, &MainWindow::btn6_Click);
            // 
            // btn2
            // 
            this->btn2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
                static_cast<System::Int32>(static_cast<System::Byte>(14)));
            this->btn2->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btn2->FlatAppearance->BorderSize = 0;
            this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn2->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btn2->Location = System::Drawing::Point(153, 331);
            this->btn2->Name = L"btn2";
            this->btn2->Size = System::Drawing::Size(58, 34);
            this->btn2->TabIndex = 63;
            this->btn2->Text = L"2";
            this->btn2->UseVisualStyleBackColor = false;
            this->btn2->Click += gcnew System::EventHandler(this, &MainWindow::btn2_Click);
            // 
            // btn1
            // 
            this->btn1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
                static_cast<System::Int32>(static_cast<System::Byte>(14)));
            this->btn1->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btn1->FlatAppearance->BorderSize = 0;
            this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn1->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btn1->Location = System::Drawing::Point(89, 331);
            this->btn1->Name = L"btn1";
            this->btn1->Size = System::Drawing::Size(58, 34);
            this->btn1->TabIndex = 62;
            this->btn1->Text = L"1";
            this->btn1->UseVisualStyleBackColor = false;
            this->btn1->Click += gcnew System::EventHandler(this, &MainWindow::btn1_Click);
            // 
            // btnSQRTX
            // 
            this->btnSQRTX->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)));
            this->btnSQRTX->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btnSQRTX->FlatAppearance->BorderSize = 0;
            this->btnSQRTX->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnSQRTX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnSQRTX->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btnSQRTX->Location = System::Drawing::Point(28, 211);
            this->btnSQRTX->Name = L"btnSQRTX";
            this->btnSQRTX->Size = System::Drawing::Size(58, 34);
            this->btnSQRTX->TabIndex = 61;
            this->btnSQRTX->Text = L"√x";
            this->btnSQRTX->UseVisualStyleBackColor = false;
            // 
            // btnCOS
            // 
            this->btnCOS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)));
            this->btnCOS->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btnCOS->FlatAppearance->BorderSize = 0;
            this->btnCOS->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnCOS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnCOS->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btnCOS->Location = System::Drawing::Point(346, 291);
            this->btnCOS->Name = L"btnCOS";
            this->btnCOS->Size = System::Drawing::Size(58, 34);
            this->btnCOS->TabIndex = 60;
            this->btnCOS->Text = L"cos";
            this->btnCOS->UseVisualStyleBackColor = false;
            // 
            // btn3
            // 
            this->btn3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
                static_cast<System::Int32>(static_cast<System::Byte>(14)));
            this->btn3->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btn3->FlatAppearance->BorderSize = 0;
            this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn3->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btn3->Location = System::Drawing::Point(217, 331);
            this->btn3->Name = L"btn3";
            this->btn3->Size = System::Drawing::Size(58, 34);
            this->btn3->TabIndex = 59;
            this->btn3->Text = L"3";
            this->btn3->UseVisualStyleBackColor = false;
            this->btn3->Click += gcnew System::EventHandler(this, &MainWindow::btn3_Click);
            // 
            // btnLog
            // 
            this->btnLog->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)));
            this->btnLog->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btnLog->FlatAppearance->BorderSize = 0;
            this->btnLog->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnLog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnLog->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btnLog->Location = System::Drawing::Point(28, 331);
            this->btnLog->Name = L"btnLog";
            this->btnLog->Size = System::Drawing::Size(58, 34);
            this->btnLog->TabIndex = 58;
            this->btnLog->Text = L"log";
            this->btnLog->UseVisualStyleBackColor = false;
            // 
            // btnLn
            // 
            this->btnLn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)));
            this->btnLn->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btnLn->FlatAppearance->BorderSize = 0;
            this->btnLn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnLn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnLn->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btnLn->Location = System::Drawing::Point(27, 371);
            this->btnLn->Name = L"btnLn";
            this->btnLn->Size = System::Drawing::Size(58, 34);
            this->btnLn->TabIndex = 57;
            this->btnLn->Text = L"ln";
            this->btnLn->UseVisualStyleBackColor = false;
            // 
            // btn0
            // 
            this->btn0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
                static_cast<System::Int32>(static_cast<System::Byte>(14)));
            this->btn0->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btn0->FlatAppearance->BorderSize = 0;
            this->btn0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn0->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btn0->Location = System::Drawing::Point(153, 371);
            this->btn0->Name = L"btn0";
            this->btn0->Size = System::Drawing::Size(58, 34);
            this->btn0->TabIndex = 56;
            this->btn0->Text = L"0";
            this->btn0->UseVisualStyleBackColor = false;
            this->btn0->Click += gcnew System::EventHandler(this, &MainWindow::btn0_Click);
            // 
            // btnSINAL
            // 
            this->btnSINAL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
                static_cast<System::Int32>(static_cast<System::Byte>(14)));
            this->btnSINAL->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btnSINAL->FlatAppearance->BorderSize = 0;
            this->btnSINAL->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnSINAL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnSINAL->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btnSINAL->Location = System::Drawing::Point(89, 371);
            this->btnSINAL->Name = L"btnSINAL";
            this->btnSINAL->Size = System::Drawing::Size(58, 34);
            this->btnSINAL->TabIndex = 55;
            this->btnSINAL->Text = L"+/-";
            this->btnSINAL->UseVisualStyleBackColor = false;
            // 
            // btnXROOTY
            // 
            this->btnXROOTY->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)));
            this->btnXROOTY->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btnXROOTY->FlatAppearance->BorderSize = 0;
            this->btnXROOTY->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnXROOTY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnXROOTY->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btnXROOTY->Location = System::Drawing::Point(28, 251);
            this->btnXROOTY->Name = L"btnXROOTY";
            this->btnXROOTY->Size = System::Drawing::Size(58, 34);
            this->btnXROOTY->TabIndex = 54;
            this->btnXROOTY->Text = L"x^(1/y)";
            this->btnXROOTY->UseVisualStyleBackColor = false;
            // 
            // btnTAN
            // 
            this->btnTAN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)));
            this->btnTAN->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btnTAN->FlatAppearance->BorderSize = 0;
            this->btnTAN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnTAN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnTAN->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btnTAN->Location = System::Drawing::Point(346, 331);
            this->btnTAN->Name = L"btnTAN";
            this->btnTAN->Size = System::Drawing::Size(58, 34);
            this->btnTAN->TabIndex = 53;
            this->btnTAN->Text = L"tan";
            this->btnTAN->UseVisualStyleBackColor = false;
            // 
            // btnDECIMAL
            // 
            this->btnDECIMAL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
                static_cast<System::Int32>(static_cast<System::Byte>(14)));
            this->btnDECIMAL->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btnDECIMAL->FlatAppearance->BorderSize = 0;
            this->btnDECIMAL->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnDECIMAL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnDECIMAL->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btnDECIMAL->Location = System::Drawing::Point(217, 371);
            this->btnDECIMAL->Name = L"btnDECIMAL";
            this->btnDECIMAL->Size = System::Drawing::Size(58, 34);
            this->btnDECIMAL->TabIndex = 52;
            this->btnDECIMAL->Text = L".";
            this->btnDECIMAL->UseVisualStyleBackColor = false;
            // 
            // btnPi
            // 
            this->btnPi->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)));
            this->btnPi->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btnPi->FlatAppearance->BorderSize = 0;
            this->btnPi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnPi->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnPi->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btnPi->Location = System::Drawing::Point(152, 172);
            this->btnPi->Name = L"btnPi";
            this->btnPi->Size = System::Drawing::Size(58, 34);
            this->btnPi->TabIndex = 51;
            this->btnPi->Text = L"π";
            this->btnPi->UseVisualStyleBackColor = false;
            // 
            // btnClearAll
            // 
            this->btnClearAll->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)));
            this->btnClearAll->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
            this->btnClearAll->FlatAppearance->BorderSize = 0;
            this->btnClearAll->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnClearAll->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnClearAll->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btnClearAll->Location = System::Drawing::Point(216, 172);
            this->btnClearAll->Name = L"btnClearAll";
            this->btnClearAll->Size = System::Drawing::Size(58, 34);
            this->btnClearAll->TabIndex = 50;
            this->btnClearAll->Text = L"CE";
            this->btnClearAll->UseVisualStyleBackColor = false;
            this->btnClearAll->Click += gcnew System::EventHandler(this, &MainWindow::btnClearAll_Click);
            // 
            // txtbSaida
            // 
            this->txtbSaida->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
                static_cast<System::Int32>(static_cast<System::Byte>(44)));
            this->txtbSaida->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->txtbSaida->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
            this->txtbSaida->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->txtbSaida->Location = System::Drawing::Point(26, 74);
            this->txtbSaida->Name = L"txtbSaida";
            this->txtbSaida->ReadOnly = true;
            this->txtbSaida->Size = System::Drawing::Size(377, 38);
            this->txtbSaida->TabIndex = 49;
            this->txtbSaida->Text = L"0";
            this->txtbSaida->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // titulo
            // 
            this->titulo->AutoSize = true;
            this->titulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->titulo->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->titulo->Location = System::Drawing::Point(12, 9);
            this->titulo->Name = L"titulo";
            this->titulo->Size = System::Drawing::Size(87, 18);
            this->titulo->TabIndex = 87;
            this->titulo->Text = L"Calculadora";
            // 
            // MainWindow
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
                static_cast<System::Int32>(static_cast<System::Byte>(44)));
            this->ClientSize = System::Drawing::Size(431, 425);
            this->Controls->Add(this->titulo);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->domainUpDown1);
            this->Controls->Add(this->boxInverter);
            this->Controls->Add(this->btnDIV);
            this->Controls->Add(this->btnMUL);
            this->Controls->Add(this->btnSUB);
            this->Controls->Add(this->btnSOM);
            this->Controls->Add(this->btn1DIVX);
            this->Controls->Add(this->btnRESULTADO);
            this->Controls->Add(this->btnBackSpace);
            this->Controls->Add(this->btnFCP);
            this->Controls->Add(this->btnABP);
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
            this->Controls->Add(this->btn0);
            this->Controls->Add(this->btnSINAL);
            this->Controls->Add(this->btnXROOTY);
            this->Controls->Add(this->btnTAN);
            this->Controls->Add(this->btnDECIMAL);
            this->Controls->Add(this->btnPi);
            this->Controls->Add(this->btnClearAll);
            this->Controls->Add(this->txtbSaida);
            this->Controls->Add(this->lbHistorico);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Margin = System::Windows::Forms::Padding(2);
            this->MaximizeBox = false;
            this->Name = L"MainWindow";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
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

private: System::Void MainWindow_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}

       

private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}

 // Botoes Numerais

private: System::Void btn0_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->txtbSaida->Text != "0") {
        this->txtbSaida->Text += "0";
    }

}
private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->txtbSaida->Text == "0") {
        this->txtbSaida->Text = "1";
    }
    else {
        this->txtbSaida->Text += "1";
    }
}
private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->txtbSaida->Text == "0") {
        this->txtbSaida->Text = "2";
    }
    else {
        this->txtbSaida->Text += "2";
    }
}
private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->txtbSaida->Text == "0") {
        this->txtbSaida->Text = "3";
    }
    else {
        this->txtbSaida->Text += "3";
    }
}
private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->txtbSaida->Text == "0") {
        this->txtbSaida->Text = "4";
    }
    else {
        this->txtbSaida->Text += "4";
    }
}
private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->txtbSaida->Text == "0") {
        this->txtbSaida->Text = "5";
    }
    else {
        this->txtbSaida->Text += "5";
    }
}
private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->txtbSaida->Text == "0") {
        this->txtbSaida->Text = "6";
    }
    else {
        this->txtbSaida->Text += "6";
    }
}
private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->txtbSaida->Text == "0") {
        this->txtbSaida->Text = "7";
    }
    else {
        this->txtbSaida->Text += "7";
    }
}
private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->txtbSaida->Text == "0") {
        this->txtbSaida->Text = "8";
    }
    else {
        this->txtbSaida->Text += "8";
    }
}
private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->txtbSaida->Text == "0") {
        this->txtbSaida->Text = "9";
    }
    else {
        this->txtbSaida->Text += "9";
    }
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    Application::Exit();
}
private: System::Void btnRESULTADO_Click(System::Object^ sender, System::EventArgs^ e) {
    this->lbHistorico->Text = this->txtbSaida->Text;
}
private: System::Void boxInverter_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (this->boxInverter->Checked) {
        this->btnSIN->Text = "arcsin";
        this->btnCOS->Text = "arccos";
        this->btnTAN->Text = "arctg";
    }
    else {
        this->btnSIN->Text = "sin";
        this->btnCOS->Text = "cos";
        this->btnTAN->Text = "tan";
    }
}
private: System::Void btnClearAll_Click(System::Object^ sender, System::EventArgs^ e) {
    this->txtbSaida->Text = "0";
}
private: System::Void btnBackSpace_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
