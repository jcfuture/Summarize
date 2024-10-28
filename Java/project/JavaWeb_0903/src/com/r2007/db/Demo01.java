package com.r2007.db;
import java.sql.*;

public class Demo01 {

	
	public static void main(String[] args) {
		Connection con = null;
		PreparedStatement ps = null;
		try {
			//1.��������
			Class.forName("com.microsoft.sqlserver.jdbc.SQLServerDriver");
			//2.��������
			con = DriverManager.getConnection("jdbc:sqlserver://127.0.0.1:1433;databaseName=R2007_01",
					"sa", "1");
			//3.׼��sql���
			String sql = "insert into users values (?,?,?,?)";
			//4.������������
			ps = con.prepareStatement(sql);
			//4.2���ò���
			ps.setString(1, "ww");
			ps.setString(2, "qq");
			ps.setString(3, "ee");
			ps.setString(4, "22");
			//5.ִ��sql���
			int count = ps.executeUpdate();
			//6.�����ؽ��
			if(count>0) {
				System.out.println("ִ�в���ɹ�");
			}else {
				System.out.println("ִ�в���ʧ��");
			}
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}finally {
			//7.�ر�����
			try {
				if(ps!=null) ps.close();
				if(con!=null) con.close();
			} catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		
	}
	
	
}
