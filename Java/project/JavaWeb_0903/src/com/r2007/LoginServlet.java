package com.r2007;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class LoginServlet
 */
@WebServlet("/LoginServlet")
public class LoginServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.getWriter().append("Served at: ").append(request.getContextPath());
	}

	/**
	 *  ������Ҫ�ж��Ƿ��¼�ɹ�������Ҫ����  ����ֵ�Ļ�ȡ����ͨ��java���������жԱ�
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// 1. ��ȡ���ݵĲ���
		String userName = request.getParameter("userName");
		String userPwd = request.getParameter("userPwd");
		//���������ת��
		userName = new String(userName.getBytes("ISO-8859-1"), "UTF-8");
		userPwd = new String(userPwd.getBytes("ISO-8859-1"), "UTF-8");
		//����Ӧ������Ϣ���������ı���
		response.setContentType("text/html;charset=UTF-8");
		//2.��������жԱ�
		if(userName.equals("admin") && userPwd.equals("admin123")) {
			//��¼�ɹ�  ��ʾ��Ϣ�� �����
			response.getWriter().append("��¼�ɹ�����¼���û���Ϊ��").append(userName);
		}else{
			//��¼ʧ��
			response.getWriter().append("��¼ʧ�ܣ���¼���û���Ϊ��").append(userName);
		}
	}

}
