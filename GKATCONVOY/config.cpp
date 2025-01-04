class CfgPatches
{
	class GKATCONVOY
	{
		requiredVersion = 0.1;
		requiredAddons[] = {
            "exile_server"
        };
		units[] = {};
		weapons[] = {};
	};
};

class CfgFunctions 
{
	class GKATCONVOY
	{
		class main 
		{			
			file="GKATCONVOY\bootstrap";
			class preInit
            {
                preInit = 1;
            };
			class postInit
			{
				postInit = 1;
			};
		};
	};
};
