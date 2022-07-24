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
	private: System::Windows::Forms::TextBox^ saida;
	protected:


	private: System::Windows::Forms::Button^ button2;



	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::CheckBox^ checkBox1;



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
			this->saida = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// saida
			// 
			this->saida->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->saida->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->saida->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->saida->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->saida->Location = System::Drawing::Point(28, 45);
			this->saida->Name = L"saida";
			this->saida->ReadOnly = true;
			this->saida->Size = System::Drawing::Size(377, 38);
			this->saida->TabIndex = 0;
			this->saida->Text = L"0";
			this->saida->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->saida->TextChanged += gcnew System::EventHandler(this, &MainWindow::saida_TextChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(283, 120);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(58, 34);
			this->button2->TabIndex = 2;
			this->button2->Text = L"CE";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button5->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Location = System::Drawing::Point(219, 120);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(58, 34);
			this->button5->TabIndex = 6;
			this->button5->Text = L"π";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MainWindow::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->button6->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Location = System::Drawing::Point(219, 360);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(58, 34);
			this->button6->TabIndex = 11;
			this->button6->Text = L"0";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MainWindow::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->button7->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->Location = System::Drawing::Point(155, 360);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(58, 34);
			this->button7->TabIndex = 10;
			this->button7->Text = L"+/-";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MainWindow::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button8->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->Location = System::Drawing::Point(91, 360);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(58, 34);
			this->button8->TabIndex = 9;
			this->button8->Text = L"x^(1/y)";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MainWindow::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button9->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button9->Location = System::Drawing::Point(27, 360);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(58, 34);
			this->button9->TabIndex = 8;
			this->button9->Text = L"tan";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MainWindow::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->button10->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button10->Location = System::Drawing::Point(283, 360);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(58, 34);
			this->button10->TabIndex = 7;
			this->button10->Text = L".";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MainWindow::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button11->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button11->Location = System::Drawing::Point(219, 160);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(58, 34);
			this->button11->TabIndex = 16;
			this->button11->Text = L"log";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MainWindow::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button12->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button12->Location = System::Drawing::Point(155, 160);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(58, 34);
			this->button12->TabIndex = 15;
			this->button12->Text = L"ln";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MainWindow::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button13->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button13->Location = System::Drawing::Point(91, 160);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(58, 34);
			this->button13->TabIndex = 14;
			this->button13->Text = L"MC";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MainWindow::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button14->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button14->Location = System::Drawing::Point(27, 160);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(58, 34);
			this->button14->TabIndex = 13;
			this->button14->Text = L"MR";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MainWindow::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button15->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button15->Location = System::Drawing::Point(283, 160);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(58, 34);
			this->button15->TabIndex = 12;
			this->button15->Text = L"|x|";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MainWindow::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->button16->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button16->Location = System::Drawing::Point(219, 320);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(58, 34);
			this->button16->TabIndex = 21;
			this->button16->Text = L"2";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MainWindow::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->button17->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button17->Location = System::Drawing::Point(155, 320);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(58, 34);
			this->button17->TabIndex = 20;
			this->button17->Text = L"1";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MainWindow::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button18->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button18->Location = System::Drawing::Point(91, 320);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(58, 34);
			this->button18->TabIndex = 19;
			this->button18->Text = L"√x";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MainWindow::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button19->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button19->Location = System::Drawing::Point(27, 320);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(58, 34);
			this->button19->TabIndex = 18;
			this->button19->Text = L"cos";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MainWindow::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->button20->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button20->Location = System::Drawing::Point(283, 320);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(58, 34);
			this->button20->TabIndex = 17;
			this->button20->Text = L"3";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MainWindow::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->button21->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button21->Location = System::Drawing::Point(219, 280);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(58, 34);
			this->button21->TabIndex = 26;
			this->button21->Text = L"5";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MainWindow::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->button22->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button22->Location = System::Drawing::Point(155, 280);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(58, 34);
			this->button22->TabIndex = 25;
			this->button22->Text = L"4";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MainWindow::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button23->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button23->Location = System::Drawing::Point(91, 280);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(58, 34);
			this->button23->TabIndex = 24;
			this->button23->Text = L"x^y";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MainWindow::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button24->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button24->Location = System::Drawing::Point(27, 280);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(58, 34);
			this->button24->TabIndex = 23;
			this->button24->Text = L"sin";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MainWindow::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->button25->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button25->Location = System::Drawing::Point(283, 280);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(58, 34);
			this->button25->TabIndex = 22;
			this->button25->Text = L"6";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MainWindow::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->button26->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button26->Location = System::Drawing::Point(219, 240);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(58, 34);
			this->button26->TabIndex = 31;
			this->button26->Text = L"8";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MainWindow::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->button27->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button27->Location = System::Drawing::Point(155, 240);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(58, 34);
			this->button27->TabIndex = 30;
			this->button27->Text = L"7";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MainWindow::button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button28->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button28->Location = System::Drawing::Point(91, 240);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(58, 34);
			this->button28->TabIndex = 29;
			this->button28->Text = L"x^2";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MainWindow::button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button29->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button29->Location = System::Drawing::Point(27, 240);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(58, 34);
			this->button29->TabIndex = 28;
			this->button29->Text = L"e^x";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MainWindow::button29_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->button30->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button30->Location = System::Drawing::Point(283, 240);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(58, 34);
			this->button30->TabIndex = 27;
			this->button30->Text = L"9";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MainWindow::button30_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button31->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button31->Location = System::Drawing::Point(218, 200);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(58, 34);
			this->button31->TabIndex = 36;
			this->button31->Text = L")";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MainWindow::button31_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button32->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button32->Location = System::Drawing::Point(154, 200);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(58, 34);
			this->button32->TabIndex = 35;
			this->button32->Text = L"(";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MainWindow::button32_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button33->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button33->Location = System::Drawing::Point(90, 200);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(58, 34);
			this->button33->TabIndex = 34;
			this->button33->Text = L"MS";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &MainWindow::button33_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button34->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button34->Location = System::Drawing::Point(26, 200);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(58, 34);
			this->button34->TabIndex = 33;
			this->button34->Text = L"M+";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &MainWindow::button34_Click);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button35->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button35->Location = System::Drawing::Point(282, 200);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(58, 34);
			this->button35->TabIndex = 32;
			this->button35->Text = L"n!";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &MainWindow::button35_Click);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button36->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button36->Location = System::Drawing::Point(346, 200);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(58, 34);
			this->button36->TabIndex = 43;
			this->button36->Text = L"/";
			this->button36->UseVisualStyleBackColor = false;
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button37->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button37->Location = System::Drawing::Point(347, 240);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(58, 34);
			this->button37->TabIndex = 42;
			this->button37->Text = L"X";
			this->button37->UseVisualStyleBackColor = false;
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button38->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button38->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button38->Location = System::Drawing::Point(347, 280);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(58, 34);
			this->button38->TabIndex = 41;
			this->button38->Text = L"-";
			this->button38->UseVisualStyleBackColor = false;
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button39->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button39->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button39->Location = System::Drawing::Point(347, 320);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(58, 34);
			this->button39->TabIndex = 40;
			this->button39->Text = L"+";
			this->button39->UseVisualStyleBackColor = false;
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button40->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button40->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button40->Location = System::Drawing::Point(347, 160);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(58, 34);
			this->button40->TabIndex = 39;
			this->button40->Text = L"1/x";
			this->button40->UseVisualStyleBackColor = false;
			// 
			// button41
			// 
			this->button41->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button41->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button41->ForeColor = System::Drawing::SystemColors::GrayText;
			this->button41->Location = System::Drawing::Point(347, 360);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(58, 34);
			this->button41->TabIndex = 38;
			this->button41->Text = L"=";
			this->button41->UseVisualStyleBackColor = false;
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button42->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button42->ForeColor = System::Drawing::SystemColors::GrayText;
			this->button42->Location = System::Drawing::Point(347, 120);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(58, 34);
			this->button42->TabIndex = 37;
			this->button42->Text = L"C";
			this->button42->UseVisualStyleBackColor = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->radioButton1->Location = System::Drawing::Point(27, 128);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(63, 19);
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
			this->radioButton2->Location = System::Drawing::Point(98, 128);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(51, 19);
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
			this->checkBox1->Location = System::Drawing::Point(155, 128);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(44, 19);
			this->checkBox1->TabIndex = 46;
			this->checkBox1->Text = L"Inv";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::checkBox1_CheckedChanged);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(431, 425);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->saida);
			this->Margin = System::Windows::Forms::Padding(2);
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
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MainWindow_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void saida_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
