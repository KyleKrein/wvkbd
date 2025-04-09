{
  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs/nixos-unstable";
  };

  outputs =
    { nixpkgs, ... }:
    let
      system = "x86_64-linux";
      pkgs = import nixpkgs {inherit system;};
    in {
      packages.${system}.default = pkgs.callPackage ./package.nix {};

      devShells.${system}.default = pkgs.mkShell {
        name = "wvkbd";

      nativeBuildInputs = with pkgs; [
        pkg-config
        scdoc
        wayland-scanner
      ];
      buildInputs = with pkgs; [
        cairo
        glib
        harfbuzz
        libxkbcommon
        pango
        wayland
      ];
    };
  };
}
