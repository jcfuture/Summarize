package com.r2007.servlet;

import java.io.IOException;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import com.r2007.util.DBHelper;

/**
 * Servlet implementation class DeleteUsersByIdServlet
 */
@WebServlet("/DeleteUsersByIdServlet")
public class DeleteUsersByIdServlet extends HttpServlet {

	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// 通过 a 标签拼接的参数，拿去到需要删除的id 从而可以删除具体的值
		//1.拿去到传递过来的值
		String id = request.getParameter("id");
		//2.去数据库中删除数据
		Connection con = DBHelper.getCon();
		PreparedStatement ps = null;
		String sql = "delete from users where id = ?";
		String msg = "";//向用户提示的信息
		try {
			ps = con.prepareStatement(sql);
			//设置参数
			ps.setString(1, id);
			//执行
			int count = ps.executeUpdate();
			//返回的结果需要让用户感知
			if(count>0) {
				msg = "删除成功！3秒钟后自动跳转到 列表页面！";
			}else {
				msg = "删除失败！3秒钟后自动跳转到 列表页面！";
			}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}finally {
			DBHelper.close(con, ps);
		}
		HttpSession session = request.getSession();
		session.setAttribute("msg", msg);//向用户展示的信息
		session.setAttribute("url", "selectAllUsers");//最终我们要跳转的页面！】
		response.sendRedirect("msg.jsp");
		
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
