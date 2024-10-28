package com.HYY;

import java.io.IOException;

import jakarta.servlet.ServletException;
import jakarta.servlet.http.Cookie;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class HyyServlet
 */
public class HyyServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;

    /**
     * Default constructor. 
     */
    public HyyServlet() {
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// ��ȡ�û�ѡ��ı�����ɫ
        String color = request.getParameter("color");

        //����cookie����
        Cookie cookie = new Cookie("color" , "");

        // ���û�ѡ�����ɫ��ӽ�cookie��
        cookie.setValue(color);

        // ��cookie������ӽ���Ӧ����
        Cookie co = new Cookie("username" , "Test");
        co.setMaxAge(1000);
        response.addCookie(co);
        response.addCookie(cookie);

        // ��ת��ҳ
        response.sendRedirect("test.jsp");
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
