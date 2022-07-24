#pragma once
#include <string>

#include "Equacao.h"

namespace AssemblyCalculator {

	using namespace System;
	using namespace std;
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
			equacao = new Equacao;
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
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::TextBox^ txtB1;
	protected:


	protected:

	protected:

	private:
		Equacao* equacao;
	private: System::Windows::Forms::Button^ btnEquacao;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnPolonesa;
	private: System::Windows::Forms::Label^ lbWarning;
	private: System::Windows::Forms::Label^ lbEquacao;
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
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->txtB1 = (gcnew System::Windows::Forms::TextBox());
			this->btnEquacao = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnPolonesa = (gcnew System::Windows::Forms::Button());
			this->lbWarning = (gcnew System::Windows::Forms::Label());
			this->lbEquacao = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(12, 101);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(187, 57);
			this->btnOK->TabIndex = 0;
			this->btnOK->Text = L"Inserir";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &MainWindow::btnOK_Click);
			// 
			// txtB1
			// 
			this->txtB1->Location = System::Drawing::Point(12, 58);
			this->txtB1->Name = L"txtB1";
			this->txtB1->Size = System::Drawing::Size(656, 26);
			this->txtB1->TabIndex = 1;
			// 
			// btnEquacao
			// 
			this->btnEquacao->Location = System::Drawing::Point(12, 164);
			this->btnEquacao->Name = L"btnEquacao";
			this->btnEquacao->Size = System::Drawing::Size(187, 57);
			this->btnEquacao->TabIndex = 2;
			this->btnEquacao->Text = L"Mostra Equacao";
			this->btnEquacao->UseVisualStyleBackColor = true;
			this->btnEquacao->UseWaitCursor = true;
			this->btnEquacao->Click += gcnew System::EventHandler(this, &MainWindow::btnEquacao_Click);
			// 
			// btnClear
			// 
			this->btnClear->Location = System::Drawing::Point(205, 101);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(187, 57);
			this->btnClear->TabIndex = 3;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MainWindow::btnClear_Click);
			// 
			// btnPolonesa
			// 
			this->btnPolonesa->Location = System::Drawing::Point(205, 164);
			this->btnPolonesa->Name = L"btnPolonesa";
			this->btnPolonesa->Size = System::Drawing::Size(187, 57);
			this->btnPolonesa->TabIndex = 4;
			this->btnPolonesa->Text = L"Mostrar Polonesa";
			this->btnPolonesa->UseVisualStyleBackColor = true;
			// 
			// lbWarning
			// 
			this->lbWarning->AutoSize = true;
			this->lbWarning->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbWarning->Location = System::Drawing::Point(500, 115);
			this->lbWarning->Name = L"lbWarning";
			this->lbWarning->Size = System::Drawing::Size(96, 25);
			this->lbWarning->TabIndex = 5;
			this->lbWarning->Text = L"Warnings";
			this->lbWarning->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lbEquacao
			// 
			this->lbEquacao->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lbEquacao->AutoSize = true;
			this->lbEquacao->Location = System::Drawing::Point(12, 35);
			this->lbEquacao->MaximumSize = System::Drawing::Size(0, 200);
			this->lbEquacao->Name = L"lbEquacao";
			this->lbEquacao->Size = System::Drawing::Size(18, 20);
			this->lbEquacao->TabIndex = 6;
			this->lbEquacao->Text = L"0";
			this->lbEquacao->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(680, 409);
			this->Controls->Add(this->lbEquacao);
			this->Controls->Add(this->lbWarning);
			this->Controls->Add(this->btnPolonesa);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnEquacao);
			this->Controls->Add(this->txtB1);
			this->Controls->Add(this->btnOK);
			this->Name = L"MainWindow";
			this->Text = L"MainWindow";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lbWarning->Text = equacao->InserirNumero(this->txtB1->Text);
		this->lbEquacao->Text = equacao->MostrarEquacao();
		this->txtB1->Text = "";


	}
	private: System::Void btnEquacao_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtB1->Text = equacao->MostrarEquacao();
		this->lbWarning->Text = "";
	}
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	equacao->limpar();
	this->lbWarning->Text = "Limpa";
	this->txtB1->Text = "";
	this->lbEquacao->Text = "";
}
};
}
