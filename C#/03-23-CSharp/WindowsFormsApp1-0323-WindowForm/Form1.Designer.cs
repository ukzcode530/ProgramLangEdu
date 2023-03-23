
namespace WindowsFormsApp1_0323_WindowForm
{
    partial class btnmulti
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.textnum1 = new System.Windows.Forms.TextBox();
            this.textum2 = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.Txtresult = new System.Windows.Forms.TextBox();
            this.btnplus = new System.Windows.Forms.Button();
            this.btncelar = new System.Windows.Forms.Button();
            this.btnmin = new System.Windows.Forms.Button();
            this.btnmutiply = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("돋움", 19.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label1.Location = new System.Drawing.Point(54, 75);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(147, 33);
            this.label1.TabIndex = 0;
            this.label1.Text = "첫번째수";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("돋움", 19.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label2.Location = new System.Drawing.Point(54, 141);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(147, 33);
            this.label2.TabIndex = 0;
            this.label2.Text = "두번째수";
            this.label2.Click += new System.EventHandler(this.label2_Click);
            // 
            // textnum1
            // 
            this.textnum1.Location = new System.Drawing.Point(204, 75);
            this.textnum1.Name = "textnum1";
            this.textnum1.Size = new System.Drawing.Size(246, 25);
            this.textnum1.TabIndex = 1;
            this.textnum1.TextChanged += new System.EventHandler(this.textnum1_TextChanged);
            // 
            // textum2
            // 
            this.textum2.Location = new System.Drawing.Point(204, 141);
            this.textum2.Name = "textum2";
            this.textum2.Size = new System.Drawing.Size(246, 25);
            this.textum2.TabIndex = 1;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("돋움", 36F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label3.Location = new System.Drawing.Point(50, 199);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(60, 60);
            this.label3.TabIndex = 2;
            this.label3.Text = "*";
            this.label3.Click += new System.EventHandler(this.label3_Click);
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("돋움체", 16.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label4.Location = new System.Drawing.Point(253, 215);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(432, 28);
            this.label4.TabIndex = 3;
            this.label4.Text = "----------------------------";
            this.label4.Click += new System.EventHandler(this.label4_Click);
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("굴림", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label5.Location = new System.Drawing.Point(132, 284);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(39, 15);
            this.label5.TabIndex = 4;
            this.label5.Text = "결과";
            // 
            // Txtresult
            // 
            this.Txtresult.Location = new System.Drawing.Point(204, 281);
            this.Txtresult.Name = "Txtresult";
            this.Txtresult.Size = new System.Drawing.Size(246, 25);
            this.Txtresult.TabIndex = 5;
            // 
            // btnplus
            // 
            this.btnplus.Font = new System.Drawing.Font("돋움", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.btnplus.Location = new System.Drawing.Point(96, 393);
            this.btnplus.Name = "btnplus";
            this.btnplus.Size = new System.Drawing.Size(75, 23);
            this.btnplus.TabIndex = 6;
            this.btnplus.Text = "+";
            this.btnplus.UseVisualStyleBackColor = true;
            this.btnplus.Click += new System.EventHandler(this.btnplus_Click);
            // 
            // btncelar
            // 
            this.btncelar.Font = new System.Drawing.Font("돋움", 19.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.btncelar.Location = new System.Drawing.Point(500, 376);
            this.btncelar.Name = "btncelar";
            this.btncelar.Size = new System.Drawing.Size(165, 45);
            this.btncelar.TabIndex = 7;
            this.btncelar.Text = "clear";
            this.btncelar.UseVisualStyleBackColor = true;
            this.btncelar.Click += new System.EventHandler(this.btncelar_Click);
            // 
            // btnmin
            // 
            this.btnmin.Font = new System.Drawing.Font("돋움", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.btnmin.Location = new System.Drawing.Point(204, 393);
            this.btnmin.Name = "btnmin";
            this.btnmin.Size = new System.Drawing.Size(75, 23);
            this.btnmin.TabIndex = 8;
            this.btnmin.Text = "-";
            this.btnmin.UseVisualStyleBackColor = true;
            this.btnmin.Click += new System.EventHandler(this.btnmin_Click);
            // 
            // btnmutiply
            // 
            this.btnmutiply.Font = new System.Drawing.Font("돋움", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.btnmutiply.Location = new System.Drawing.Point(301, 393);
            this.btnmutiply.Name = "btnmutiply";
            this.btnmutiply.Size = new System.Drawing.Size(75, 23);
            this.btnmutiply.TabIndex = 9;
            this.btnmutiply.Text = "*";
            this.btnmutiply.UseVisualStyleBackColor = true;
            this.btnmutiply.Click += new System.EventHandler(this.button2_Click);
            // 
            // btnmulti
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btnmutiply);
            this.Controls.Add(this.btnmin);
            this.Controls.Add(this.btncelar);
            this.Controls.Add(this.btnplus);
            this.Controls.Add(this.Txtresult);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.textum2);
            this.Controls.Add(this.textnum1);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Name = "btnmulti";
            this.Text = "결과";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox textnum1;
        private System.Windows.Forms.TextBox textum2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox Txtresult;
        private System.Windows.Forms.Button btnplus;
        private System.Windows.Forms.Button btncelar;
        private System.Windows.Forms.Button btnmin;
        private System.Windows.Forms.Button btnmutiply;
    }
}

