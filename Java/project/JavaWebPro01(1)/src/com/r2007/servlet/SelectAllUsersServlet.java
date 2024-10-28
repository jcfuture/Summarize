package com.r2007.servlet;

import java.io.IOException;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import com.r2007.bean.Users;
import com.r2007.util.DBHelper;
/**
 * Servlet implementation class SelectAllUsersServlet
 */
@WebServlet("/SelectAllUsersServlet")
public class SelectAllUsersServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;

	/**
	 * �ڴ˴������ǵ�  get�����߼�
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		//�����������Ҫ ���ݿ��е����ݵ�  ��������ֱ���������ݿ⼴��
		Connection con = DBHelper.getCon();
		PreparedStatement ps = null;
		ResultSet rs = null;
		String sql = "select * from users";
		ArrayList<Users> users = new ArrayList<>();
		try {
			ps = con.prepareStatement(sql);
			rs = ps.executeQuery();
			while(rs.next()) {
				//����ֱ������� ����Ҫ������ �� ����������� �ŵ������У����ݹ�ȥ
				//ÿ�ܲ����һ�����ݵ�ʱ�����Ǿ���һ���µĶ��󣬾���Ҫ��ŵ�������ȥ
				Users user = new Users();
				user.setId(rs.getInt("id"));
				user.setUserName(rs.getString("userName"));
				user.setUserPwd(rs.getString("userPwd"));
				user.setNickName(rs.getString("nickName"));
				user.setAge(rs.getInt("age"));
				//��ŵ� �����к�����ͨ���ŵ� �����У����������� ���ݣ� ��������
				users.add(user);
			}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}finally {
			DBHelper.close(con, ps, rs);
		}
		//�������ݵ� չʾ��jspҳ����
//		������Ҫ�������ݵ����ã����õ���Ӧ���������У�
		HttpSession session = request.getSession();
		//�����ݴ�ŵ�session��������
		session.setAttribute("users", users);
		//����ҳ�����ת
		response.sendRedirect("usersShow.jsp");
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
