USE [sotrydniki]
GO
/****** Object:  UserDefinedFunction [dbo].[findPosition]    Script Date: 05.03.2024 15:18:18 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
-- =============================================
-- Author:		<Author,,Name>
-- Create date: <Create Date,,>
-- Description:	<Description,,>
-- =============================================
ALTER FUNCTION [dbo].[findPosition]
(	
	@positionName varchar(50)
)
RETURNS TABLE 
AS
RETURN 
(
	SELECT * FROM openVoc OV
	WHERE OV.Название_должности LIKE '%' + @positionName + '%'
)
