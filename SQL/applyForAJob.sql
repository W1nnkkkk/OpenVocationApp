USE [sotrydniki]
GO
/****** Object:  StoredProcedure [dbo].[applyForAJob]    Script Date: 05.03.2024 15:16:52 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
-- =============================================
-- Author:		<Author,,Name>
-- Create date: <Create Date,,>
-- Description:	<Description,,>
-- =============================================
ALTER PROCEDURE [dbo].[applyForAJob] 
	-- Add the parameters for the stored procedure here
	@Название_должности NVARCHAR(50),
	@Номер_сотрудника INT,
    @Фамилия NVARCHAR(50),
    @Имя NVARCHAR(50),
    @Отчество NVARCHAR(50),
    @Дата_рождения DATETIME,
    @Пол NVARCHAR(10)
AS
BEGIN
	-- SET NOCOUNT ON added to prevent extra result sets from
	-- interfering with SELECT statements.
	SET NOCOUNT ON;

	DECLARE @Код_должности INT, @Номер_назначения INT, @Номер_отдела INT;

	SET @Код_должности = (SELECT DISTINCT TOP(1) Должности.Код_должности FROM Должности WHERE Должности.Название_должности = @Название_должности);
	SET @Номер_назначения = (SELECT TOP (1) Назначения.Номер_назначения FROM Назначения ORDER BY Назначения.Номер_назначения DESC) + 1;
	SET @Номер_отдела = (SELECT TOP(1) Штат.id_department FROM Штат WHERE Штат.id_positions = @Код_должности)


	IF EXISTS (SELECT * FROM Сотрудники WHERE Номер_сотрудника = @Номер_сотрудника)
BEGIN
    -- Увольняем сотрудника
    UPDATE Назначения SET Дата_увольнения = GETDATE() WHERE Номер_сотрудника = @Номер_сотрудника AND Дата_увольнения IS NULL;

    -- Принимаем на новую должность
    INSERT INTO Назначения (Номер_назначения, Номер_сотрудника,Код_должности, Код_отдела , Дата_принятия)
    VALUES (@Номер_назначения, @Номер_сотрудника, @Код_должности, @Номер_отдела , GETDATE());

END
ELSE
BEGIN
    -- Insert statements for procedure here

    INSERT INTO Сотрудники (Номер_сотрудника, Фамилия, Имя, Отечство, Дата_рождения, Пол)
    VALUES (@Номер_сотрудника, @Фамилия, @Имя, @Отчество, @Дата_рождения, @Пол);

	INSERT INTO Назначения (Номер_назначения ,Номер_сотрудника, Код_должности, Код_отдела, Дата_принятия)
    VALUES (@Номер_назначения, @Номер_сотрудника, @Код_должности, @Номер_отдела, GETDATE())

END
END
