{ pkgs }: {
	deps = [
		pkgs.cliquer
  pkgs.sudo
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}