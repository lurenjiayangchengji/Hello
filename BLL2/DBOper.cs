using MySql.Data.MySqlClient;
using System;
using System.Collections.Generic;
using System.Configuration;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DAL
{
    public class DBOper
    {// 连接对象只读属性
        private static MySqlConnection conn;
        public static MySqlConnection Connection
        {
            get
            {
                if (conn == null)
                {
                    string connStr = ConfigurationManager.ConnectionStrings["HotelConStr"].ConnectionString;
                    conn = new MySqlConnection(connStr);
                    conn.Open();
                }
                else if (conn.State == ConnectionState.Closed)
                {
                    conn.Open();
                }
                else if (conn.State == ConnectionState.Broken)
                {
                    conn.Open();
                }
                return conn;
            }
        }

        // 3. DBOper类中的ExecuteCommand()方法
        public static int ExecuteCommand(string sql)
        {
            MySqlCommand cmd = new MySqlCommand(sql, Connection);
            return cmd.ExecuteNonQuery();
        }

        public static int ExecuteCommand(string sql, params MySqlParameter[] values)
        {
            MySqlCommand cmd = new MySqlCommand(sql, Connection);
            cmd.Parameters.AddRange(values);
            return cmd.ExecuteNonQuery();
        }

        // 4. DBOper类中的GetReader()方法
        public static MySqlDataReader GetReader(string sql)
        {
            MySqlCommand cmd = new MySqlCommand(sql, Connection);
            return cmd.ExecuteReader();
        }

        public static MySqlDataReader GetReader(string sql, params MySqlParameter[] values)
        {
            MySqlCommand cmd = new MySqlCommand(sql, Connection);
            cmd.Parameters.AddRange(values);
            return cmd.ExecuteReader();
        }

        // 5. DBOper类中的GetDataTable()方法
        public static DataTable GetDataTable(string sql)
        {
            MySqlDataAdapter da = new MySqlDataAdapter(sql, Connection);
            DataSet ds = new DataSet();
            da.Fill(ds);
            return ds.Tables[0];
        }

        public static DataTable GetDataTable(string sql, params MySqlParameter[] values)
        {
            MySqlCommand cmd = new MySqlCommand(sql, Connection);
            cmd.Parameters.AddRange(values);
            MySqlDataAdapter da = new MySqlDataAdapter(cmd);
            DataSet ds = new DataSet();
            da.Fill(ds);
            return ds.Tables[0];
        }
    }
}
