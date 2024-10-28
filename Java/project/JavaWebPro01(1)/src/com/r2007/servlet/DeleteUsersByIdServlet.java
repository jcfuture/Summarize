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
		// ͨ�� a ��ǩƴ�ӵĲ�������ȥ����Ҫɾ����id �Ӷ�����ɾ�������ֵ
		//1.��ȥ�����ݹ�����ֵ
		String id = request.getParameter("id");
		//2.ȥ���ݿ���ɾ������
		Connection con = DBHelper.getCon();
		PreparedStatement ps = null;
		String sql = "delete from users where id = ?";
		String msg = "";//���û���ʾ����Ϣ
		try {
			ps = con.prepareStatement(sql);
			//���ò���
			ps.setString(1, id);
			//ִ��
			int count = ps.executeUpdate();
			//���صĽ����Ҫ���û���֪
			if(count>0) {
				msg = "ɾ���ɹ���3���Ӻ��Զ���ת�� �б�ҳ�棡";
			}else {
				msg = "ɾ��ʧ�ܣ�3���Ӻ��Զ���ת�� �б�ҳ�棡";
			}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}finally {
			DBHelper.close(con, ps);
		}
		HttpSession session = request.getSession();
		session.setAttribute("msg", msg);//���û�չʾ����Ϣ
		session.setAttribute("url", "selectAllUsers");//��������Ҫ��ת��ҳ�棡��
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
