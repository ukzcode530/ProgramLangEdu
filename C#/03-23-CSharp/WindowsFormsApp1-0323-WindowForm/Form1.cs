using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1_0323_WindowForm
{
    public partial class btnmulti : Form
    {
        public btnmulti()
        {
            InitializeComponent();

            Clear();
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }


        void Clear()
        {
            this.textnum1.Text = "";
            this.textum2.Text = "";
            this.Txtresult.Text = "";
            this.label3.Text = "Ready";
        }


        private void btncelar_Click(object sender, EventArgs e)
        {
            Clear();
        }

        private void btnplus_Click(object sender, EventArgs e)
        {
            double num1 = double.Parse(this.textnum1.Text);
            double num2 = double.Parse(this.textum2.Text);
            double num = num1 + num2;
            this.Txtresult.Text = num.ToString();
            this.label3.Text = "+";
        }

        private void label4_Click(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            double num1 = double.Parse(this.textnum1.Text);
            double num2 = double.Parse(this.textum2.Text);
            double num = num1 * num2;
            this.Txtresult.Text = num.ToString();
            this.label3.Text = "*";
        }

        private void btnmin_Click(object sender, EventArgs e)
        {
            double num1 = double.Parse(this.textnum1.Text);
            double num2 = double.Parse(this.textum2.Text);
            double num = num1 - num2;
            this.Txtresult.Text = num.ToString();
            this.label3.Text = "-";
        }

        private void textnum1_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
