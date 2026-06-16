using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Forms;
namespace WindowsFormsApp1
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void Form2_Load(object sender, EventArgs e)
        { }
            private void button1_Click(object sender, EventArgs e)
        {
            
        }

        private void button2_Click(object sender, EventArgs e)
        {
            
            FolderBrowserDialog dialog = new FolderBrowserDialog();
            
            DialogResult re = dialog.ShowDialog();
            
            if (re == DialogResult.OK)
            {
                
                textBox2.Text = dialog.SelectedPath;
                string[] items = Directory.GetDirectories(textBox2.Text);
                
                for (int i = 0; i < items.Length; i++)
                {
                    listBox1.Items.Add(items[i]);
                }
            }
        }
    }
    
}
