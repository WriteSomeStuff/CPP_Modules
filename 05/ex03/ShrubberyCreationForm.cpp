/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/29 12:43:55 by cschabra      #+#    #+#                 */
/*   Updated: 2024/07/30 17:35:12 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

void	ShrubberyCreationForm::beExecuted() const
{
	std::string		str;
	std::string		tree;
	std::string		dragon;
	std::string		dragon2;
	std::ofstream	destFile;

	str = _target;
	dragon = "                 ___====-_  _-====___\n           _--^^^#####//      \\\\#####^^^--_\n        _-^##########// (    ) \\\\##########^-_\n       -############//  |\\^^/|  \\\\############-\n     _/############//   (@::@)   \\\\############\\_\n    /#############((     \\\\//     ))#############\\\n   -###############\\\\    (oo)    //###############-\n  -#################\\\\  / VV \\  //#################-\n -###################\\\\/      \\//###################-\n_#/|##########/\\######(   /\\   )######/\\##########|\\#_\n|/ |#/\\#/\\#/\\/  \\#/\\##\\  |  |  /##/\\#/  \\/\\#/\\#/\\#| \\|\n`  |/  V  V  `   V  \\#\\| |  | |/#/  V   '  V  V  \\|  '\n   `   `  `      `   / | |  | | \\   '      '  '   '\n                    (  | |  | |  )\n                   __\\ | |  | | /__\n                  (vvv(VVV)(VVV)vvv)\n";
	dragon2 = "                            ==(W{==========-      /===-\n                              ||  (.--.)         /===-_---~~~~~~~~~------____\n                              | \\_,|**|,__      |===-~___                _,-' `\n                 -==\\\\        `\\ ' `--'   ),    `//~\\\\   ~~~~`---.___.-~~\n             ______-==|        /`\\_. .__/\\ \\    | |  \\\\           _-~`\n       __--~~~  ,-/-==\\\\      (   | .  |~~~~|   | |   `\\        ,'\n    _-~       /'    |  \\\\     )__/==0==-\\<>/   / /      \\      /\n  .'        /       |   \\\\      /~\\___/~~\\/  /' /        \\   /'\n /  ____  /         |    \\`\\.__/-~~   \\  |_/'  /          \\/'\n/-'~    ~~~~~---__  |     ~-/~         ( )   /'        _--~`\n                  \\_|      /        _) | ;  ),   __--~~\n                    '~~--_/      _-~/- |/ \\   '-~ \\\n                   {\\__--_/}    / \\\\_>-|)<__\\      \\\n                   /'   (_/  _-~  | |__>--<__|      |\n                  |   _/) )-~     | |__>--<__|      |\n                  / /~ ,_/       / /__>---<__/      |\n                 o-o _//        /-~_>---<__-~      /\n                 (^(~          /~_>---<__-      _-~\n                ,/|           /__>--<__/     _-~\n             ,//('(          |__>--<__|     /                  .----_\n            ( ( '))          |__>--<__|    |                 /' _---_~\\\n         `-)) )) (           |__>--<__|    |               /'  /     ~\\`\\\n        ,/,'//( (             \\__>--<__\\    \\            /'  //        ||\n      ,( ( ((, ))              ~-__>--<_~-_  ~--____---~' _/'/        /'\n    `~/  )` ) ,/|                 ~-_~>--<_/-__       __-~ _/\n  ._-~//( )/ )) `                    ~~-'_/_/ /~~~~~~~__--~\n   ;'( ')/ ,)(                              ~~~~~~~~~~\n  ' ') '( (/\n    '   '  `\n";
	tree = "     v .   ._, |_  .,\n  `-._\\/  .  \\ /    |/_\n      \\\\  _\\, y | \\//\n_\\_.___\\\\, \\\\/ -.\\||\n  `7-,--.`._||  / / ,\n  /'     `-. `./ / |/_.'\n            |    |//\n            |_    /\n            |-   |\n            |   =|\n            |    |\n-----------/ ,  . \\--------\n";
	str.insert(_target.length(), "_shrubbery");
	destFile.open(str, std::ios::out);
	if (destFile.fail())
	{
		std::cerr << "Couldn't create file..\n";
		return ;
	}
	destFile << dragon;
	destFile << '\n';
	destFile << dragon2;
	destFile << tree;
	destFile.close();
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
 : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
