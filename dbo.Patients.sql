CREATE TABLE [dbo].[Patients] (
    [Patient_Id] INT           NOT NULL,
    [NIC]        VARCHAR (50)  NOT NULL,
    [Name]       VARCHAR (50)  NOT NULL,
    [Address]    VARCHAR (MAX) NOT NULL,
    [Mobile]     VARCHAR (50)  NOT NULL,
    [Medicine]   VARCHAR (MAX) NOT NULL,
    [Date]       DATETIME      NOT NULL,
    [Doctor]     VARCHAR (50)  NOT NULL,
    PRIMARY KEY CLUSTERED ([Patient_Id] ASC)
);

