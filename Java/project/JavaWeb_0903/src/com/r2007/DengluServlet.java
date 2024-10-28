package com.r2007;

import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class DengluServlet
 */
@WebServlet("/DengluServlet")
public class DengluServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.getWriter().append("Served at: ").append(request.getContextPath());
	}

	/**
	 * ��¼�����ݶ��ύ�� post����  ����ֻ�������
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		//1.��ȡ��¼����Ϣ
		String userName = request.getParameter("userName");
		String userPwd = request.getParameter("userPwd");
		userName = new String(userName.getBytes("ISO-8859-1"), "UTF-8");
		//��Ӧ���������ı���
		response.setContentType("text/html;charset=UTF-8");
		//2.ȥ���ݿ��н��бȶ�  ����������
		Connection con = null;
		PreparedStatement ps = null;
		ResultSet rs = null;
		try {
			Class.forName("com.microsoft.sqlserver.jdbc.SQLServerDriver");
			con = DriverManager.getConnection("jdbc:sqlserver://127.0.0.1:1433;databaseName=R2007_01","sa", "1");
			//׼��ִ��sql
			String sql = "select * from users where userName = ? and userPwd = ?";
			ps = con.prepareStatement(sql);
			//����ֵ
			ps.setString(1, userName);
			ps.setString(2, userPwd);
			//ִ��
			rs = ps.executeQuery();
			//���������
			if(rs.next()) {
				//�����ǵ����ݿ���ע����ˣ����Բ�ѯ��������ζ�ŵ�¼�ɹ���
				String name = rs.getString("userName");
				String nickName = rs.getString("nickName");
				String age = rs.getString("age");
				response.getWriter().append("��¼�ɹ�����ӭʹ��xxxϵͳ! ���ĸ�����ϢΪ��<br>")
				.append("�û���Ϊ��").append(name).append("<br>")
				.append("�ǳ�Ϊ��").append(nickName).append("<br>")
				.append("����Ϊ��").append(age).append("<br>");
			}else {
				//�����ǵ����ݿ���û��ע��������Ե�¼����ζ��¼ʧ�ܣ�
				response.getWriter().append("��¼ʧ�ܣ��㻹û��ע��������վ�Ļ�Ա <a href='zhuce.jsp'>��ȥע�ᣡ</a>");
			}
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}finally {
			try {
				if(rs!=null)rs.close();
				if(ps!=null)ps.close();
				if(con!=null)con.close();
			} catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		
		
		
		
		
	}

}
