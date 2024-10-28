package com.r2007;

import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class ZhuceServlet
 */
@WebServlet("/ZhuceServlet")
public class ZhuceServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.getWriter().append("Served at: ").append(request.getContextPath());
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		//ע�����Ϣ�ύ��doPost���ˣ���������ֻ���� doPost��������
		//1.����������룬����ȡҳ�洫�ݹ���������
		response.setContentType("text/html;charset=UTF-8");
		String userName = request.getParameter("userName");
		String userPwd = request.getParameter("userPwd");
		String nickName = request.getParameter("nickName");
		String age = request.getParameter("age");
		
		//�û������ǳƽ�����������Ľ��
		userName = new String(userName.getBytes("ISO-8859-1"), "UTF-8");
		nickName = new String(nickName.getBytes("ISO-8859-1"), "UTF-8");
		//��һ��ȥ���ݿ����
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
			ps.setString(1, userName);
			ps.setString(2, userPwd);
			ps.setString(3, nickName);
			ps.setString(4, age);
			//5.ִ��sql���
			int count = ps.executeUpdate();
			//6.�����ؽ��
			if(count>0) {
				response.getWriter().append("ע��ɹ��� <a href='denglu.jsp'>��ȥ��¼</a>");
				System.out.println("ִ�в���ɹ�");
			}else {
				response.getWriter().append("ע��ʧ�ܣ����ٴγ��ԣ�");
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
