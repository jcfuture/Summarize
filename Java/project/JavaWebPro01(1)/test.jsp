<%--
  Created by IntelliJ IDEA.
  User: HYY
  Date: 2021/9/11
  Time: 19:08
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<html>
<head>
    <title>Title</title>
</head>
    <%
        // 获取cookie
        Cookie[] cookies = request.getCookies();

        //创建用户cookie和背景色cookie
        Cookie user = null;
        Cookie color = null;

        // 循环遍历，获取自己要用的cookie
        for (Cookie cookie : cookies) {
            if(cookie.getName().equals("username")) user = cookie;
            else if(cookie.getName().equals("color")) color = cookie;
        }
    %>

    <style>
        body{
            background-color: <%= color.getValue() %>;
        }
    </style>

<body>
    欢迎您：<%= user.getValue()%>
    cookie失效时间为： <%= user.getMaxAge() %>
</body>
</html>
