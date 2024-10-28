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
<%
	//改去作用域中拿取到数据
	ArrayList<Users> users = (ArrayList<Users>)session.getAttribute("users");
%>
<body>	
	遍历数据，并进行拼接
	<table>
	<tr>
		<td>id</td>
		<td>用户名</td>
		<td>密码</td>
		<td>昵称</td>
		<td>年龄</td>
		<td>操作</td>
	</tr>
	<%
		if(users!=null){
		for(Users user: users){
			//内容的拼接			
	%>
		<tr>
			<td><%=user.getId() %></td>
			<td><%=user.getUserName() %></td>
			<td><%=user.getUserPwd() %></td>
			<td><%=user.getNickName() %></td>
			<td><%=user.getAge() %></td>
			<td> <a> 修改</a> | <a href="deleteUsersById?id=<%=user.getId() %>"> 删除</a> </td>
		</tr>
	<%
		}
		}else{
			out.write("没有查询到任何数据！");
		}
	
	%>
	</table>

</body>
</html>