package com.r2007.test;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import com.r2007.util.DBHelper;

public class Demo01 {
	
	public static void main(String[] args) {
		//≤È—Ø
		Connection con = DBHelper.getCon();
		PreparedStatement ps = null;
		ResultSet rs = null;
		String sql = "select * from users";
		try {
			ps = con.prepareStatement(sql);
			rs = ps.executeQuery();
			while(rs.next()) {
				System.out.println( rs.getString(1) );
				System.out.println( rs.getString(2) );
				System.out.println( rs.getString(3) );
				System.out.println( rs.getString(4) );
				System.out.println( rs.getString(5) );
				System.out.println();
			}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}finally {
			DBHelper.close(con, ps, rs);
		}
		
	}

}
