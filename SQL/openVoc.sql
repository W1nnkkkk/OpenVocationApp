SELECT DISTINCT dbo.popka.id_positions, dbo.popka.id_department, dbo.Отделы.Название_отдела, dbo.Должности.Название_должности, dbo.popka.Working, dbo.popka.ALLINALL AS Всего
FROM     dbo.popka INNER JOIN
                  dbo.Должности ON dbo.popka.id_positions = dbo.Должности.Код_должности INNER JOIN
                  dbo.Отделы ON dbo.popka.id_department = dbo.Отделы.Код_отдела
WHERE  (dbo.popka.Working < dbo.popka.ALLINALL)