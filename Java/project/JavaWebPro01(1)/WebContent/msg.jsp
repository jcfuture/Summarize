<%@page import="com.r2007.bean.Users"%>
<%@page import="java.util.ArrayList"%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>

	<%=session.getAttribute("msg") %>
	<%
		response.addHeader("refresh", "3;url="+session.getAttribute("url"));
	%>

</body>
</html>