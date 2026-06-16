using DAL;
using MySql.Data.MySqlClient;
using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BLL2
{
    public class UserManagerPlus
    {
        public static DataTable GetUser()
        {
            string sql = @"select * from user";
            DataTable dt = DBOper.GetDataTable(sql);
            return dt;
        }
        public static bool UpdateUser(string newName, string newPwd, string newRole, string oldName)
        {
            // SQL: UPDATE user SET name=@n1, pwd=@p1, role=@r1 WHERE name=@n2
            string sql = "UPDATE user SET username=@n1, userpwd=@p1, role=@r1 WHERE userName=@n2";
            MySqlParameter[] ps = {
        new MySqlParameter("@n1", newName),
        new MySqlParameter("@p1", newPwd),
        new MySqlParameter("@r1", newRole),
        new MySqlParameter("@n2", oldName) // 关键：用旧名字去定位数据库里的那一行
    };
            return DBOper.ExecuteCommand(sql, ps) > 0;
        }
        
        public static bool DeleteUser(string nameToDelete)
        {
            // 1. 编写 SQL 语句
            string sql = "DELETE FROM user WHERE username=@n";

            // 2. 准备参数
            var parameters = new MySqlParameter[]
            {
                new MySqlParameter("@n", nameToDelete)
            };

            // 3. 调用 DAL 层执行
            int result = DBOper.ExecuteCommand(sql, parameters);

            // 4. 判断结果
            return result > 0;
        }

    }
}
