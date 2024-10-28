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
		// 获取用户选择的背景颜色
        String color = request.getParameter("color");

        //创建cookie对象
        Cookie cookie = new Cookie("color" , "");

        // 将用户选择的颜色添加进cookie中
        cookie.setValue(color);

        // 将cookie对象添加进响应流中
        Cookie co = new Cookie("username" , "Test");
        co.setMaxAge(1000);
        response.addCookie(co);
        response.addCookie(cookie);

        // 跳转网页
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
