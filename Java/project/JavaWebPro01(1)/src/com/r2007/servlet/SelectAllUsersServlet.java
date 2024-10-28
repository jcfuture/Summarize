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
	 * 在此处理我们的  get请求逻辑
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		//请求进来就是要 数据库中的数据的  所以我们直接请求数据库即可
		Connection con = DBHelper.getCon();
		PreparedStatement ps = null;
		ResultSet rs = null;
		String sql = "select * from users";
		ArrayList<Users> users = new ArrayList<>();
		try {
			ps = con.prepareStatement(sql);
			rs = ps.executeQuery();
			while(rs.next()) {
				//不能直接输出！ 我们要让数据 是 浏览器看到， 放到容器中，传递过去
				//每能查出来一条数据的时候，我们就是一个新的对象，就需要存放到对象中去
				Users user = new Users();
				user.setId(rs.getInt("id"));
				user.setUserName(rs.getString("userName"));
				user.setUserPwd(rs.getString("userPwd"));
				user.setNickName(rs.getString("nickName"));
				user.setAge(rs.getInt("age"));
				//存放到 对象中后，我们通常放到 容器中，让容器传递 数据， 在作用域
				users.add(user);
			}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}finally {
			DBHelper.close(con, ps, rs);
		}
		//传递数据到 展示的jsp页面上
//		首先需要进行数据的设置，设置到对应的作用域中：
		HttpSession session = request.getSession();
		//把数据存放到session作用域中
		session.setAttribute("users", users);
		//进行页面的跳转
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
