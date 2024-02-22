CREATE TABLE [dbo].[web_auth]
(
	[Id] BIGINT NOT NULL PRIMARY KEY, 
    [email] NVARCHAR(255) NOT NULL, 
    [salt ] CHAR(64) NOT NULL, 
    [hashed_password ] CHAR(64) NOT NULL, 
    [userId] BIGINT NOT NULL
)
