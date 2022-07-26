#pragma once

#include "Equacao.h"

#define _euler 2.7182818284
#define _pi 3.14159265359

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
            equacao = new Equacao();
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
    private: Equacao  *equacao;

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
            this->lbHistorico->Location = System::Drawing::Point(1, 82);
            this->lbHistorico->Name = L"lbHistorico";
            this->lbHistorico->Size = System::Drawing::Size(568, 28);
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
            this->button1->Location = System::Drawing::Point(515, 2);
            this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(69, 48);
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
            this->domainUpDown1->Location = System::Drawing::Point(10, 231);
            this->domainUpDown1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->domainUpDown1->Name = L"domainUpDown1";
            this->domainUpDown1->ReadOnly = true;
            this->domainUpDown1->Size = System::Drawing::Size(144, 24);
            this->domainUpDown1->TabIndex = 85;
            this->domainUpDown1->Tag = L"";
            this->domainUpDown1->Text = L"Graus";
            this->domainUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->domainUpDown1->UpDownAlign = System::Windows::Forms::LeftRightAlignment::Left;
            this->domainUpDown1->SelectedItemChanged += gcnew System::EventHandler(this, &MainWindow::domainUpDown1_SelectedItemChanged);
            // 
            // boxInverter
            // 
            this->boxInverter->AutoSize = true;
            this->boxInverter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->boxInverter->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->boxInverter->Location = System::Drawing::Point(162, 231);
            this->boxInverter->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->boxInverter->Name = L"boxInverter";
            this->boxInverter->Size = System::Drawing::Size(59, 26);
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
            this->btnDIV->Location = System::Drawing::Point(390, 325);
            this->btnDIV->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnDIV->Name = L"btnDIV";
            this->btnDIV->Size = System::Drawing::Size(87, 52);
            this->btnDIV->TabIndex = 83;
            this->btnDIV->Text = L"/";
            this->btnDIV->UseVisualStyleBackColor = false;
            this->btnDIV->Click += gcnew System::EventHandler(this, &MainWindow::btnDIV_Click);
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
            this->btnMUL->Location = System::Drawing::Point(390, 386);
            this->btnMUL->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnMUL->Name = L"btnMUL";
            this->btnMUL->Size = System::Drawing::Size(87, 52);
            this->btnMUL->TabIndex = 82;
            this->btnMUL->Text = L"*";
            this->btnMUL->UseVisualStyleBackColor = false;
            this->btnMUL->Click += gcnew System::EventHandler(this, &MainWindow::btnMUL_Click);
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
            this->btnSUB->Location = System::Drawing::Point(390, 448);
            this->btnSUB->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnSUB->Name = L"btnSUB";
            this->btnSUB->Size = System::Drawing::Size(87, 52);
            this->btnSUB->TabIndex = 81;
            this->btnSUB->Text = L"-";
            this->btnSUB->UseVisualStyleBackColor = false;
            this->btnSUB->Click += gcnew System::EventHandler(this, &MainWindow::btnSUB_Click);
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
            this->btnSOM->Location = System::Drawing::Point(390, 509);
            this->btnSOM->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnSOM->Name = L"btnSOM";
            this->btnSOM->Size = System::Drawing::Size(87, 52);
            this->btnSOM->TabIndex = 80;
            this->btnSOM->Text = L"+";
            this->btnSOM->UseVisualStyleBackColor = false;
            this->btnSOM->Click += gcnew System::EventHandler(this, &MainWindow::btnSOM_Click);
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
            this->btn1DIVX->Location = System::Drawing::Point(10, 448);
            this->btn1DIVX->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btn1DIVX->Name = L"btn1DIVX";
            this->btn1DIVX->Size = System::Drawing::Size(87, 52);
            this->btn1DIVX->TabIndex = 79;
            this->btn1DIVX->Text = L"1/x";
            this->btn1DIVX->UseVisualStyleBackColor = false;
            this->btn1DIVX->Click += gcnew System::EventHandler(this, &MainWindow::btn1DIVX_Click);
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
            this->btnRESULTADO->Location = System::Drawing::Point(390, 571);
            this->btnRESULTADO->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnRESULTADO->Name = L"btnRESULTADO";
            this->btnRESULTADO->Size = System::Drawing::Size(184, 52);
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
            this->btnBackSpace->Location = System::Drawing::Point(390, 263);
            this->btnBackSpace->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnBackSpace->Name = L"btnBackSpace";
            this->btnBackSpace->Size = System::Drawing::Size(182, 52);
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
            this->btnFCP->Location = System::Drawing::Point(295, 325);
            this->btnFCP->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnFCP->Name = L"btnFCP";
            this->btnFCP->Size = System::Drawing::Size(87, 52);
            this->btnFCP->TabIndex = 76;
            this->btnFCP->Text = L")";
            this->btnFCP->UseVisualStyleBackColor = false;
            this->btnFCP->Click += gcnew System::EventHandler(this, &MainWindow::btnFCP_Click);
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
            this->btnABP->Location = System::Drawing::Point(200, 325);
            this->btnABP->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnABP->Name = L"btnABP";
            this->btnABP->Size = System::Drawing::Size(87, 52);
            this->btnABP->TabIndex = 75;
            this->btnABP->Text = L"(";
            this->btnABP->UseVisualStyleBackColor = false;
            this->btnABP->Click += gcnew System::EventHandler(this, &MainWindow::btnABP_Click);
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
            this->btnFAT->Location = System::Drawing::Point(485, 324);
            this->btnFAT->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnFAT->Name = L"btnFAT";
            this->btnFAT->Size = System::Drawing::Size(87, 52);
            this->btnFAT->TabIndex = 74;
            this->btnFAT->Text = L"n!";
            this->btnFAT->UseVisualStyleBackColor = false;
            this->btnFAT->Click += gcnew System::EventHandler(this, &MainWindow::btnFAT_Click);
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
            this->btn8->Location = System::Drawing::Point(200, 386);
            this->btn8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btn8->Name = L"btn8";
            this->btn8->Size = System::Drawing::Size(87, 52);
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
            this->btn7->Location = System::Drawing::Point(105, 386);
            this->btn7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btn7->Name = L"btn7";
            this->btn7->Size = System::Drawing::Size(87, 52);
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
            this->btnXPOW2->Location = System::Drawing::Point(10, 263);
            this->btnXPOW2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnXPOW2->Name = L"btnXPOW2";
            this->btnXPOW2->Size = System::Drawing::Size(87, 52);
            this->btnXPOW2->TabIndex = 71;
            this->btnXPOW2->Text = L"x^2";
            this->btnXPOW2->UseVisualStyleBackColor = false;
            this->btnXPOW2->Click += gcnew System::EventHandler(this, &MainWindow::btnXPOW2_Click);
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
            this->btnEPOWX->Location = System::Drawing::Point(105, 263);
            this->btnEPOWX->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnEPOWX->Name = L"btnEPOWX";
            this->btnEPOWX->Size = System::Drawing::Size(87, 52);
            this->btnEPOWX->TabIndex = 70;
            this->btnEPOWX->Text = L"e^x";
            this->btnEPOWX->UseVisualStyleBackColor = false;
            this->btnEPOWX->Click += gcnew System::EventHandler(this, &MainWindow::btnEPOWX_Click);
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
            this->btn9->Location = System::Drawing::Point(295, 386);
            this->btn9->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btn9->Name = L"btn9";
            this->btn9->Size = System::Drawing::Size(87, 52);
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
            this->btn5->Location = System::Drawing::Point(200, 448);
            this->btn5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btn5->Name = L"btn5";
            this->btn5->Size = System::Drawing::Size(87, 52);
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
            this->btn4->Location = System::Drawing::Point(105, 448);
            this->btn4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btn4->Name = L"btn4";
            this->btn4->Size = System::Drawing::Size(87, 52);
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
            this->btnXPOWY->Location = System::Drawing::Point(105, 325);
            this->btnXPOWY->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnXPOWY->Name = L"btnXPOWY";
            this->btnXPOWY->Size = System::Drawing::Size(87, 52);
            this->btnXPOWY->TabIndex = 66;
            this->btnXPOWY->Text = L"x^y";
            this->btnXPOWY->UseVisualStyleBackColor = false;
            this->btnXPOWY->Click += gcnew System::EventHandler(this, &MainWindow::btnXPOWY_Click);
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
            this->btnSIN->Location = System::Drawing::Point(485, 386);
            this->btnSIN->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnSIN->Name = L"btnSIN";
            this->btnSIN->Size = System::Drawing::Size(87, 52);
            this->btnSIN->TabIndex = 65;
            this->btnSIN->Text = L"sen";
            this->btnSIN->UseVisualStyleBackColor = false;
            this->btnSIN->Click += gcnew System::EventHandler(this, &MainWindow::btnSIN_Click);
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
            this->btn6->Location = System::Drawing::Point(295, 448);
            this->btn6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btn6->Name = L"btn6";
            this->btn6->Size = System::Drawing::Size(87, 52);
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
            this->btn2->Location = System::Drawing::Point(200, 509);
            this->btn2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btn2->Name = L"btn2";
            this->btn2->Size = System::Drawing::Size(87, 52);
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
            this->btn1->Location = System::Drawing::Point(105, 509);
            this->btn1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btn1->Name = L"btn1";
            this->btn1->Size = System::Drawing::Size(87, 52);
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
            this->btnSQRTX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
            this->btnSQRTX->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btnSQRTX->Location = System::Drawing::Point(10, 325);
            this->btnSQRTX->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnSQRTX->Name = L"btnSQRTX";
            this->btnSQRTX->Size = System::Drawing::Size(87, 52);
            this->btnSQRTX->TabIndex = 61;
            this->btnSQRTX->Text = L"x^(1/2)";
            this->btnSQRTX->UseVisualStyleBackColor = false;
            this->btnSQRTX->Click += gcnew System::EventHandler(this, &MainWindow::btnSQRTX_Click);
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
            this->btnCOS->Location = System::Drawing::Point(485, 448);
            this->btnCOS->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnCOS->Name = L"btnCOS";
            this->btnCOS->Size = System::Drawing::Size(87, 52);
            this->btnCOS->TabIndex = 60;
            this->btnCOS->Text = L"cos";
            this->btnCOS->UseVisualStyleBackColor = false;
            this->btnCOS->Click += gcnew System::EventHandler(this, &MainWindow::btnCOS_Click);
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
            this->btn3->Location = System::Drawing::Point(295, 509);
            this->btn3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btn3->Name = L"btn3";
            this->btn3->Size = System::Drawing::Size(87, 52);
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
            this->btnLog->Location = System::Drawing::Point(10, 509);
            this->btnLog->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnLog->Name = L"btnLog";
            this->btnLog->Size = System::Drawing::Size(87, 52);
            this->btnLog->TabIndex = 58;
            this->btnLog->Text = L"log";
            this->btnLog->UseVisualStyleBackColor = false;
            this->btnLog->Click += gcnew System::EventHandler(this, &MainWindow::btnLog_Click);
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
            this->btnLn->Location = System::Drawing::Point(10, 571);
            this->btnLn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnLn->Name = L"btnLn";
            this->btnLn->Size = System::Drawing::Size(87, 52);
            this->btnLn->TabIndex = 57;
            this->btnLn->Text = L"ln";
            this->btnLn->UseVisualStyleBackColor = false;
            this->btnLn->Click += gcnew System::EventHandler(this, &MainWindow::btnLn_Click);
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
            this->btn0->Location = System::Drawing::Point(200, 571);
            this->btn0->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btn0->Name = L"btn0";
            this->btn0->Size = System::Drawing::Size(87, 52);
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
            this->btnSINAL->Location = System::Drawing::Point(105, 571);
            this->btnSINAL->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnSINAL->Name = L"btnSINAL";
            this->btnSINAL->Size = System::Drawing::Size(87, 52);
            this->btnSINAL->TabIndex = 55;
            this->btnSINAL->Text = L"+/-";
            this->btnSINAL->UseVisualStyleBackColor = false;
            this->btnSINAL->Click += gcnew System::EventHandler(this, &MainWindow::btnSINAL_Click);
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
            this->btnXROOTY->Location = System::Drawing::Point(10, 386);
            this->btnXROOTY->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnXROOTY->Name = L"btnXROOTY";
            this->btnXROOTY->Size = System::Drawing::Size(87, 52);
            this->btnXROOTY->TabIndex = 54;
            this->btnXROOTY->Text = L"x^(1/y)";
            this->btnXROOTY->UseVisualStyleBackColor = false;
            this->btnXROOTY->Click += gcnew System::EventHandler(this, &MainWindow::btnXROOTY_Click);
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
            this->btnTAN->Location = System::Drawing::Point(485, 509);
            this->btnTAN->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnTAN->Name = L"btnTAN";
            this->btnTAN->Size = System::Drawing::Size(87, 52);
            this->btnTAN->TabIndex = 53;
            this->btnTAN->Text = L"tan";
            this->btnTAN->UseVisualStyleBackColor = false;
            this->btnTAN->Click += gcnew System::EventHandler(this, &MainWindow::btnTAN_Click);
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
            this->btnDECIMAL->Location = System::Drawing::Point(295, 571);
            this->btnDECIMAL->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnDECIMAL->Name = L"btnDECIMAL";
            this->btnDECIMAL->Size = System::Drawing::Size(87, 52);
            this->btnDECIMAL->TabIndex = 52;
            this->btnDECIMAL->Text = L".";
            this->btnDECIMAL->UseVisualStyleBackColor = false;
            this->btnDECIMAL->Click += gcnew System::EventHandler(this, &MainWindow::btnDECIMAL_Click);
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
            this->btnPi->Location = System::Drawing::Point(200, 265);
            this->btnPi->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnPi->Name = L"btnPi";
            this->btnPi->Size = System::Drawing::Size(87, 52);
            this->btnPi->TabIndex = 51;
            this->btnPi->Text = L"pi";
            this->btnPi->UseVisualStyleBackColor = false;
            this->btnPi->Click += gcnew System::EventHandler(this, &MainWindow::btnPi_Click);
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
            this->btnClearAll->Location = System::Drawing::Point(295, 265);
            this->btnClearAll->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnClearAll->Name = L"btnClearAll";
            this->btnClearAll->Size = System::Drawing::Size(87, 52);
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
            this->txtbSaida->Location = System::Drawing::Point(6, 115);
            this->txtbSaida->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtbSaida->Name = L"txtbSaida";
            this->txtbSaida->ReadOnly = true;
            this->txtbSaida->Size = System::Drawing::Size(566, 57);
            this->txtbSaida->TabIndex = 49;
            this->txtbSaida->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->txtbSaida->TextChanged += gcnew System::EventHandler(this, &MainWindow::txtbSaida_TextChanged);
            // 
            // titulo
            // 
            this->titulo->AutoSize = true;
            this->titulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->titulo->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->titulo->Location = System::Drawing::Point(18, 14);
            this->titulo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->titulo->Name = L"titulo";
            this->titulo->Size = System::Drawing::Size(142, 29);
            this->titulo->TabIndex = 87;
            this->titulo->Text = L"Calculadora";
            // 
            // MainWindow
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
                static_cast<System::Int32>(static_cast<System::Byte>(44)));
            this->ClientSize = System::Drawing::Size(582, 632);
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
        equacao->InserirDigito("0");
        this->txtbSaida->Text += "0";    
    }

}
private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->txtbSaida->Text == "0") {
        equacao->InserirDigito("1");
        this->txtbSaida->Text = "1";
    }
    else {
        equacao->InserirDigito("1");
        this->txtbSaida->Text += "1";
    }
}
private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->txtbSaida->Text == "0") {
        equacao->InserirDigito("2");
        this->txtbSaida->Text = "2";
    }
    else {
        equacao->InserirDigito("2");
        this->txtbSaida->Text += "2";
    }
}
private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->txtbSaida->Text == "0") {
        equacao->InserirDigito("3");
        this->txtbSaida->Text = "3";
    }
    else {
        equacao->InserirDigito("3");
        this->txtbSaida->Text += "3";
    }
}
private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->txtbSaida->Text == "0") {
        equacao->InserirDigito("4");
        this->txtbSaida->Text = "4";
    }
    else {
        equacao->InserirDigito("4");
        this->txtbSaida->Text += "4";
    }
}
private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->txtbSaida->Text == "0") {
        equacao->InserirDigito("5");
        this->txtbSaida->Text = "5";
    }
    else {
        equacao->InserirDigito("5");
        this->txtbSaida->Text += "5";
    }
}
private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->txtbSaida->Text == "0") {
        equacao->InserirDigito("6");
        this->txtbSaida->Text = "6";
    }
    else {
        equacao->InserirDigito("6");
        this->txtbSaida->Text += "6";
    }
}
private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->txtbSaida->Text == "0") {
        equacao->InserirDigito("7");
        this->txtbSaida->Text = "7";
    }
    else {
        equacao->InserirDigito("7");
        this->txtbSaida->Text += "7";
    }
}
private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->txtbSaida->Text == "0") {
        equacao->InserirDigito("8");
        this->txtbSaida->Text = "8";
    }
    else {
        equacao->InserirDigito("8");
        this->txtbSaida->Text += "8";
    }
}
private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->txtbSaida->Text == "0") {
        equacao->InserirDigito("9");
        this->txtbSaida->Text = "9";
    }
    else {
        equacao->InserirDigito("9");
        this->txtbSaida->Text += "9";
    }
}
private: System::Void btnDECIMAL_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->txtbSaida->Text == "0") {
        equacao->InserirDigito("0");
        equacao->InserirDigito(".");
        this->txtbSaida->Text = "0.";
    }
    else {
        equacao->InserirDigito(".");
        this->txtbSaida->Text += ".";
    }

}
private: System::Void btnPi_Click(System::Object^ sender, System::EventArgs^ e) {
   
        equacao->InserirDigito(to_string(_pi));
        this->txtbSaida->Text += _pi;   
}
    // botoes com funcoes de interface

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    Application::Exit();
}
private: System::Void btnRESULTADO_Click(System::Object^ sender, System::EventArgs^ e) {
    bool aux;
    if (this->domainUpDown1->Text == "Graus") aux = true;
    else aux = false;
    this->lbHistorico->Text += this->txtbSaida->Text;
    this->txtbSaida->Text = equacao->Resultado(aux);
}
private: System::Void boxInverter_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (this->boxInverter->Checked) {
        this->btnSIN->Text = "arcsin";
        this->btnCOS->Text = "arccos";
        this->btnTAN->Text = "arctg";
    }
    else {
        this->btnSIN->Text = "sen";
        this->btnCOS->Text = "cos";
        this->btnTAN->Text = "tan";
    }
}

