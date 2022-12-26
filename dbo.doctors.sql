CREATE TABLE [dbo].[doctors] (
    [Id]       INT           IDENTITY (100, 1) NOT NULL,
    [Username] VARCHAR (50)  NOT NULL unique,
    [Password] VARCHAR (MAX) NOT NULL,
    [Name] VARCHAR(50) NOT NULL, 
    PRIMARY KEY CLUSTERED ([Id] ASC),
    UNIQUE NONCLUSTERED ([Username] ASC)
);

