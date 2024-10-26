#pragma once

namespace Menu {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelTop;
	private: System::Windows::Forms::Button^ btn_Cerrar;






































































































































































private: System::Windows::Forms::Label^ label1;


















private: System::Windows::Forms::PictureBox^ pictureBox19;





private: System::Windows::Forms::PictureBox^ pictureBox25;
private: System::Windows::Forms::PictureBox^ pictureBox26;
private: System::Windows::Forms::PictureBox^ pictureBox27;












private: System::Windows::Forms::Label^ label2;






private: System::Windows::Forms::PictureBox^ pictureBox43;
































private: System::Windows::Forms::PictureBox^ pictureBox3;




private: System::Windows::Forms::PictureBox^ pictureBox8;


































private: System::Windows::Forms::PictureBox^ pictureBox42;
























private: System::Windows::Forms::PictureBox^ pictureBox70;
private: System::Windows::Forms::Button^ btn_salir;
private: System::Windows::Forms::Button^ btn_creditos;
private: System::Windows::Forms::Button^ button1;





















































	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panelTop = (gcnew System::Windows::Forms::Panel());
			this->btn_Cerrar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox70 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_salir = (gcnew System::Windows::Forms::Button());
			this->btn_creditos = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panelTop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->BeginInit();
			this->SuspendLayout();
			// 
			// panelTop
			// 
			this->panelTop->BackColor = System::Drawing::Color::LavenderBlush;
			this->panelTop->Controls->Add(this->btn_Cerrar);
			this->panelTop->Location = System::Drawing::Point(0, 0);
			this->panelTop->Name = L"panelTop";
			this->panelTop->Size = System::Drawing::Size(936, 35);
			this->panelTop->TabIndex = 0;
			// 
			// btn_Cerrar
			// 
			this->btn_Cerrar->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_Cerrar->Font = (gcnew System::Drawing::Font(L"NSimSun", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Cerrar->ForeColor = System::Drawing::Color::IndianRed;
			this->btn_Cerrar->Location = System::Drawing::Point(865, 3);
			this->btn_Cerrar->Name = L"btn_Cerrar";
			this->btn_Cerrar->Size = System::Drawing::Size(51, 28);
			this->btn_Cerrar->TabIndex = 0;
			this->btn_Cerrar->Text = L"X";
			this->btn_Cerrar->UseVisualStyleBackColor = false;
			this->btn_Cerrar->Click += gcnew System::EventHandler(this, &MyForm::btn_Cerrar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Saint Carell PERSONAL", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label1->Location = System::Drawing::Point(457, 140);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(429, 96);
			this->label1->TabIndex = 340;
			this->label1->Text = L"SpeedWay";
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackColor = System::Drawing::Color::Goldenrod;
			this->pictureBox19->Location = System::Drawing::Point(76, 678);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(39, 32);
			this->pictureBox19->TabIndex = 378;
			this->pictureBox19->TabStop = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackColor = System::Drawing::Color::Goldenrod;
			this->pictureBox25->Location = System::Drawing::Point(0, 678);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(39, 32);
			this->pictureBox25->TabIndex = 372;
			this->pictureBox25->TabStop = false;
			// 
			// pictureBox26
			// 
			this->pictureBox26->BackColor = System::Drawing::Color::Goldenrod;
			this->pictureBox26->Location = System::Drawing::Point(38, 651);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(39, 30);
			this->pictureBox26->TabIndex = 371;
			this->pictureBox26->TabStop = false;
			// 
			// pictureBox27
			// 
			this->pictureBox27->BackColor = System::Drawing::Color::Goldenrod;
			this->pictureBox27->Location = System::Drawing::Point(38, 708);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(39, 31);
			this->pictureBox27->TabIndex = 370;
			this->pictureBox27->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Saint Carell PERSONAL", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Bisque;
			this->label2->Location = System::Drawing::Point(629, 221);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(269, 96);
			this->label2->TabIndex = 380;
			this->label2->Text = L"Racer";
			// 
			// pictureBox43
			// 
			this->pictureBox43->BackColor = System::Drawing::Color::Goldenrod;
			this->pictureBox43->Location = System::Drawing::Point(868, 651);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(39, 30);
			this->pictureBox43->TabIndex = 407;
			this->pictureBox43->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Goldenrod;
			this->pictureBox3->Location = System::Drawing::Point(81, 619);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(39, 32);
			this->pictureBox3->TabIndex = 447;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Goldenrod;
			this->pictureBox8->Location = System::Drawing::Point(5, 619);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(39, 32);
			this->pictureBox8->TabIndex = 442;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox42
			// 
			this->pictureBox42->BackColor = System::Drawing::Color::LemonChiffon;
			this->pictureBox42->Location = System::Drawing::Point(870, 593);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(39, 29);
			this->pictureBox42->TabIndex = 474;
			this->pictureBox42->TabStop = false;
			// 
			// pictureBox70
			// 
			this->pictureBox70->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox70->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox70.Image")));
			this->pictureBox70->Location = System::Drawing::Point(160, 291);
			this->pictureBox70->Name = L"pictureBox70";
			this->pictureBox70->Size = System::Drawing::Size(552, 355);
			this->pictureBox70->TabIndex = 414;
			this->pictureBox70->TabStop = false;
			// 
			// btn_salir
			// 
			this->btn_salir->BackColor = System::Drawing::Color::Black;
			this->btn_salir->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_salir->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_salir->ForeColor = System::Drawing::Color::MistyRose;
			this->btn_salir->Location = System::Drawing::Point(645, 463);
			this->btn_salir->Name = L"btn_salir";
			this->btn_salir->Size = System::Drawing::Size(187, 54);
			this->btn_salir->TabIndex = 477;
			this->btn_salir->Text = L"SALIR";
			this->btn_salir->UseVisualStyleBackColor = false;
			// 
			// btn_creditos
			// 
			this->btn_creditos->BackColor = System::Drawing::Color::Black;
			this->btn_creditos->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_creditos->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_creditos->ForeColor = System::Drawing::Color::MistyRose;
			this->btn_creditos->Location = System::Drawing::Point(645, 403);
			this->btn_creditos->Name = L"btn_creditos";
			this->btn_creditos->Size = System::Drawing::Size(187, 54);
			this->btn_creditos->TabIndex = 476;
			this->btn_creditos->Text = L"CREDITOS";
			this->btn_creditos->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::MistyRose;
			this->button1->Location = System::Drawing::Point(645, 343);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(187, 54);
			this->button1->TabIndex = 478;
			this->button1->Text = L"JUGAR";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(928, 578);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_salir);
			this->Controls->Add(this->btn_creditos);
			this->Controls->Add(this->panelTop);
			this->Controls->Add(this->pictureBox42);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->pictureBox43);
			this->Controls->Add(this->pictureBox70);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panelTop->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_Cerrar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