private: System::Void btnClearAll_Click(System::Object^ sender, System::EventArgs^ e) {
    this->txtbSaida->Text = "";
    this->lbHistorico->Text = "";
    equacao->limpar();
    
}
private: System::Void btnBackSpace_Click(System::Object^ sender, System::EventArgs^ e) {
    this->txtbSaida->Text = "";
    this->lbHistorico->Text = "";
    equacao->limpar();
}

       //operadores

private: System::Void btnSINAL_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->txtbSaida->Text == "0") {
        equacao->InserirDigito("~");
        this->txtbSaida->Text = "(-";
    }
    else {
        equacao->InserirDigito("~");
        this->txtbSaida->Text += "(-";
    }
}
private: System::Void btnABP_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->txtbSaida->Text == "0") {
        equacao->InserirDigito("(");
        this->txtbSaida->Text = "(";
    }
    else {
        equacao->InserirDigito("(");
        this->txtbSaida->Text += "(";
    }
}
private: System::Void btnFCP_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->txtbSaida->Text == "0") {
        equacao->InserirDigito(")");
        this->txtbSaida->Text = ")";
        this->lbHistorico->Text += this->txtbSaida->Text;
        this->txtbSaida->Text =""; 
    }
    else {
        equacao->InserirDigito(")");
        this->txtbSaida->Text += ")";
        this->lbHistorico->Text += this->txtbSaida->Text;
        this->txtbSaida->Text = "";
    }
}
private: System::Void btnDIV_Click(System::Object^ sender, System::EventArgs^ e) {
    equacao->InserirDigito("/");
    this->txtbSaida->Text += "/";
    this->lbHistorico->Text += this->txtbSaida->Text;
    this->txtbSaida->Text = "";
}
private: System::Void btnMUL_Click(System::Object^ sender, System::EventArgs^ e) {
    equacao->InserirDigito("*");
    this->txtbSaida->Text += "*";
    this->lbHistorico->Text += this->txtbSaida->Text;
    this->txtbSaida->Text = "";
}
private: System::Void btnSUB_Click(System::Object^ sender, System::EventArgs^ e) {
    equacao->InserirDigito("-");
    this->txtbSaida->Text += "-";
    this->lbHistorico->Text += this->txtbSaida->Text;
    this->txtbSaida->Text = "";
}
private: System::Void btnSOM_Click(System::Object^ sender, System::EventArgs^ e) {
    equacao->InserirDigito("+");
    this->txtbSaida->Text += "+";
    this->lbHistorico->Text += this->txtbSaida->Text;
    this->txtbSaida->Text = "";
}
private: System::Void btnFAT_Click(System::Object^ sender, System::EventArgs^ e) {
    equacao->InserirDigito("!");
    this->txtbSaida->Text += "!";
}
private: System::Void btnXPOWY_Click(System::Object^ sender, System::EventArgs^ e) {
    equacao->InserirDigito("^");
    this->txtbSaida->Text += "^";
}
private: System::Void btnXPOW2_Click(System::Object^ sender, System::EventArgs^ e) {
    equacao->InserirDigito("^");
    equacao->InserirDigito("2");
    this->txtbSaida->Text += "^2";
    this->lbHistorico->Text += this->txtbSaida->Text;
    this->txtbSaida->Text = "";
}
private: System::Void btnEPOWX_Click(System::Object^ sender, System::EventArgs^ e) {
    equacao->InserirDigito("(");
    equacao->InserirDigito(to_string(_euler));
    equacao->InserirDigito("^");
    this->txtbSaida->Text += ("("+_euler + "^");
}
private: System::Void btnSQRTX_Click(System::Object^ sender, System::EventArgs^ e) {
    equacao->InserirDigito("s");
    this->txtbSaida->Text += "^(1/2)";
    this->lbHistorico->Text += this->txtbSaida->Text;
    this->txtbSaida->Text = "";
}
private: System::Void btnXROOTY_Click(System::Object^ sender, System::EventArgs^ e) {
    equacao->InserirDigito("n");
    equacao->InserirDigito("(");
    this->txtbSaida->Text += "^(1/";

}

private: System::Void txtbSaida_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn1DIVX_Click(System::Object^ sender, System::EventArgs^ e) { 
    equacao->InserirDigito("(");
    equacao->InserirDigito("1");
    equacao->InserirDigito("/");
    this->txtbSaida->Text += "(1/"; 
}
private: System::Void btnLog_Click(System::Object^ sender, System::EventArgs^ e) {
    
    equacao->InserirDigito("10");
    equacao->InserirDigito("l");
    equacao->InserirDigito("(");
    this->txtbSaida->Text += "log(";
}
private: System::Void btnLn_Click(System::Object^ sender, System::EventArgs^ e) {
    equacao->InserirDigito(to_string(_euler));
    equacao->InserirDigito("l");
    equacao->InserirDigito("(");
    this->txtbSaida->Text += "ln(";
}
private: System::Void btnSIN_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->btnSIN->Text == "sen")
    {
        equacao->InserirDigito("z");
        equacao->InserirDigito("(");
        this->txtbSaida->Text += "sen(";
    }
    else
    {
        equacao->InserirDigito("a");
        equacao->InserirDigito("(");
        this->txtbSaida->Text += "arcsen(";
    }
}
private: System::Void btnCOS_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->btnCOS->Text == "cos")
    {
        equacao->InserirDigito("c");
        equacao->InserirDigito("(");
        this->txtbSaida->Text += "cos(";
    }
    else
    {
        equacao->InserirDigito("w");
        equacao->InserirDigito("(");
        this->txtbSaida->Text += "arcos(";
    }
}

private: System::Void btnTAN_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->btnTAN->Text == "tan")
    {
        equacao->InserirDigito("x");
        equacao->InserirDigito("(");
        this->txtbSaida->Text += "tan(";
    }
    else
    {
        equacao->InserirDigito("d");
        equacao->InserirDigito("(");
        this->txtbSaida->Text += "arctg(";
    }

}
private: System::Void domainUpDown1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {
}

};
}
